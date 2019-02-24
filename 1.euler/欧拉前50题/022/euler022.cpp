/*************************************************************************
	> File Name: euler022.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月10日 星期二 19时13分24秒
 ************************************************************************/

#include <stdio.h>
#include "022.h"
#include <algorithm>

int main(){
    long long i = 0, len, sum, total = 0;
    while (nameList[i++].length() != 0);
    std::sort(nameList, nameList + i - 1);
    i = 0;
    while(nameList[i].length() != 0){
        sum = 0;
        for(int j = 0; j < nameList[i].length(); j++){
            sum += nameList[i][j] - 'A' + 1;
        }
        total += sum * (++i);
    }
    printf("%ld", total);
    return 0;
}
