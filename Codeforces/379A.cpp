#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    int total=a;


    while(a>=b)
    {
        int temp = a%b;
        a/=b;
        total+=a;
        a+=temp;
    }

    cout << total << endl;


    return 0;
}