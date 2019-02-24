#### 题目大意

##### **表达数字的英文字母计数**

如果把1到5写成英文单词，分别是：one, two, three, four, five，这些单词一共用了3 + 3 + 5 + 4 + 4 = 19个字母。

如果把1到1000都写成英文单词，一共要用多少个字母？

**注意：** 不要算上空格和连字符。例如，342（three hundred and forty-two）包含23个字母，而115（one hundred and fifteen）包含20个字母。单词“and”的使用方式遵循英式英语的规则。







#### 简单思路

````c++
#include <stdio.h>


int get_letter_number(int x){
  static int arr1[20] = {0,
    3,3,5,4,4,3,5,5,4,3,
    6,6,8,8,7,7,9,8,8,
  };
  static int arr2[10] = {0,0,
     6,6,5,5,5,7,6,6
  }
  if(x < 20){//小于２０直接返回
    return arr1[x];
  } else if(x < 100){//小于１００,需要计算是位和百位
    return arr2[x / 10] + arr1[x % 10]
  } else if( x < 1000){//小于１０００，需要看是不是整百的和非整百的
    if(x % 100 == 0){//整百的百位加ｈｕｎｄｒｅｄ
      return arr1[x / 100] + 7;
    } else{
      //非整百的还需要需要计算各位和十位并且加上３，
      return arr1[x / 100] + 10 + get_letter_nums(x % 100);
    }
  } else{//千位的
    return 11;
  }
}


int mainn(){
  int ans = 0;
  for(int i = 1; i <= 10000; i++){//需要计算从１到１０００的数据
    ans += get_letter_number(i);
  }
  printf("%d\n", ans);
  
 return 0; 
}
````



### 修改思路

用数学方法直接计算

，这里不进行编码，应该不难







#### 总结

打表思想

