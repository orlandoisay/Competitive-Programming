#include <bits/stdc++.h>
using namespace std;

int n, v[10];
bool omx, omn;

int main() {
    scanf("%d", &n);
    printf("Lumberjacks:\n");

    while(n--) {
        for(int i=0;i<10;i++)
            scanf("%d", &v[i]);

        omx = omn = true;

        for(int i=1;i<10;i++) {
            if(v[i] < v[i-1]) omn = false;
            if(v[i] > v[i-1]) omx = false;
        }

        printf("%s\n", (omx || omn) ? "Ordered" : "Unordered");
    }

}
