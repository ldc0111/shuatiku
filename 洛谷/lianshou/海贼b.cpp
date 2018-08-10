#include <iostream>
#include <cstring>

using namespace std;
int a[2000];
int b[2000];
int at = 0,bt = 0;

int gjc(int a[],int x,int tt){
  for(int i = 0; i<= tt;i++){
    a[i] *= x;
  }
  int temp = 0;
  for(int i = 0; i <= tt; i++){
    a[i] += temp;//上
    temp = a[i]/10;
    a[i] %= 10;
  }
  while(temp > 0){
    tt++;
    a[tt] = temp%10;
    temp /=10;
  }
  return tt;
}

int main(){
    int n;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    a[0] = 1;
    b[0] = 1;
    cin >> n;
    for(int i = 2; i<= n; i++){
       at = gjc(a,i,at);
    }
/*
    int c =  at;
    while(c >= 0) cout << a[c--];
    cout << endl << endl;*/
    for(int j = 0; j <= at; j++){
      if(a[j] != 0){
        bt = gjc(b,a[j],bt);
      }
    }

    while(bt >= 0) cout << b[bt--];

    return 0;
}
