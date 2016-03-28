#include <bits/stdc++.h>

using namespace std;

string s;
map <string,int>m;
string l[50000];
int ind;

int main()
{
    cin >> s;

    int len=s.length();

    for(int i=0;i<=len-8;i++)
    {
        string w=s.substr(i,8);

        if(m[w]==0)
        {
            m[w]=1;
            l[ind++]=w;
        }
        else
            m[w]++;
    }

    sort(l,l+ind);

    string smx;
    int mx=0;

    for(int i=0;i<ind;i++)
    {
        string w=l[i];

        if(m[w]>mx)
        {
            mx=m[w];
            smx=w;
        }
    }

    if(mx>1)
        cout << smx << "\n";
    else
        cout << "Solution was not found\n";

    return 0;
}
