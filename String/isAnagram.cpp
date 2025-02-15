#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isAnagram(string s1,string s2){
    // create freq array
    vector<int> freq(26,0);
    // if length are different for both s1,s2 return false
    if(s1.length()!=s2.length()){
        return false;
    }
    // count frequency of each character in s1
    for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++;// for s1, we are incrementing freq of char
        freq[s2[i]-'a']--;// for s2, we are decrementing freq of char
    }
    // check if all freq are 0
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
    }

int main(){
    string s1,s2; cin>>s1>>s2;
    // isAnagram(s1,s2);
    if(isAnagram(s1,s2)){
        cout << "String are Anagrams"<<endl;
    }
    else{
        cout << "String are not Anagrams"<<endl;
    }
}