#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    
    queue<int> q;
    for(int i =1;i<=n; i++)
        q.push(i);
    cout << "<";
    while(!q.empty()){
        for(int i=1; i<k; i++){ // k번째 사람을 제거
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        if(q.size() > 1)
            cout << ", ";
        q.pop();
    }
    cout <<">";
}