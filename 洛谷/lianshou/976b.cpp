#include <iostream>

using namespace std;

long long n,m,k,x = 1,y = 1;


int main(){
    cin>> n >> m >> k;
    if(k < n) y += k;
    else{
      y = n,x = 2;
      k -= n;

      int times = k/((m - 1)*2);
      k -= (m - 1) * 2 * times;
      y -= times*2;

      if(k <= m - 2) x += k;//k > m - 2
      else{
        y -= 1;
        x = m;
        k -=(m - 1);

        if(k <= m - 2) x -= k;
      }
    }
    cout << y << " "<< x << endl;
    return 0;
}
