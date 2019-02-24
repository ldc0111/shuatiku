/*************************************************************************
	> File Name: p1022.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月16日 星期四 18时03分04秒
 ************************************************************************/

#include<iostream>
#include <string>
#include <cstdio>
using namespace std;

int  a = 0,x = 0;
int i = 0;
int fl = 0,zf = 0;
char ch = '0';
int main(){
    string str;
    cin >> str;
    while(i < str.length()){
        int j = i;
        int temp = 0;

        if(str[j] == '+') zf = 0, j++;
        else if(str[j] == '-') zf = 1, j++;
        else if(str[j] == '=') zf = 0,fl = 1, j++;

        while(str[j] >= '0' && str[j] <= '9'){
            temp = temp * 10 + (str[j] - '0');
            j++;
        }
        if (str[j] >= 'a' && str[j] <= 'z'){
            ch = str[j];
            if(temp == 0) temp =  1;
            if(fl == 0 && zf == 0) x += temp;
            else if(fl == 0 && zf == 1) x -= temp;
            else if(fl == 1 && zf == 0) x -= temp;
            else x += temp;
            temp = 0;
            j++;
        }
        //printf("%c fl:%d zf:%d temp:%d ",str[j],fl,zf,temp);
        if(fl == 0 && zf == 0) a += temp;
        else if(fl == 0 && zf == 1) a -= temp;
        else if(fl == 1 && zf == 0) a -= temp;
        else a += temp;
        i = j;
        //cout <<"a:" <<a << "  x:" << x << endl;
    }
    a=-a;
    //cout << a << x << endl;
    if(a == 0||x == 0){
         printf("%c=%.3f",ch,0);
    }else{
        printf("%c=%.3f",ch, (double)a/(double)x);
    }
    return 0;
}
