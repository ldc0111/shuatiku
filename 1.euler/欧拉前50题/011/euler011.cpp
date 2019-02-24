/*************************************************************************
	> File Name: euler011.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月01日 星期日 19时28分59秒
 ************************************************************************/

#include <stdio.h>

int dirArr[4][2] = {0, 1, 1, 0, 1, 1, 1, -1};

int main(){
    int num[30][30] = {0};
    FILE *fil = fopen("./data","r");
    for(int i = 5; i < 25; i++){
        for(int j = 5; j < 25; j++){
            fscanf(fil, "%d", num[i] + j);
        }
    }
    int ans = 0,p;
    for (int i = 5; i < 25; i++){
        for (int j = 5; j < 25; j++){
            for (int k = 0; k < 4; k++){
                p = 1;
                for(int l = 0; l < 4; l++){
                    p *= num[i + l * dirArr[k][0]][j + l * dirArr[k][1]];
                }
                if(p > ans) ans = p;
            }
        }
    }
    printf("%d\n",ans);

    return 0;
}
