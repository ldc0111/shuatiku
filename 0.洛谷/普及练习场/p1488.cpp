/*************************************************************************
	> File Name: p1488.cpp
	> Author:
	> Mail: 
 ************************************************************************/

#include <iostream>
using namespace std;

int s[50005] = {0};
int n, a, b, c, aa, bb, cc;

int main(){
    cin >> n;
    cin >> a >> b >> c;
    s[a]++, s[b]++, s[c]++;
    for(int i = 0; i < n - 3; i++){
       cin >> aa >> bb >> cc;
        s[aa]++, s[bb]++, s[cc]++;
    }
    if(s[a] == 1 || s[b] == 1 || s[c] == 1) cout << "JMcat Win";
    else if((n - 2) % 2 == 0) cout << "JMcat Win";
    else cout << "PZ Win";


    return 0;
}
