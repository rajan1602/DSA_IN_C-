#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n+1);

    for(int i=1;i<=n;i++){
        cin >> v[i];
    }
    // calculate prefix sum
    for(int i=1;i<=n;i++){
        v[i+1] += v[i];
    }
    int q;
    cin >> q;
    while(q--){
       int l,r; cin >> l >> r;
       int ans = 0;
       ans = v[r] - v[l-1];
       cout << ans << endl;
    }
}