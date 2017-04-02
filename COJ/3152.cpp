#include <bits/stdc++.h>
using namespace std;

char str[10], clck[7][35];

void ver(int y, int x) {
    clck[x][y] = clck[x+3][y] = '+';
    clck[x+1][y] = clck[x+2][y] = '|';
}

void hor(int y, int x) {
    clck[x][y] = clck[x][y+4] = '+';
    clck[x][y+1] = clck[x][y+2] = clck[x][y+3] ='-';
}

void draw(int digit, int place) {
    int segments[] = {119,96,62,124,105,93,95,100,127,125};

    if((1<<0) & segments[digit])
        ver(place, 0);
    if((1<<1) & segments[digit])
        ver(place, 3);
    if((1<<2) & segments[digit])
        hor(place, 0);
    if((1<<3) & segments[digit])
        hor(place, 3);
    if((1<<4) & segments[digit])
        hor(place, 6);
    if((1<<5) & segments[digit])
        ver(place+4, 0);
    if((1<<6) & segments[digit])
        ver(place+4, 3);
}

void printClock() {
    for(int i=0;i<7;i++)
        printf("%s\n",clck[i]);
    printf("\n\n");
}

int main() {
    while(true) {
        scanf("%s", str);

        if(str[0] == 'e') {
            printf("end\n");
            break;
        }

        for(int i=0;i<7;i++)
            for(int j=0;j<29;j++)
                clck[i][j] = ' ';
        clck[2][14] = clck[4][14] = 'o';

        draw(str[0]-'0', 0);
        draw(str[1]-'0', 7);
        draw(str[3]-'0', 17);
        draw(str[4]-'0', 24);

        printClock();
    }

    return 0;
}
