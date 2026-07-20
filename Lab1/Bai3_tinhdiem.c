#include <stdio.h>
#include <stdlib.h>

int main () {
    char mssv[20];
    char Hoten[50];
    float toan, ly, hoa, dTB;

    printf("Nhap ma so sinh vien: ");
    scanf("%19s", mssv);

    getchar();

    printf("Nhap ho va ten: ");
    fgets(Hoten, sizeof(Hoten), stdin);

    printf("Nhap diem Toan:");
    scanf("%f", &toan);
    printf("Nhap diem Ly:");
    scanf("%f", &ly);
    printf("Nhap diem Hoa:");
    scanf("%f", &hoa);

    dTB = (toan*2+ly+hoa)/ (float)4;

    printf("***KET QUA***\n");
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho va ten: %s", Hoten);
    printf("Diem trung binh: %.2f\n", dTB);

    system("pause");
    return 0;
}