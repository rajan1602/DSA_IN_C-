#include<iostream>
#include<vector>
#include<string>
using namespace std;

string CountSort(string str){
    int n = str.length();
    vector<int>freq(26,0);
    // storing frequency of every character in string
    for(int i=0;i<n;i++){
       int index = str[i] -'a';
       freq[index]++;
    }
    // create our sorted string 
    int j = 0;
    for(int i=0;i<26;i++){
        while(freq[i]--){
            str[j++] = i+'a';
        }
    }
    return str;
}

int main(){
    string str; cin >> str;

    cout << CountSort(str)<<endl;
}