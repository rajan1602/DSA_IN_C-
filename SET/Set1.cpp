#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string> invitelist;
    int n; cin >> n;
    while (n--){
        string name; cin >> name;
        invitelist.insert(name);
    }
    cout << "Printed names"<< endl;
    for(auto name:invitelist){
        cout << name << endl;
    }
}