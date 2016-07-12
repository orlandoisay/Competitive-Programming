/**
 * Segment Tree Código de ejemplo usando memoria dinámica.
 *
 * {author} Orlando Isay Mendoza Garcia
 * {email} orlandoisay@gmail.com || morlandoisay@hotmail.com
 *
 */
#include <bits/stdc++.h>
#define INFINITY 1000000000
using namespace std;

/**
 * Clase ST (Segment Tree)
 *
 * Representa un nodo de un segment tree.
 *
 */
class ST {
public:
    int inf, sup, val; // El nodo se encarga del intervalo [inf,sup]
    ST *izq=NULL, *der=NULL; // Cada nodo puede tener cero o dos nodos hijos

    /**
     * Constructor
     *
     * Este es el constructor principal. Toma como argumentos la lista y
     * el rango que tomará el nodo actual.
     *
     */
    template <class T>
    ST(vector<T> &vec, int _inf, int _sup) {
        inf = _inf, sup = _sup; // Se asignan los valores del intervalo.

        if(inf == sup) { // Significa que el nodo es un nodo hoja.
            val = vec[inf]; // Usualmente las hojas toman el valor de la lista.
            return;
        }

        // En caso de que no sea nodo hoja debemos partir el intervalo orignal.

        int med = (inf + sup) / 2;

        // Primero se deben crear los nodos hijos.

        izq = new ST(vec, inf, med);
        der = new ST(vec, med+1, sup);

        // Una vez creados, debemos unir sus valores para generar el valor de
        // este nodo.

        val = min(izq->val, der->val);

        // En este caso el segment tree va a guardar el valor más pequeño del
        // rango.

        // Otros usos pueden ser:
        //
        // val = max(izq->val, der->val); para guardar el máximo
        // val = izq->val + der->val; para guardar la suma acumulada;
        //
    }

    /**
     * Constructor
     *
     * Lo único que hace este constructor es llamar el otro constructor con
     * los datos correspondientes. Solo es para que sea más fácil llamarlo
     * desde el código.
     *
     */
    template <class T>
    ST(vector<T> &vec) : ST(vec, 0, vec.size()-1) {}

    /**
     * Método para imprimir el segment tree para 'debuggear'
     *
     */
    void print(int lvl = 0) {
        for(int i=0;i<lvl;i++)
            cout << "  ";
        cout << "[" << inf << "," << sup << "] = " << val << "\n";
        if(izq != NULL)
            izq->print(lvl+1);
        if(der != NULL)
            der->print(lvl+1);
    }

    void update(int pos, int nval) {
        if(inf == sup && inf == pos) { // Llegamos al nodo a actualizar
            val = nval;
            return;
        }

        int med = (inf + sup) / 2;

        if(pos <= med)
            izq->update(pos,nval);
        else
            der->update(pos,nval);
    }

    int query(int _inf, int _sup) {
        // El intervalo cubre completamente este nodo.
        if(_inf <= inf && sup <= _sup) {
            return val;
        }

        // El intervalo no 'toca' a este nodo.
        if(_sup < inf || _inf > sup) {
            return INFINITY;
            // Como este segment tree guarda el menor si regresamos
            // infinito no lo va a tomar en cuenta.
            // Si guardara el mayor deberiamos regresar -infinito.
            // Si guardara la suma deberia regresar 0.
        }

        return min(izq->query(_inf, _sup), der->query(_inf, _sup));
    }
};



ST *seg;
vector<int> v;

int main() {
    int v_size = 8;

    for(int i=0;i<v_size;i++) {
        v.push_back(rand() % 20 +1);
        cout << i << ":" <<v[i] << " ";
    }
    cout << "\n";

    seg = new ST(v);
    seg->print();
    cout << "\n";

    // Para probar operaciones
    for(int i=0;i<10;i++) {
        int x, y, op = rand() % 2;

        if(op) {
            x = rand() % v_size;
            y = rand() % 20 + 1;
            cout << "Changing value in " << x << " to " << y << "\n";
            seg->update(x, y);
            system("pause");
            seg->print();
        }
        else {
            x = rand() % v_size;
            y = rand() % (v_size - x) + x;
            cout << "Query value in range [" << x << ", " << y << "] = " << seg->query(x, y) << "\n";
        }
        system("pause");
    }

    return 0;
}
