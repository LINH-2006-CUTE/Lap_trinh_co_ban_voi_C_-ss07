#include<stdio.h>

int main (){
	int n[5]={1,2,3,4,5};
	int max = 0; 
	int min =0; 
	for ( int i = 0; i < 5; i++){
			if(n[i] > max){
				max = n[i]; 
				}
				
			if ( n[i] < min){
				min = n[i]; 
			}	
	}
		 printf ( " Phan tu lon nhat la : %d\n", max);
		 printf(" Phan tu nho nhat la : %d\n", min); 
	return 0; 
} 



		
