#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> Set1;

    // insertion in set
    Set1.insert(3);
    Set1.insert(2);
    Set1.insert(1);
    Set1.insert(4);
    Set1.insert(5);

    cout << Set1.size() << endl;
    Set1.insert(3);
    // size will remains same as this is not store duplicate values
    cout << Set1.size() << endl;

    // traversing the set using iterator method
    //set<int>:: iterator itr;
    // for(itr=Set1.begin();itr!=Set1.end();itr++){
    //     cout << *itr <<" ";
    // }cout << endl;
    // using for each
    for(auto value:Set1){
        cout << value << " ";
    } cout << endl;

    // deletion of elements
    //Set1.erase(4);

    // auto itr = Set1.begin();
    // advance(itr,3);
    // Set1.erase(itr);
 
    auto start_itr = Set1.begin();
    start_itr++;
    auto end_itr = Set1.begin();
    advance(end_itr,3);
    Set1.erase(start_itr,end_itr);


    for(auto value:Set1){
        cout << value << " ";
    }

}