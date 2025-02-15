#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l1 = {1,2,3,4,5};
    // auto itr = l1.begin();
    // cout << *itr << endl;

    // advance(itr,2);
   //  cout << *itr << endl;

   /* for(auto num:l1){
        cout << num << " ";
    } */
    // using iterator
    // for(auto itr=l1.begin();itr!=l1.end();itr++){
    //     cout << *itr << " ";
    // }
    // cout << endl;
    // // reverse iterator
    // for(auto itr=l1.rbegin();itr!=l1.rend();itr++){
    //     cout << *itr << " ";
    // }

    auto itr = l1.begin();
    advance(itr,2);
    // l1.insert(itr,7);
    // l1.insert(itr,3,7);
    auto l = l1.begin();
    auto r = l1.begin();
    advance(r,2);
    l1.insert(itr,l,r);
    for(auto num:l1){
        cout << num << " ";
    } cout << endl;
    // 1 2 1 2 3 4 5
    auto s_itr = l1.begin();
    advance(s_itr,2);

    auto e_itr = l1.begin();
    advance(e_itr,4);
    l1.erase(s_itr,e_itr);
    for (auto num:l1)     {
     cout << num <<" ";
    }
    
}