#include <bits/stdc++.h>
using namespace std;

int packages = 1,result;
map <string,int> ids;
set <string> dependencies[9005];
int state[9005]; // { 0: desinstalled, 1:checking, 2: installed, 3: impossible }
string str;

bool check(int package_id) {
    //Checking if was already solved this package_id
    if(state[package_id] == 1)
        return false;
    if(state[package_id] == 2)
        return true;
    if(state[package_id] == 3)
        return false;

    //Mark the current package state as checking
    state[package_id] = 1;

    if(dependencies[package_id].size() == 0) {
        state[package_id] = 2;
        return true;
    }
    set <string>::iterator it;

    for(it = dependencies[package_id].begin();it != dependencies[package_id].end(); ++it) {
        int new_id = ids[(*it)];
        if(!new_id || !check(new_id)) {
            state[package_id] = 3;
            return false;
        }
    }

    state[package_id] = 2;
    return true;
}

int main() {
    while(cin >> str) {
        ids[str] = packages;

        while(true) {
            cin >> str;
            if(str != "0")
                dependencies[packages].insert(str);
            else
                break;
        }

        packages++;
    }

    for(int i=1;i<packages;i++)
        check(i);


    for(int i=1;i<packages;i++)
        result += (state[i]==2);
    cout  << result << "\n";

    return 0;
}
