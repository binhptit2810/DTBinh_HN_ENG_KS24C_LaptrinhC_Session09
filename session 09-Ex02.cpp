#include <stdio.h>

int main() {
    // khai bao va gan gia tri cho 1 mang bat ki
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int cansua;
    int giatrimoi;

    // yeu cau nguoi dung nhap vao gia tri va vi tri can sua
    printf("Moi ban nhap vao vi tri can sua (0-5): ");
    scanf("%d", &cansua);

    // kiem tra tinh hop le cua vi tri
    if (cansua < 0 || cansua >= 6) {
        printf("Vi tri khong hop le!\n");
    }

    printf("Moi ban nhap vao gia tri moi sau khi sua: ");
    scanf("%d", &giatrimoi);

    // ghi de gia tri cu bang gia tri moi
    arr[cansua] = giatrimoi;

    // in mang sau khi sua 
    printf("Gia tri moi sau khi sua la:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

