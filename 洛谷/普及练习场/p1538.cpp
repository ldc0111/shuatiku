#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int n;
int hang;
string arr;
void shuzi(char a, int di){//是哪个数字，第几行
    if(di == 1){
    	switch(a){
    		case '1':
			case '4':{
				cout<< " ";
				for(int i = 0; i < n; i++){
					cout<< " ";
				}
				cout<< " ";
				break;
			}
			case '2':
			case '3':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case '0':{
				cout<< " ";
				for(int i = 0; i < n; i++){
					cout<< "-";
				}
				cout<< " ";				
				break;
			}
       }
    	
	} else if(di >1 && di <(hang + 1)/2){
    	switch(a){
    		case '1':
			case '2':
			case '3':
			case '7':{
				cout<< " ";
				for(int i = 0; i < n; i++){
					cout << " ";
				}
				cout << "|";
				break;
			}
			case '4':
			case '8':
			case '9':
			case '0':{
				cout << "|";
				for(int i = 0; i < n; i++){
					cout << " "; 
				}
				cout << "|";
				break;
			}
			case '6':
			case '5':{
				cout << "|";
				for(int i = 0; i < n; i++){
					cout << " ";
				}
				cout << " ";
				break;
			}
	    }
	} else if(di == (hang + 1)/2){
    	switch(a){
    		case '0':
    		case '1':
			case '7':{
				cout << " ";
				for(int i =0; i < n; i++){
					cout <<" ";
				}
				cout << " ";
				break;
			}
			case '3':
			case '4':
			case '5':
			case '6':
			case '2':
			case '8':
			case '9':{
				cout << " ";
				for(int i = 0; i < n; i++){
					cout << "-";
				}
				cout << " ";
				break;
			}
	    }
	} else if(di >(hang + 1)/2 && di < hang){
    	switch(a){
    		case '1':
			case '3':
			case '4':
			case '5':
			case '7':
			case '9':{
				cout << " ";
				for(int i = 0; i < n; i++){
					cout << " ";
				} 
				cout << "|";
				break;
			}
			case '2':{
				cout << "|";
				for(int i = 0; i < n; i++){
					cout << " ";
				}
				cout << " ";
				break;
			} 
			case '6':
			case '8':
			case '0':{
				cout << "|";
				for(int i = 0; i < n; i++){
					cout << " ";
				}
				cout << "|";
				break;
			}
	    }
	} else{//di == hang
    	switch(a){
    		case '1':
			case '4':
			case '7':{
				cout << " ";
				for(int i = 0; i < n; i++){
					cout << " ";
				}
				cout << " ";
				break;
			}
			case '2':
			case '3':
			case '5':
			case '6':
			case '8':
			case '9':
			case '0':{
				cout << " ";
				for(int i =0; i < n; i++){
					cout << "-";
				}
				cout << " ";
				break;
			}		
	    }   
	}
	cout << " ";
}

int main(){
	cin >> n >> arr;
	hang = 3 + n*2;
	for(int i = 1;i <= hang; i++){
		for(int j = 0;j < arr.length(); j++){
			shuzi(arr[j],i); 
		}
		cout << endl;
	} 
	
	return 0;
} 
