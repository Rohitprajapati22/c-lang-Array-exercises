#include<stdio.h>

main(){
	int n,i,sum=0;
	
	printf("Enter value of array = ");
	scanf("%d",&n);
	
	int a[n];

	for(i=0;i<n;i++){
		printf("enter a[%d] - ",i);
		scanf("%d",&a[i]);
	}	
	
	for(i=0;i<n;i++){
		sum=a[i]*a[i];
		printf("The squares are : %d\n",sum);
	}



}
