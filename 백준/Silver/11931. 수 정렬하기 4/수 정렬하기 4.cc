#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, temp;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> temp;
        arr[i] = temp;
    }
    sort(arr, arr+n, greater<int>());
    
    for(int i = 0; i<n; i++){
        
        cout << arr[i] << "\n";
    }
       
    
}