#include<iostream>
#include<vector>
using namespace std;

int main(){
   vector<int>v;

   // for loop 
   for(int i=0;i<5;i++){
    int ele;
    cin >> ele;
    v.push_back(ele);
   }

   for (int i = 0; i < v.size(); i++)
   {
    cout << v[i] << " ";
   }
   cout << endl;

   // for each loop
   v.insert(v.begin()+2,6);
   for(int ele:v){
    cout << ele << " ";
   }
   cout << endl;

   v.erase(v.end()-2);
   // while loop 
   int i = 0;
   while (i<v.size())
   {
    cout << v[i++] << " ";
   }
   
//    cout << "size: "<< v.size()<< endl;
//    cout << "Capacity:"<< v.capacity()<< endl;

//    v.push_back(1);
//    cout << "size: "<< v.size()<< endl;
//    cout << "Capacity:"<< v.capacity()<< endl;

//    v.push_back(2);
//    cout << "size: "<< v.size()<< endl;
//    cout << "Capacity:"<< v.capacity()<< endl;

//    v.push_back(3);
//    cout << "size: "<< v.size()<< endl;
//    cout << "Capacity:"<< v.capacity()<< endl;

//    v.resize(10);
//    cout << "size: "<< v.size()<< endl;
//    cout << "Capacity:"<< v.capacity()<< endl;

return 0;
}