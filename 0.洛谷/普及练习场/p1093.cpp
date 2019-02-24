#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
struct ren {
  int numb;
  int yu,shu,ying;
  int sum;
};
vector<ren> arr;
int n;

bool cmp(ren a, ren b) {
  if(a.sum > b.sum) {
    return true;
  } else if(a.sum == b.sum) {
    if(a.yu > b.yu) {
      return true;
    }else if(a.yu == b.yu) {
      if(a.numb < b.numb) {
        return true;
      }
    }
  }
  return false;
}

int main() {
  cin >> n;
  for(int i = 0; i < n ; i++) {
    ren temp;
    temp.numb = i + 1 ;
    cin >> temp.yu >> temp.shu >> temp.ying;
    temp.sum = temp.yu + temp.shu + temp.ying;
    arr.push_back(temp);
  }
  sort(arr.begin(),arr.end(),cmp);

  for(int i = 0; i < 5; i++) {
    cout << arr[i].numb << " " <<  arr[i].sum << endl;
  }
  return 0;

}
