#include <stdio.h>
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    printf("Nhap %d phan tu cho mang:\n", n);
    for (int i = 0; i < n; i++) {
        int m;  
        printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &m);
      
        if (m <= 1) {
            continue; 
        }
    
        for (int j = 2; j * j <= m; j++) {  
            if (m % j == 0) {
                printf("%d khong la so nguyen to\n", m); 
                break;  
            }
        }

        if (m > 1) {
            printf("%d la so nguyen to\n", m);  
        }
    }

    return 0;
}

