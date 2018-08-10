/*************************************************************************
	> File Name: p2524.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年08月04日 星期六 17时17分32秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

int a[10];
int fl[10] = {0};
int n,m;
void init(){
    a[0] = 1;
    for(int i = 1; i < 10; i++){
        a[i] = a[i - 1] * i;
    }
}
int get_num(int k,int i){
    int time = 0,ind = 0;
    for(int i =  1; i< k;i++){
        if(fl[i] == 0) ind++;
    }
    fl[k] = 1;
    time  = ind * a[n - i];
//    printf("ind:%d n:%d i:%d a[n - i]:%d\n",ind, n, i,a[4] );
    return time;

}


int main(){
    int i = 0,ans = 0;
    int aa[10] ={0};
    cin >> n >> m;
    init();
    while(m){
        aa[n - i] = m%10;
        m /= 10;
        i++;
    }
    for(int i = 1; i <= n;i++){
        ans += get_num(aa[i],i);    
       // printf("%d\n",ans);
    }
    printf("%d\n",ans + 1);
    return 0;
}
