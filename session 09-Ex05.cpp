#include <stdio.h>

int main() {
    const int MAX = 100;
    int arr[MAX];
    int currentLength = 0;
    int choice;

    do {
        // in menu ra ngoai man hinh de nguoi dung lua chon
        printf("\n===== MENU =====\n");
        printf("1. Nhap so phan tu va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: { 
            //  nhap so phan tu cua mang
                printf("Nhap so phan tu cua mang (toi da %d): ", MAX);
                scanf("%d", &currentLength);
                if (currentLength < 0 || currentLength > MAX) {
                    printf("So phan tu khong hop le!\n");
                    currentLength = 0;
                } else {
                    printf("Nhap %d phan tu:\n", currentLength);
                    for (int i = 0; i < currentLength; i++) {
                        printf("Phan tu thu %d: ", i);
                        scanf("%d", &arr[i]);
                    }
                }
                break;
            }
            case 2: { 
            // in ra cac phan tu co trong mang
                printf("Cac phan tu trong mang la:\n");
                for (int i = 0; i < currentLength; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }
            case 3: { 
            // in ra cac gia tri chan va tinh tong
                int sumEven = 0;
                printf("Cac phan tu chan la:\n");
                for (int i = 0; i < currentLength; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("%d ", arr[i]);
                        sumEven += arr[i];
                    }
                }
                printf("\nTong cac phan tu chan: %d\n", sumEven);
                break;
            }
            case 4: { 
            // in ra gia tri lon nhat va nho nhat
                if (currentLength == 0) {
                    printf("Mang rong!\n");
                } else {
                    int max = arr[0], min = arr[0];
                    for (int i = 1; i < currentLength; i++) {
                        if (arr[i] > max) max = arr[i];
                        if (arr[i] < min) min = arr[i];
                    }
                    printf("Gia tri lon nhat: %d\n", max);
                    printf("Gia tri nho nhat: %d\n", min);
                }
                break;
            }
            case 5: {
            	// in ra cac so nguyen to va tinh tong
                int sumPrime = 0;
                printf("Cac phan tu la so nguyen to:\n");
                for (int i = 0; i < currentLength; i++) {
                    int isPrime = 1; 
                    if (arr[i] < 2) {
                        isPrime = 0;
                    } else {
                        for (int j = 2; j * j <= arr[i]; j++) {
                            if (arr[i] % j == 0) {
                                isPrime = 0;
                                break;
                            }
                        }
                    }
                    if (isPrime) {
                        printf("%d ", arr[i]);
                        sumPrime += arr[i];
                    }
                }
                printf("\nTong cac so nguyen to: %d\n", sumPrime);
                break;
            }
            case 6: { 
            // thong ke so xuat hien trong mang
                int target, count = 0;
                printf("Nhap so can thong ke: ");
                scanf("%d", &target);
                for (int i = 0; i < currentLength; i++) {
                    if (arr[i] == target) count++;
                }
                printf("So %d xuat hien %d lan trong mang.\n", target, count);
                break;
            }
            case 7: {
            	// them 1 phan tu vao 1 vi tri chi dinh
                if (currentLength >= MAX) {
                    printf("Mang da day, khong the them phan tu moi!\n");
                } else {
                    int addValue, addIndex;
                    printf("Nhap gia tri muon them: ");
                    scanf("%d", &addValue);
                    printf("Nhap vi tri muon them (0-%d): ", currentLength);
                    scanf("%d", &addIndex);

                    if (addIndex < 0 || addIndex > currentLength) {
                        printf("Vi tri khong hop le!\n");
                    } else {
                        for (int i = currentLength; i > addIndex; i--) {
                            arr[i] = arr[i - 1];
                        }
                        arr[addIndex] = addValue;
                        currentLength++;
                        printf("Them thanh cong!\n");
                    }
                }
                break;
            }
            case 8: {
            	// thoat chuong trinh
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

