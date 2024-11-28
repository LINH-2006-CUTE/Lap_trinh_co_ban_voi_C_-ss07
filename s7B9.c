#include<stdio.h>
int main(){
	int row, column;
	printf(" Nhap so hang: ");
	scanf("%d1", &row);
	printf("Nhap so cot: ");
	scanf("%d2", &column);
	 
	int matrix[row][column], i= 0, j=0;
		printf("Nhap cac phan tu cho mang [%d1][%d2]: ");
		for(int i = 0; i < row; i++){
			for(int j = 0; j< column; j++){
				printf("%d", matrix [i][j]);	
				
			}
			printf("\n");
		} 
		
		printf("Mang moi la:\n ");
		for(int i = 0; i < row; i++){
			for(int j = 0; j< column; j++){
				printf("%d", matrix [i][j]);	
			}
		}
			
		printf("\n");
	
	
	return 0; 
} 
