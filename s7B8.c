#include<stdio.h>

int main(){
	
	int n, m;
	printf("Moi ban nhap vao so hag va so cot: ");
	scanf("%d %d", &n, &m);
	
	int arr[n][m];
	
	for(int i =0; i<n;i++){
		for(int j= 0; j<m; j++){
			printf(" Phan tu trong hang %d, cot %d", i+1, j+1);
			scanf("%d", &arr[i][j]);
	
		}
		printf("\n");
		
	}
	for(int i =0; i<n;i++){
		for(int j= 0; j<m; j++){	
			printf(" %d", arr[i][j]);
		}
	printf("\n");
	}

	return 0;
}
