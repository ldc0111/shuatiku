#### printf()

* 第一个参数是字符串
* 返回值是一共输出了几个字符，可以用这个计算字符的位数，不过他也进行输出

````c++
＃include <iostream>
int main(){
    int n;
    whlie (scanf("%d",&n) != EOF){
        //FILE *fout= fopen("/dev/null", "w");
        //printf("%d has % digits\n", n, fpritnf(fout,"%d",n));
        printf(" has %d digits\n", printf("%d", n));
    }
    return 0;
}
````

