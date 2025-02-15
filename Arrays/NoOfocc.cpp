#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);
    for(int i=0;i<v.size();i++){
      cin >> v[i];
    }
    cout << "Enter the element:"<< endl;
    int x;
    cin >> x;

    int occurence = 0;
// TRAVERSING FROM 0 INDEX

    for(int i=0;i<v.size();i++){
        if(v[i] > x){
            occurence++;
        }
    }

    cout << occurence << endl;
}