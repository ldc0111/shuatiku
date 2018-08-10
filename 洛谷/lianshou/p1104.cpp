#include "iostream"
#include "string"
#include "algorithm"
#define  maxn   105
using namespace std;
struct stud{
  string name;
  int nian,yue,ri,hao;
}stu[maxn];
int n;

bool comp(stud a,stud b) {
  if(a.nian < b.nian) return true;
  else if(a.nian > b.nian) return false;
  else {
    if(a.yue < b.yue) return true;
    else if(a.yue > b.yue) return false;
    else{
      if(a.ri < b.ri) return true;
      else if(a.ri > b.ri)return false;
      else if(a.hao > b.hao) return true;//moren a
      else return false;
    }
  }
}
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> stu[i].name >> stu[i].nian >> stu[i].yue >> stu[i].ri;
        stu[i].hao = i;
    }
    sort(stu,stu+n,comp);
    for(int i = 0; i < n; i++){
      cout << stu[i].name << endl;
    }
    return 0;
}
