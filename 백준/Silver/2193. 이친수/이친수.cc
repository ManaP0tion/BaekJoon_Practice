#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long arr[91];

    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 2;
    for(int i = 4; i<=90; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    cout << arr[n];
}