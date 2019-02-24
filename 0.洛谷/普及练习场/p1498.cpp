#include <iostream>
using namespace std;

string s[1100]; // 储存递推的数组

inline int half(int i) {  
// 一个用来找上次出现同样图案的行数的函数
// 8->4  9->1  10->2  11->3 .. 15->7  16->8
    // 这个函数的写法：
    // 比如说i=10，那么需要求出第10行图案的左半边的图案的行数
    // 首先，求出比10小的最大的2的幂（也就是8）
    // 然后返回的结果就是 10-8

    int t=i-1;
    int c=0;
    while (t) {
        t>>=1; // 即 t/=2
        c++;
    } // c就是t在2进制下的位数，那么1<<(c-1)就是这个幂
    // 注意t=i-1 为什么要-1 代入i=8就知道了
    return i - (1<<(c-1)); // 1<<x 即 2的x次幂
}

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    s[1] = "/\\"; // 初始化递推数组
    s[2] = "/__\\"; // 这就是最上面的小尖尖

    int r = 1<<n; // 总共的行数
    int i, j, h, sp;
    string str("");

    for (i=1; i<=r; i++) {
        for (j=0; j<r-i; j++) cout << " "; // 开始的r-i个空格
        if (i==1 || i==2) {
            cout << s[i] << endl;
            continue;
        }
        h = half(i);
        sp = 2*i - 4*h; // 2*i为第i行除去左右空格的长度
        // 第i行共长2*i（以下均除去左右两边的空格）
        // 第h行为2*h
        // 从第i行长度中去掉两个h行的长度就是中间空格数量
        for (j=0; j<sp; j++) str += " "; // 这么多的空格
        cout << s[h] << str << s[h] << endl; // 输出这一行 
        s[i] = (s[h]+str+s[h]); // 储存
        str = ""; // 清空便于下次使用
    }

    return 0;
    cout << "ahahaha"; // ahahahahahahahahahaha
}

/*#include <iostream>

using namespace std;
int n;
fugan
void tuteng(int n) {
	
}
int main() {
	cin >> n;
	tufeng(n);
	return 0;
}*/
