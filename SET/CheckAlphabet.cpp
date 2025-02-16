#include<bits/stdc++.h>
using namespace std;
bool CheckAllAlphabet(string s){
    if(s.length()<26) return false;

    transform(s.begin(),s.end(),s.begin(),::tolower);
    set<char> alphabets;
    for(auto ch:s){
        alphabets.insert(ch);
    }
    return (alphabets.size()==26);
}

int main(){
    cout << "Enter any string:-"<< endl;
    string input; cin >> input;
    
    if(CheckAllAlphabet(input)){
        cout <<"YES"<< endl;
    }
    else{
        cout << "NO"<< endl;
    }

}