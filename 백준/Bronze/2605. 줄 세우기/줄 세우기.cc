#include <iostream>
#include <vector>
using namespace std;



int main(){
    int n, x;
    cin >> n;
    vector<int> v(n);
    for(int i = 1; i<=n; i++){
        cin >> x;
        v.insert(v.begin() + x, i);
    }

    for(int i = n-1; i>=0; i--)
        cout << v[i] << " ";
    
}