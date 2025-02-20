#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_multimap<string,int> fruitcount;

    fruitcount.insert(make_pair("Banana",5));
    fruitcount.insert(make_pair("Orange",8));
    fruitcount.insert(make_pair("Orange",9));

    for(auto pair:fruitcount){
        cout<<"Fruit-"<<pair.first<<endl;
        cout <<"Count-"<<pair.second<<endl;
    }
}