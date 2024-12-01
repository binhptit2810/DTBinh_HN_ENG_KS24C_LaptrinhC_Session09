#include <stdio.h>

int main() {
    const int MAX = 100;
    int arr[MAX][MAX];
    int rows = 0, cols = 0;
    int choice;

    do {
        // in menu ra ngoai man hinh
        printf("\n===== MENU =====\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu la le va tinh tong\n");
        printf("4. In cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In cac phan tu nam tren duong cheo chinh\n");
        printf("6. In cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: { 
            // nhap gia tri va kich co cua mang
                printf("Nhap so hang: ");
                scanf("%d", &rows);
                printf("Nhap so cot: ");
                scanf("%d", &cols);

                if (rows <= 0 || cols <= 0 || rows > MAX || cols > MAX) {
                    printf("Kich co mang khong hop le!\n");
                } else {
                    printf("Nhap cac phan tu cua mang:\n");
                    for (int i = 0; i < rows; i++) {
                        for (int j = 0; j < cols; j++) {
                            printf("arr[%d][%d]: ", i, j);
                            scanf("%d", &arr[i][j]);
                        }
                    }
                }
                break;
            }
            case 2: { 
            // in mang ra theo kieu ma tran
                printf("Ma tran:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("%d ", arr[i][j]);
                    }
                    printf("\n");
                }
                break;
            }
            case 3: { 
            // in cac phan tu le va tinh tong
                int sumOdd = 0;
                printf("Cac phan tu le la:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        if (arr[i][j] % 2 != 0) {
                            printf("%d ", arr[i][j]);
                            sumOdd += arr[i][j];
                        }
                    }
                }
                printf("\nTong cac phan tu le: %d\n", sumOdd);
                break;
            }
            case 4: { 
            //in cac phan tu duong bien va tinh tich
                int product = 1;
                printf("Cac phan tu tren duong bien la:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                            printf("%d ", arr[i][j]);
                            product *= arr[i][j];
                        }
                    }
                }
                printf("\nTich cac phan tu tren duong bien: %d\n", product);
                break;
            }
            case 5: { // in cac phan tu cua duong cheo chinh
                if (rows != cols) {
                    printf("Ma tran khong phai vuong, khong co duong cheo chinh!\n");
                } else {
                    printf("Cac phan tu tren duong cheo chinh la:\n");
                    for (int i = 0; i < rows; i++) {
                        printf("%d ", arr[i][i]);
                    }
                    printf("\n");
                }
                break;
            }
            case 6: { // in cac phan tu duong cheo phu
                if (rows != cols) {
                    printf("Ma tran khong phai vuong, khong co duong cheo phu!\n");
                } else {
                    printf("Cac phan tu tren duong cheo phu la:\n");
                    for (int i = 0; i < rows; i++) {
                        printf("%d ", arr[i][cols - i - 1]);
                    }
                    printf("\n");
                }
                break;
            }
            case 7: { 
            // in dong co tong gia tri lon nhat
                int maxRowSum = 0, maxRowIndex = 0;

                for (int i = 0; i < rows; i++) {
                    int rowSum = 0;
                    for (int j = 0; j < cols; j++) {
                        rowSum += arr[i][j];
                    }
                    if (i == 0 || rowSum > maxRowSum) {
                        maxRowSum = rowSum;
                        maxRowIndex = i;
                    }
                }

                printf("Dong co tong lon nhat la dong %d voi tong %d:\n", maxRowIndex, maxRowSum);
                for (int j = 0; j < cols; j++) {
                    printf("%d ", arr[maxRowIndex][j]);
                }
                printf("\n");
                break;
            }
            case 8: { 
            // thoat
                printf("Thoat chuong trinh. Tam biet!\n");
                break;
            }
            default: {
                printf("Lua chon khong hop le! Vui long thu lai.\n");
            }
        }
    } while (choice != 8);

    return 0;
}

