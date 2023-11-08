#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> pq;
    int temp;
    for(int i =0; i< n*n; i++){
        cin >> temp;
        pq.push(temp);
        if(pq.size() > n)
            pq.pop(); 
    }
    cout << pq.top();
     
}