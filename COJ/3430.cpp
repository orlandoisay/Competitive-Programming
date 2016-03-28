#include <bits/stdc++.h>
using namespace std;

class Tree {
public:
    char value;
    Tree * parent;
    vector<Tree *> children;

    Tree() {}

    Tree(char _value, Tree* _parent) {
        value = _value;
        parent = _parent;
    }

    void addChild(char c) {
        children.push_back(new Tree(c,this));
    }

    Tree * addSubtree() {
        children.push_back(new Tree(1-value, this));
        return children[children.size()-1];
    }

    void print() {
        if(value == 0) {
            for(int i=0;i<children.size();i++)
                children[i]->print();
            return;
        }
        if(value == 1) {
            for(int i=children.size()-1;i>=0;i--)
                children[i]->print();
            return;
        }
        printf("%c",value);
    }
};

Tree * root;
Tree * cur;
char str[10000];

int main() {
    root = new Tree(0, NULL);
    cur = root;

    fgets(str,10000,stdin);

    for(int i=0;i<strlen(str);i++) {
        if(str[i] == '(') {
            cur = cur->addSubtree();
        }
        else if(str[i] == ')') {
            cur = cur->parent;
        }
        else {
            cur->addChild(str[i]);
        }
    }

    root->print();

    return 0;
}
