#include <bits/stdc++.h>
using namespace std;

int toInt(char c) {
    if(isalpha(c)) return c - 'a' + 1;
    return 27 + c - '0';
}

int hashStr(string &s) {
    int val = 0;

    for(int i=0;i<s.size();i++) {
        val = val * 36 + toInt(s[i]);
    }

    return val;
}

int N, M, K, L;
map < pair<int,int>, vector<int> > DB;

int main() {
    scanf("%d",&N);

    for(int i=0;i<N;i++) {
        scanf("%d", &K);

        for(int j=0;j<K;j++) {
            string s;
            char k_buf[10], v_buf[10];
            scanf("%[^=]=%s",k_buf,v_buf);

            s = k_buf;
            int k = hashStr(s);

            s = v_buf;
            int v = hashStr(s);

            DB[make_pair(k,v)].push_back(i);
        }

    }

    scanf("%d",&M);

    for(int i=0;i<M;i++) {
        scanf("%d", &L);

        map <int,int> C;
        int R = 0;

        for(int j=0;j<L;j++) {
            string s;
            char k_buf[10], v_buf[10];
            scanf("%[^=]=%s",k_buf,v_buf);

            s = k_buf;
            int k = hashStr(s);

            s = v_buf;
            int v = hashStr(s);

            vector<int> LIST = DB[make_pair(k,v)];

            for(int x=0;x<LIST.size();x++)
                C[LIST[x]]++;

        }

        for(map<int,int>::iterator it = C.begin();it != C.end();it++) {
            if(it->second == L)
                R++;
        }

        printf("%d\n",R);
    }



    return 0;
}
