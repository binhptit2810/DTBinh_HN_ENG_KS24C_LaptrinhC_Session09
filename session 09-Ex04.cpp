#include <stdio.h>

int main (){
	// in ra menu de nguoi dung su dung
	const int MAX = 100;
	int currentLength = 0;
	int choice;
	int arr[MAX];
	do{printf("     MENU       \n");
	printf("\n");
	printf("\n");
	printf("1.Nhap vao mang    \n");
	printf("\n");
	printf("2.Hien thi mang    \n");
	printf("\n");
	printf("3.Them phan tu     \n");
	printf("\n");
	printf("4.Sua phan tu      \n");
	printf("\n");
	printf("5.Xoa phan tu      \n");
	printf("\n");
	printf("6.Thoat            \n");
	printf("\n");
	printf("Lua chon cua ban : ");
	scanf("%d",&choice);
	 switch (choice) {
	 	// yeu cau nguoi dung so phan tu cua mang
        case 1: {
            printf("Nhap so phan tu cua mang (toi da %d): ", MAX);
            scanf("%d", &currentLength);
            if (currentLength > MAX || currentLength < 0) {
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
        // hien thi mang ra ngoai man hinh
            printf("Cac phan tu trong mang la:\n");
            for (int i = 0; i < currentLength; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
        }
        case 3: { 
        // them phan tu vao mang
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
        case 4: { 
        // sua phan tu cua mang
            int modifyIndex, newValue;
            printf("Nhap vi tri can sua (0-%d): ", currentLength - 1);
            scanf("%d", &modifyIndex);

            if (modifyIndex < 0 || modifyIndex >= currentLength) {
                printf("Vi tri khong hop le!\n");
            } else {
                printf("Nhap gia tri moi: ");
                scanf("%d", &newValue);
                arr[modifyIndex] = newValue;
                printf("Sua thanh cong!\n");
            }
            break;
        }
        case 5: { 
        // xoa phan tu cua mang
            int deleteIndex;
            printf("Nhap vi tri can xoa (0-%d): ", currentLength - 1);
            scanf("%d", &deleteIndex);

            if (deleteIndex < 0 || deleteIndex >= currentLength) {
                printf("Vi tri khong hop le!\n");
            } else {
                for (int i = deleteIndex; i < currentLength - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                currentLength--;
                printf("Xoa thanh cong!\n");
            }
            break;
        }
        case 6: {
        // thoat chuong trinh 
            printf("Thoat chuong trinh. Tam biet!\n");
            break;
        }
        default: {
            printf("Lua chon khong hop le! Vui long thu lai.\n");
        }
        }
		
	}while (choice != 6);
	


	return 0;
	
}
