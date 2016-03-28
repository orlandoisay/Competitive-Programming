#include <bits/stdc++.h>
#define LIMIT 10
using namespace std;

//- NON-DRECREASING

class Node {
public:
    int l,r,val;
    Node *L, *R;

    Node() {}

    Node(int _l,int _r) {
        val = 1;
        l = _l;
        r = _r;
        L = R = NULL;
    }

    void update(int pos, int nval, vector<int> &vals) {
        if(pos==l && pos==r) {
            vals[pos] = nval;
            return;
        }

        int med = (l+r)/2;

        if(pos>med)
            R->update(pos,nval,vals);
        else
            L->update(pos,nval,vals);

        val = L->val & R->val & (vals[med] <= vals[med+1]);
    }

    int range(int ll, int lr, vector<int> &vals) {
        ll = max(ll,l);
        lr = min(lr,r);


        if(ll == l && r == lr)
            return val;
        if(ll > r || lr < l)
            return 1;

        int med = (l+r)/2;

        if(L->l <= ll && lr <= L->r)
            return L->range(ll,lr,vals);
        if(R->l <= ll && lr <= R->r)
            return R->range(ll,lr,vals);

        return L->range(ll,lr,vals) & R->range(ll,lr,vals) & (vals[med]<=vals[med+1]);
    }

    void print(int lvl) {
        for(int i=0;i<lvl;i++)
            printf(" ");
        printf("%d:%d = %d\n",l,r,val);
        if(L != NULL)
            L->print(lvl+1);
        if(R != NULL)
            R->print(lvl+1);
    }

    void print() {
        print(0);
    }
};

Node* createST(int ll,int lr,vector <int> &vals) {
    if(lr < ll)
        return NULL;

    if(ll == lr)
        return new Node(ll,lr);

    int med = (ll + lr) / 2;

    Node* n = new Node(ll,lr);
    n->L = createST(ll,med,vals);
    n->R = createST(med+1,lr,vals);

    n->val = n->L->val & n->R->val & (vals[med] <= vals[med+1]);

    return n;
}

Node *ND = new Node();

//- INCREASING

class Node2 {
public:
    int l,r,val;
    Node2 *L, *R;

    Node2() {}

    Node2(int _l,int _r) {
        val = 1;
        l = _l;
        r = _r;
        L = R = NULL;
    }

    void update(int pos, int nval, vector<int> &vals) {
        if(pos==l && pos==r) {
            vals[pos] = nval;
            return;
        }

        int med = (l+r)/2;

        if(pos>med)
            R->update(pos,nval,vals);
        else
            L->update(pos,nval,vals);

        val = L->val & R->val & (vals[med] < vals[med+1]);
    }

    int range(int ll, int lr, vector<int> &vals) {
        ll = max(ll,l);
        lr = min(lr,r);


        if(ll == l && r == lr)
            return val;
        if(ll > r || lr < l)
            return 1;

        int med = (l+r)/2;

        if(L->l <= ll && lr <= L->r)
            return L->range(ll,lr,vals);
        if(R->l <= ll && lr <= R->r)
            return R->range(ll,lr,vals);

        return L->range(ll,lr,vals) & R->range(ll,lr,vals) & (vals[med]<vals[med+1]);
    }
};

Node2* createST2(int ll,int lr,vector <int> &vals) {
    if(lr < ll)
        return NULL;

    if(ll == lr)
        return new Node2(ll,lr);

    int med = (ll + lr) / 2;

    Node2* n = new Node2(ll,lr);
    n->L = createST2(ll,med,vals);
    n->R = createST2(med+1,lr,vals);

    n->val = n->L->val & n->R->val & (vals[med] < vals[med+1]);

    return n;
}

Node2 *INC = new Node2();

int N,Q;
vector <int> Array;

int main() {
    scanf("%d %d",&N, &Q);
    Array.resize(N);

    for(int i=0;i<N;i++)
        scanf("%d",&Array[i]);

    ND = createST(0,N-1,Array);
    INC = createST2(0,N-1,Array);

    while(Q--) {
        int O,I,X;
        scanf("%d %d %d",&O,&I,&X);

        if(O == 1) {
            ND->update(I-1,X,Array);
            INC->update(I-1,X,Array);
        }
        else {
            if(INC->range(I-1,X-1,Array))
                printf("2\n");
            else if(ND->range(I-1,X-1,Array))
                printf("1\n");
            else
                printf("0\n");
        }
    }

    return 0;
}
