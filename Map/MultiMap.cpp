#include<bits/stdc++.h>
using namespace std;

int main(){
    multimap<string,int> directory;
    
    directory.insert(make_pair("Rajan",23455));
    directory.insert(make_pair("Zenny",54324));
    directory.insert(make_pair("Kajal",87654));
    // directory['Rajan'] = 09876; // this operation is not in multimap
    directory.insert(make_pair("Rajan",90876));

    for(auto pair:directory){
        cout << "Name - "<<pair.first<<endl;
        cout <<"PhoneNo-"<<pair.second<< endl;
    }
    cout <<directory.count("Rajan")<< endl;
}