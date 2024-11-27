#include<stdio.h>

int main(){
	int arr[5];
			printf("Ban hay nhap 5 phan tu cua mang:");
	for (int i=0; i < 5; i++){
		printf("Phan tu %d",i +1); 
		scanf("%d",&arr[i]); 
	
	} 
	
	printf("Cac phan tu trong mang la: "); 
	for ( int i = 0; i < 5; i++){
		printf("%d", arr[i]);
		 
	} 
	printf("\n"); 
	
	return 0; 
} 
