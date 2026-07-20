#include    <stdio.h>
#include <stdlib.h>



int main (){
    char mssv[20];
    char hoten[50];
    int namsinh;
    int tuoi;
    float diemTB;

    printf("--- NHAP THONG TIN SINH VIEN ---\n");

    printf("NHAP MA SO SINH VIEN: ");
    scanf("%s", mssv);

    getchar();

    printf("NHAP HO VA TEN: ");
    fgets(hoten, sizeof(hoten), stdin);
    
    printf("NHAP NAM SINH: ");
    scanf("%d", &namsinh);

    printf("NHAP DIEM TRUNG BINH: ");
    scanf("%f", &diemTB);

    tuoi = 2026 - namsinh;

    printf("\nTHONG TIN SINH VIEN VUA NHAP:\n");
    printf("Ma so sinh vien :%s\n", mssv);
    printf("Ho va ten :%s\n", hoten);
    printf("Nam sinh: %d\n", namsinh);
    printf("Tuoi: %d\n", tuoi);
    printf("Diem trung binh: %.2f\n", diemTB);

    system("pause");
    return 0;
}