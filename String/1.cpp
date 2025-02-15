#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
    // string str = "college";
    // string str1("Wallah");
    // cout << str << " "<< str1 << endl;

    //string str;
    //cin >> str;
    // getline(cin,str);
    // cout << str;

    // char ch = 'A';
    // cout << int(ch);

    // string str = "hello";
    // reverse(str.begin(),str.end());
    // cout << str << endl;

    // string str = "Herajanpal";
    // cout<< str.substr(2,5);

    // string s1 = "college";
    // string s2 = "wallah";
    // s1+=s2;
    // cout << s1 << endl;

    // char s1[20] = "college";
    // char s2[20] = "wallah";

    // strcat(s1,s2);
    // cout << s1 << endl;
    
    // string s1 = "abcd";
    // char ch = 'e';

    // s1.push_back(ch);
    // cout << s1 << endl;

    // string s1 = "abcde";
    // cout << s1.size()<< endl;
    // char ch[20] = "abcde";
    // cout << strlen(ch)<< endl;

    int num = 432;
    string str = to_string(num);
    str+="1";
    cout << str[1]<<endl;
}