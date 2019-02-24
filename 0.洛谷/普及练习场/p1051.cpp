#include <iostream>
using namespace std;
int n,temp,sum = 0,maxn;
struct student {
	string name;
	int ping,ban,lun;
	char xue,xi;
	int jiang;
}stu[105];
int main() {
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> stu[i].name >> stu[i].ping >> stu[i].ban >> stu[i].xue >> stu[i].xi >> stu[i].lun;
		if(stu[i].lun > 0 && stu[i].ping > 80) 	stu[i].jiang += 8000;
		if(stu[i].ban > 80 && stu[i].ping > 85)  stu[i].jiang += 4000;
		if(stu[i].ping > 90)    stu[i].jiang += 2000;
		if(stu[i].ping > 85 && stu[i].xi == 'Y') stu[i].jiang += 1000;
		if(stu[i].ban > 80 && stu[i].xue == 'Y') stu[i].jiang += 850;
		
		if(stu[i].jiang > maxn) {
			maxn = stu[i].jiang;
			temp = i;
		}
		sum += stu[i].jiang; 
	}
	cout << stu[temp].name << endl << stu[temp].jiang << endl << sum << endl;
	
	return 0;
} 
