#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,string> records;
    records.insert(make_pair(3,"ria"));
    records[1] = "balli";
    records[2] = "zenny";
    //records[3] = "payal"; // it will change the name at roll no 3
    // records.insert(make_pair(3,"Payal")); // it will not change

    for(auto pair:records){
        cout <<"RollNo- "<<pair.first<< endl;
        cout <<"Name - "<<pair.second<<endl;
    }
}