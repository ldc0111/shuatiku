/*#include <iostream>
#include <cstdio>
#include <queue>
#include <string>

using namespace std;

string A, B;
string Ai[10], Bi[10];
int n = 0;
int ans = 0;
bool bfs() {
	queue<string> q;
	q.push(A);
	
	
	while(!q.empty()) {
		if(ans <= 10) {
			return false;
		}
		string temp = q.front();
		q.pop();
		for(int i = 0; i < n; i++) {
			temp.replace(temp.find(Ai[i]), temp.find(Ai[i]) + Ai[i].length(), Bi[i]);//tihuan
			q.push(temp);
			if(temp == B) {
				return true;
			}
		}
		ans++;
	}
	return false;
}



int main() {
	cin >> A >> B;
	while(cin >> Ai[n] >> Bi[n]) {
		n++;
		if(n >= 6) break;
	}
	
	bool a = bfs();
	
	if(a) {
		cout << "NO ANSWER!" << endl;
	} else {
		cout << ans << endl; 
	}
	return 0;
}*/

#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <map>
#define maxn 15
using namespace std;
struct node{//����������Ҳ����ʹ��pair��
    string str;
    int step;
};

string a,b;
string orginal[maxn];
string translated[maxn];
int n,ans;
map<string,int> ma;//����Ҫ�Ķ������������أ������TLE�ڵ�3��͵�5��

string trans(const string &str,int i,int j){//�����stdcall��ү��˼��
    string ans = "";
    if (i+orginal[j].length() > str.length())
        return ans;

    for (int k=0; k < orginal[j].length();k++)
        if (str[i+k] != orginal[j][k])
            return ans;

    ans = str.substr(0,i);
    ans+=translated[j];
    ans+=str.substr(i+orginal[j].length());
    return ans;
}

void bfs(){//һ��ƽ�������bfs����
    queue <node> q;
    node s;
    s.str = a;
    s.step = 0;
    q.push(s);

    while (!q.empty()){
        node u = q.front();
        q.pop();
        string temp;

        if(ma.count(u.str) == 1) //��֦���ж��ظ���·��
            continue;

        if (u.str == b){
            ans = u.step;
            break;
        }
        ma[u.str] = 1;
        for (int i=0;i < u.str.length();i++)//ö�ٵ�ǰ�����п���λ��
            for (int j=0; j<n; j++){//ö�����п����ֶ�
                temp = trans(u.str,i,j);
                if (temp != ""){
                    node v;
                    v.str = temp;
                    v.step = u.step+1;
                    q.push(v);
                }
            }
    }
    if (ans > 10 || ans == 0)
        cout << "NO ANSWER!" << endl;
    else
        cout << ans << endl;

}

int main(){
    cin >> a >> b;
    while (cin >> orginal[n] >> translated[n])
        n++;
    bfs();
    return 0;
}
