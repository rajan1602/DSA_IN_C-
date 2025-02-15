// #include<deque>
// #include<iostream>
// #include<vector>
// using namespace std;

// void Maxi_Window(vector<int> &arr, int k){
//     deque<int> dq;
//     // vector<int>res;
//     for(int i=0;i<k;i++){
//         while(not dq.empty() && arr[i] >= arr[dq.back()]){
//             dq.pop_back();
//         }
//         dq.push_back(i);
//     }
//       //  res.push_back(arr[dq.front()]);

//     for(int i = k;i < arr.size();i++){
//         int curr = arr[i];
//         if(dq.front() == (i-k)) dq.pop_front();
//         while(not dq.empty() and arr[dq.back()] < arr[i]){
//             dq.pop_back();
//     }
//     dq.push_back(i);
//     // res.push_back(arr[dq.front()]);
//     }
//     cout<<arr[dq.front()] <<" "<<endl;
//     // return res;
// }

// int main(){
//     vector<int> arr = {1, 2, 3, 4, 5};
//     int k = 3;
//     Maxi_Window(arr, k);
//     return 0;
// }


#include <deque>
#include <iostream>
#include <vector>
using namespace std;

void Maxi_Window(vector<int> &arr, int k) {
    deque<int> dq;

    // Process the first window
    for (int i = 0; i < k; i++) {
        while (!dq.empty() && arr[i] >= arr[dq.back()]) {
            dq.pop_back();
        }
        dq.push_back(i);
    }

    // Process the rest of the windows
    for (int i = k; i < arr.size(); i++) {
        // Print the maximum of the previous window
        cout << arr[dq.front()] << " ";

        // Remove indices that are out of the current window
        if (!dq.empty() && dq.front() == i - k) {
            dq.pop_front();
        }

        // Remove elements smaller than the current element
        while (!dq.empty() && arr[i] >= arr[dq.back()]) {
            dq.pop_back();
        }

        // Add the current element index
        dq.push_back(i);
    }

    // Print the maximum of the last window
    cout << arr[dq.front()] << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 3;
    Maxi_Window(arr, k);
    return 0;
}
