#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
  
// string LongestCommonPrefix(vector<string> &str){
//         // sorting the array of string 
//         sort(str.begin(), str.end());
//         string s1 = str[0]; // first string
//         string s2 = str[str.size()-1]; // last string
//         int i = 0; int j=0;
//         string ans ="";
//         while(i<s1.size() && j<s2.size()){
//             if(s1[i]==s2[j]){
//                 ans+=s1[i];
//                 i++; j++;
//         }
//         else{
//             break;
//             }
//         }
//         return ans;
//    } 
string LongestCommonPrefix(vector<string> &str){
    string s1 = str[0];
    int ans_length = s1.size();
    for(int i=1;i<str.size();i++){
        int j=0;
        while(j<s1.size() && j<str[i].size() && s1[j]==str[i][j])
        j++;
        ans_length = min(ans_length,j);
    }
    string ans = s1.substr(0,ans_length);
    return ans;
   }
int main(){
    int n; 
    cout << "Enter size of string" << endl;
    cin >>n;
    vector<string>str(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    cout<<"Longest common prefix "<<LongestCommonPrefix(str)<<endl;
}