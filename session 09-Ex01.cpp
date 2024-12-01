#include <stdio.h>

int main() {
	// khai bao mang co 100 phan tu
    int arr[100]; 
    int currentLength = 0; 
    int n, addValue, addIndex;

    // yeu cau nguoi dung nhap so phan tu muon nhap
    printf("Nhap so phan tu ban dau (toi da 100): ");
    scanf("%d", &n);

    if (n > 100 || n < 0) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }

    // nhap gia tri cho mang
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    currentLength = n;

    // yeu cau nguoi dung nhap gia tri va vi tri can them
    printf("Nhap gia tri muon them: ");
    scanf("%d", &addValue);

    printf("Nhap vi tri muon them (0-%d): ", 99);
    scanf("%d", &addIndex);

    // kiem tra tinh hop le cua vi tri
    if (addIndex < 0 || addIndex >= 100) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    // Them phan tu vao mang
    if (addIndex >= currentLength) {
        arr[addIndex] = addValue;
        currentLength = addIndex + 1;
    } else {
        for (int i = currentLength; i > addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = addValue;
        currentLength++;
    }

    // in mang sau khi them
    
    printf("Mang sau khi them phan tu:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

