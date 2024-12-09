#include <stdio.h>
int tinhGiaiThua(int n) {
    int giaiThua = 1;
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
    }
    return giaiThua;
}

int main() {
    int so;
    printf("nhap mot so nguyen bat ki: ");
    scanf("%d", &so);

    if (so < 0) {
        printf("khong co giai thua cho so am.\n");
    } else {
        int ketQua = tinhGiaiThua(so);
        printf("Giai thua cua %d là: %d\n", so, ketQua);
    }

    return 0;
}

