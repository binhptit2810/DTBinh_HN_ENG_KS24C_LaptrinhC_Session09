#include <stdio.h>

int main() {
	// khai bao mang co toi da 100 phan tu
    int arr[100]; 
    int currentLength = 0;
    int n, deleteIndex;

    // yeu cau nguoi dung nhap so phan tu can nhap
    printf("Nhap so phan tu ban dau (toi da 100): ");
    scanf("%d", &n);

    if (n > 100 || n < 0) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }

    // nhap tung gia tri cho mang
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    currentLength = n;

    // yeu cau nguoi dung nhap gia tri va vi tri can xoa
    printf("Nhap vi tri can xoa (0-%d): ", currentLength - 1);
    scanf("%d", &deleteIndex);

    // kiem tra xem vi tri co hop li khong
    if (deleteIndex < 0 || deleteIndex >= currentLength) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    // xoa phan tu o vi tri da nhap
    for (int i = deleteIndex; i < currentLength - 1; i++) {
        arr[i] = arr[i + 1];
    }
    currentLength--;

    //in mang sau khi da xoa phan tu
    printf("Mang sau khi xoa phan tu:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

