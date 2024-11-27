#include<stdio.h>
int main (){
	int arr[5];
// cho nhap phan tu 	
	printf("Nhap 5 phan tu:");
		for( int  i=0;  i<5; i++){
			printf("nhap phan tu thu %d :", i+1);
				scanf("%d",&arr[i]);
		}
	
// in ra tung phan tu
		for( int i =0; i<5; i++){
			printf("number[%d]=%d \n",i, arr[i]);
			
		}
	return 0;
} 
