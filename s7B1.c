#include<stdio.h>

int main(){
	int arr [5]={1,2,3,4,5};
	int lengh = sizeof arr / sizeof arr[0];
	printf("Phan tu cua mang : %d\n");

		for(int i = 0; i< lengh; i++){
				printf(" Phan tu %d la :%d\n", i, arr[i]);
		
		}
		printf("Do dai cua mang :%d\n", lengh);
	 
	
	
	
	return 0; 
} 
