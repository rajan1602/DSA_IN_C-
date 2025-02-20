#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> map1;

    map1["Rajan"] = 13425;
    map1["Naman"] = 23452;
    map1["Zenny"] = 76534;

    for(auto elements:map1){
        cout << "Name:- "<< elements.first<< endl;
        cout<<"PhoneNo:- "<< elements.second<<endl;
    }cout << endl;

    //map1["Zenny"] = 34543;
    // map1.insert(make_pair("Zenny",34543));
    for(auto elements:map1){
        cout << "Name:- "<< elements.first<< endl;
        cout<<"PhoneNo:- "<< elements.second<<endl;
    }

    // from begin to end

    map<string,int>::iterator itr;
    for(itr=map1.begin();itr!=map1.end();itr++){
        cout <<itr->first<<"-"<<itr->second<< endl;
    }

    // from begin to end in reverse order

    // map<string,int>::reverse_iterator itr;
    // for(itr=map1.rbegin();itr!=map1.rend();itr++){
    //     cout <<itr->first<<"-"<<itr->second<< endl;
    // }
}

