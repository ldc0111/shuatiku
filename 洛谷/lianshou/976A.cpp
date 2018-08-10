#include "iostream"
#include "string"
using namespace std;
int n;
string str;

int main(){
   cin >> n;
   cin >> str;
   if(str.size() > 0)
   cout << str[0];
   for(int i = 1;  i< str.size(); i++){
     if(str[i] == '0'){
       cout << str[i];
     }
   }
   cout << endl;
   return 0;
}
