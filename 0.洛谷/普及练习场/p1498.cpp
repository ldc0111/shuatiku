#include <iostream>
using namespace std;

string s[1100]; // ������Ƶ�����

inline int half(int i) {  
// һ���������ϴγ���ͬ��ͼ���������ĺ���
// 8->4  9->1  10->2  11->3 .. 15->7  16->8
    // ���������д����
    // ����˵i=10����ô��Ҫ�����10��ͼ�������ߵ�ͼ��������
    // ���ȣ������10С������2���ݣ�Ҳ����8��
    // Ȼ�󷵻صĽ������ 10-8

    int t=i-1;
    int c=0;
    while (t) {
        t>>=1; // �� t/=2
        c++;
    } // c����t��2�����µ�λ������ô1<<(c-1)���������
    // ע��t=i-1 ΪʲôҪ-1 ����i=8��֪����
    return i - (1<<(c-1)); // 1<<x �� 2��x����
}

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    s[1] = "/\\"; // ��ʼ����������
    s[2] = "/__\\"; // ������������С���

    int r = 1<<n; // �ܹ�������
    int i, j, h, sp;
    string str("");

    for (i=1; i<=r; i++) {
        for (j=0; j<r-i; j++) cout << " "; // ��ʼ��r-i���ո�
        if (i==1 || i==2) {
            cout << s[i] << endl;
            continue;
        }
        h = half(i);
        sp = 2*i - 4*h; // 2*iΪ��i�г�ȥ���ҿո�ĳ���
        // ��i�й���2*i�����¾���ȥ�������ߵĿո�
        // ��h��Ϊ2*h
        // �ӵ�i�г�����ȥ������h�еĳ��Ⱦ����м�ո�����
        for (j=0; j<sp; j++) str += " "; // ��ô��Ŀո�
        cout << s[h] << str << s[h] << endl; // �����һ�� 
        s[i] = (s[h]+str+s[h]); // ����
        str = ""; // ��ձ����´�ʹ��
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
