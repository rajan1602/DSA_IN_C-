#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,p,q; cin>>n>>p>>q;

    unordered_set<int> s;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){

            int correct = i;
            int incorrect = j;
            int unattempted = n - (i + j);

            if(unattempted>=0){
                int score = correct*p+incorrect*q;
                s.insert(score);
            }
            else{
                break;
            }
        }
    }
    for(auto val:s){
        cout << val << " ";
    } cout << endl;
    
    cout << s.size() << endl;
}