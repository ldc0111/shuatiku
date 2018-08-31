#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n;
priority_queue<int ,vector<int>, less<int> > maxheap;
priority_queue<int, vector<int>, greater<int> > minheap;

int temp,minans = 0, maxnans = 0;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> temp;
        maxheap.push(temp);
        minheap.push(temp);
    }
    while(maxheap.size() > 1){
        int a = maxheap.top();
        maxheap.pop();
        int b =maxheap.top();
        maxheap.pop();
        maxnans += (a + b);
        maxheap.push(a + b);
    }

    while(minheap.size() > 1){
        int a = minheap.top();
        minheap.pop();
        int b =minheap.top();
        minheap.pop();
        minans += (a + b);
        minheap.push(a + b);
    }
    cout << minans << endl;
    cout << maxnans << endl;
    return 0;
}
