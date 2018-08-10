#include "iostream"
#include "algorithm"
#define maxn   100000
using namespace std;

int n,a,b;
pair<int,int> con[maxn];
int ans = 0;
bool comp(pair<int,int> a,pair<int,int> b){
  return a.first > b.first;
}

int main(){
  cin >> n >> a >> b;
  for(int i = 0;  i < n ;i++){
    cin >> con[i].first >> con[i].second;
  }
  sort(con,con + n,comp);
  for(int  i = 0; i < a+b; i++){
    if(i < a){
      ans += max(con[i].first*2,con[i].second);
    }
    else{
      ans += max(con[i].first,con[i].second);
    }
  }
  cout << ans << endl;
  return 0;
}
