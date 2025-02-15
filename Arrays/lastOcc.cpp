#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);
    for(int i=0;i<6;i++){
      cin >> v[i];
    }
    cout << "Enter the element:"<< endl;
    int x;
    cin >> x;

    int occurence = -1;
// TRAVERSING FROM 0 INDEX

    // for(int i=0;i<v.size();i++){
    //     if(v[i] == x){
    //         occurence = i;
    //     }
    // }

// TRAVERSING FROM LAST INDEX

    for(int i=v.size()-1;i >= 0;i--){
        if(v[i] == x){
            occurence = i;
            break;
        }
    }
    cout << occurence << endl;
}