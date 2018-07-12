#include<stdio.h>
long int brr[100000];
void main(){
	int flag =0;
	long int arr[100000], n, i;
	printf("\n Input N : ");
	scanf("%ld",&n);
	for(i=0; i < n; i++){
		scanf("%ld",&arr[i]);
		brr[arr[i]]++;
	}
	for(i = 0; i < n; i++){
		if(brr[i] > 1){
			flag = 1;
			printf(" %ld ",i);
		}
	}
	if(flag != 1)
	printf("\nUNIQUE");
}