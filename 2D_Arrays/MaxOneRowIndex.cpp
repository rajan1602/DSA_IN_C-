#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int MaxOnes(vector<vector<int>>&V){
    int maxOnes = INT_MIN;
    int maxOnesRow = -1;
    int column = V[0].size();
    for(int i = 0; i < V.size(); i++){
      for(int j=0;j<V[i].size();j++){
        if(V[i][j] == 1){
            int numberofOnes = column - j;
            if(numberofOnes > maxOnes){
                maxOnes = numberofOnes;
                maxOnesRow = i;
                } break;
                }
                }
      }
      return maxOnesRow;
}
int main(){
    int n,m; cin >>n>>m;
    vector<vector<int>>vec(n,vector<int>(m));
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cin >> vec[i][j];
    }
  }
  int res = MaxOnes(vec);
  cout <<res<<endl;

}