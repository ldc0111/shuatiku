#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
void build_heap(int array[],int length);//建堆 
void adjust(int array[], int index);//调整堆
void insert(int array[],int k);
void delelete1(int array[]); 
int  size;

void print(int array[], int length) {
	for(int i = 1; i <= length; i++) {
		printf(i == length ? "%d\n":"%d ", array[i]);
	}
}
void swap(int *a, int *b) {
	int c;
	c = *a;
	*a = *b;
	*b = c; 
}

void build_heap(int array[],int length) {
	size = length;
	
	for(int i = (size) >> 1; i >= 1; i--) {
		adjust(array, i);
	}
}

void adjust(int array[], int index) {
	int left = (index << 1);
	int right = (index << 1) + 1;
	int gest = index;
	//找 最小
	if(left <= size && array[left] < array[gest]) {
		gest = left;
	}
	if(right <= size && array[right] < array[gest]) {
		gest = right;
	}
	
	if(gest == index) {//如果已经是 最小堆 不用调整 
		return ;
	}
	else {
		swap(&array[index], &array[gest]);// index 跟 gest被调整的下标 
		adjust(array,gest);//向下调整 
		
	}
}

void insert(int array[],int k) {
	size++;
	int index = size;
	array[size] = k;
	
	for(int i = index; i > 1; i = i >> 1) {
		if(array[i] < array[(i >> 1)]) {
			swap(&array[i], &array[(i >> 1)]);
		}
	}
	return ;
}

int delete1(int array[]) {
	swap(&array[1], &array[size]);
	size--; 
	adjust(array, 1);
	return array[size+1];
}

int main() {
	int n;
	int array[10002];
	int tmp = 0;
	int sum = 0;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++) {
		scanf("%d", &array[i]);
	}
	
	build_heap(array,n);
	
	while(size > 1) {
		sum = delete1(array)+ delete1(array);
		insert(array,sum);
		tmp += sum;
	}
	
	printf("%d", tmp);
	return 0;
}


