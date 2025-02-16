#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter the size of both vectors:-"<< endl;
    int n,m; cin >> n >> m;
    vector<int>v1(n);
    vector<int>v2(m);

    cout << "Enter the elements of v1:-"<< endl;
    for(int i=0;i<n;i++){
        cin >> v1[i];
    }
    cout << "Enter the elements of v2:-"<< endl;
    for(int i=0;i<m;i++){
        cin >> v2[i];
    }
    set<int> s1;
    set<int> s2;
    int ans_sum = 0;
    for(auto ele:v1){
        s1.insert(ele);
    }

    for(auto ele:v2){
        if(s1.find(ele)!=s1.end()){
            ans_sum+= ele;
        }
    }
    cout << "Answes as :="<< ans_sum << endl;
}