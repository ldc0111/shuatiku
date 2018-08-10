/*************************************************************************
> File Name: p1138.cpp
> Author:
> Mail: 
> Created Time: 2018年06月06日 星期三 22时09分32秒
************************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int n, k, a;
set<int, less<int> > t;
int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin>> a;
        t.insert(a);
    }
    if(t.size() >= k){
       set<int> ::iterator it = t.begin();
        for(int i = 1; i< k; i++) it++;
        cout << *it << endl;
    }else {
        cout << "NO RESULT" << endl;
    }

    return 0;
}
