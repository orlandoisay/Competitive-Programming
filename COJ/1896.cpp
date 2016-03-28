#include <bits/stdc++.h>
using namespace std;

struct ordenVenta {
    int cantidad,
        precio;
    ordenVenta(int c, int p) {
        cantidad = c, precio = p;
    }
};

struct ordenCompra {
    int cantidad,
        precio;
    ordenCompra(int c, int p) {
        cantidad = c, precio = p;
    }
};

bool operator <(ordenVenta a, ordenVenta b) {
    return a.precio > b.precio;
}

bool operator <(ordenCompra a,ordenCompra b) {
    return a.precio < b.precio;
}
priority_queue <ordenVenta> ventas;
priority_queue <ordenCompra> compras;

int T,N;
char type[10];

int main() {
    scanf("%d",&T);

    while(T--) {
        scanf("%d",&N);

        while(ventas.size())
            ventas.pop();
        while(compras.size())
            compras.pop();

        int cantidad, precio, share=-1;

        for(int i=0;i<N;i++) {
            scanf("%s %d shares at %d", type, &cantidad, &precio);

            if(type[0] == 'b')
                compras.push(ordenCompra(cantidad,precio));
            else
                ventas.push(ordenVenta(cantidad,precio));

            while(compras.size() && ventas.size() && compras.top().precio >= ventas.top().precio) {
                ordenCompra c = compras.top();
                compras.pop();
                ordenVenta v = ventas.top();
                ventas.pop();

                int s = min(c.cantidad, v.cantidad);

                c.cantidad -= s;
                v.cantidad -= s;
                share = v.precio;

                if(c.cantidad)
                    compras.push(c);
                if(v.cantidad)
                    ventas.push(v);
            }

            if(ventas.size())
                printf("%d ",ventas.top().precio);
            else
                printf("- ");

            if(compras.size())
                printf("%d ",compras.top().precio);
            else
                printf("- ");

            if(share != -1)
                printf("%d\n", share);
            else
                printf("-\n");
        }
    }

    return 0;
}
