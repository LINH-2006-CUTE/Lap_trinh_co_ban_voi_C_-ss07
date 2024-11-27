#include<stdio.h>
int main(){
	int n;
	printf(" Nhap pphan tu cua mang :");
	scanf("%d", &n);
	
	int arr[n];
	for ( int i = 0; i<n;i++){
		
		do{
			printf("Nhap phan tu la so le : %d", i+ 1);
			scanf("%d", &arr[i]);
			if (arr[i] % 2 == 0) {
                printf("Nhap lai:", i + 1);
            
            }
        } while (arr[i] % 2 == 0);  
	}
        
    printf("\n Phan tu cua mang: " );
	for ( int i = 0 ; i < n ; i++){
		printf("%d", arr[i]);
	}

	
	
	return 0; 
} 
