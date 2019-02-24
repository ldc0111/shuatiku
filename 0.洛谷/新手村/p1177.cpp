#include <stdio.h>
int a[100005] = {0};
int swap(int *a, int *b) {
	int c;
	c = *a;
	*a = *b;
	*b = c;
	return 0;
}
int median(int a[], int left, int right) {
	int center = (left + right) / 2;
	if(a[left] > a[center]) {
		swap(&a[left], &a[center]);
	}
	if(a[left] > a[right]) {
		swap(&a[left], &a[right]);
	}
	if(a[center] > a[right]) {
		swap(&a[center], &a[right]);
	}
	swap(&a[center], &a[right-1]);
	
	return a[right-1];
}

int quicksort(int a[],int left,int right) {
	if(left < right) {
    	int pivot = median(a, left, right);
	    int i = left;
	    int j = right-1;
	
	    for(;;) {
		    while(a[++i] < pivot);
		    while(a[--j] > pivot);
		
		    if(i < j) {
			    swap(&a[i], &a[j]);
		    } else {
			    break;
		    }
	    }
	    if(i < right) {//两个数时 
	    	swap(&a[i], &a[right-1]);
		}
	    quicksort(a, left, i-1);
	    quicksort(a, i+1, right);		
	}
	return 0;
}
void sort(int a[],int n) {
	quicksort(a, 1, n);
}




int main() {
	int n;
	
	
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	
	sort(a,n);
	
	for(int i = 1; i <= n; i++) {
		printf(i == 1? "%d":" %d", a[i]);
	}
	printf("\n");
	
	return 0;
} 
