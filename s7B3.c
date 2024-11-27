#include<stdio.h> 
int main () {
	int n[5]={1,2,3,4,5};
	int count = 0; 
	for(int i=0; i< sizeof(n)/sizeof(n[0]); i++){
		if (n[i]%2 == 0){
			count++; 
			printf(" so chan la: %d \n", n[i]);
		} 
	} 
	 if(count ==1){
	 		printf("trong mang n khong co so chan");	 
	 } 
	
	return 0; 
}
