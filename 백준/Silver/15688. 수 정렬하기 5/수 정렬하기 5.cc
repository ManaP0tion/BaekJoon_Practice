#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
    vector<int> v;
    
    int n;
    cin >> n;
    int num;
    for(int i = 0; i<n; i++){
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    
    for(int i=0; i<n; i++){
        cout << v[i] << "\n";
    }
    
    
}