#include<stdio.h>

int main (){
	
	int n, m;
	printf("Moi ban nhap vao so hang va so cot: ");
	scanf("%d %d", &n, &m);
	
	int arr[n][m];
	for(int i =0; i<n;i++){
		for(int j= 0; j<m; j++){
			printf(" Phan tu trong hang %d la: ,  cot %d la: ", i+1, j+1);
			scanf("%d", &arr[i][j]);
	
		}
		printf("\n");
	}
		
		printf("gia tri bien tren la: \n"); 
	for (int i =0; i<m; i++){
		printf("%d", arr[0][i]);
	}
	
	
		printf(" Gia tri bien ben phai:\n");
	 for( int i = 0; i< n ; i++){
	 	printf("%d", arr[i][m-1]);
	 }
	
	
	printf("Gia tri bien duoi la:\n");
	for(int i=0; i< m ;i++){
		printf(" %d",arr[n - 1][i]);
	}
	
	
	printf(" Gia tri bien trai la:\n");
	 for (int i=0; i < n ; i++){
	 	printf("%d", arr[i][0]);
	
	}
	 
	printf(" \n"); 
	
	
	
	
	
	return 0; 
  } 
