// #include<iostream>
// #include<vector>
// #include<string>
// #include<algorithm>
#include<bits/stdc++.h>
using namespace std;

string DecodeString(string s){
    string res = "";
    // traversing the encoded string
    for(int i=0;i<s.length();i++){
        if(s[i] != ']') {
            res.push_back(s[i]);
        }
        else{
       // extract string from result
       string str = "";
       while (!res.empty() && res.back()!='['){
        str.push_back(res.back());
        res.pop_back();
       }
       // reversing the str
       reverse(str.begin(),str.end());
       // removing the '[' from res
       res.pop_back();
       // extract num from result
       string num = "";
       while (!res.empty() && res.back()>='0' && res.back()<='9'){
        num.push_back(res.back());
        res.pop_back();
       }
       // reverse the num string
       reverse(num.begin(),num.end());
       // convert num to int
       int int_num = stoi(num);
       // inserting str in result int_num times
       while (int_num){
          res += str;
          int_num--;
       }
       
      }
    }
    return res;
}

int main(){
    string str;
    cin >> str;

    cout<<DecodeString(str)<<endl;
}