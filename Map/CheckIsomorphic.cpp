#include<bits/stdc++.h>
using namespace std;
bool checkNoOnetoonemapping(string s1,string s2){
    unordered_map<char,char> m;
    for(int i=0;i<s1.length();i++){
        if(m.find(s1[i])!=m.end()){
            if(m[s1[i]]!=s2[i]){
                return false;
            }
        }
        else{
            m[s1[i]] = s2[i];
        }
    }
    return true;
}
Isomorphic(string s1, string s2){
    if(s1.length()!=s2.length()){
        return false;
    }

    // checking one-to-many mapping from s1->s2
    bool s1s2 = checkNoOnetoonemapping(s1,s2);
    // checking one-to-many mapping from s2->s1
    bool s2s1 = checkNoOnetoonemapping(s2,s1);
    return s1s2 && s2s1;
    
}
int main(){
    string s1,s2; cin >> s1>>s2;

    cout<<(Isomorphic(s1,s2)?"Is isomorphic":"Is not isomorphic");
}






//  SECOND WITHOUT USING TWO FUNCTION 
//#include<bits/stdc++.h>
//using namespace std;

// Isomorphic(string s1, string s2){
//     if(s1.length()!=s2.length()){
//         return false;
//     }
//     // checking one-to-many mapping from s1->s2
//     unordered_map<char,char> m;
//     for(int i=0;i<s1.length();i++){
//         if(m.find(s1[i])!=m.end()){
//             if(m[s1[i]]!=s2[i]){
//                 return false;
//             }
//         }
//         else{
//             m[s1[i]] = s2[i];
//         }
//     }
    
    
//     // checking one-to-many mapping from s2->s1
    
//     //unordered_map<char,char> m;
//     for(int i=0;i<s2.length();i++){
//         if(m.find(s2[i])!=m.end()){
//             if(m[s2[i]]!=s1[i]){
//                 return false;
//             }
//         }
//         else{
//             m[s2[i]] = s1[i];
//         }
//     }
//     return true;
// }
// int main(){
//     string s1,s2; cin >> s1>>s2;

//     cout<<(Isomorphic(s1,s2)?"Is isomorphic":"Is not isomorphic");
// }