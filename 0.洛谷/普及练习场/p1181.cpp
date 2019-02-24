#include<iostream>
#include <cstdio>
using namespace std;
int n,now,temp=0;
long long m;
int ans=0;
int main() {
    ios::sync_with_stdio(false); // 提高iostream效率
    cin>>n>>m;
    for(int t=0;t<n;t++) {
        cin>>now;
        if((temp+=now)>m) {
            temp=0;
            ans++;
            temp+=now;
        }
    }
    cout<<++ans<<endl;
    return 0;
}

