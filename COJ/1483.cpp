#include <bits/stdc++.h>

using namespace std;

char a[200];
int b,c;

int main()
{
    cin >> a;

    if(a[0]=='r')
    {
        cin >> b >> c;
        cout << b*c;
    }
    else
    {
        cin >> b;
        cout << b*b;
    }

    cout << "\n";
    return 0;
}
