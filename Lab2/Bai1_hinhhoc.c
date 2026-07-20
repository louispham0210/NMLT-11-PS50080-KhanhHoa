#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main(){
    float chieudaiHCN, chieurongHCN, bankinhHT, chuviHCN, dientichHCN, chuviHT, dientichHT;

    printf("Nhap chieu dai hinh chu nhat: ");
    scanf("%f", &chieudaiHCN);
    printf("Nhap chieu rong hinh chu nhat: ");
    scanf("%f", &chieurongHCN);
    chuviHCN = 2 * (chieudaiHCN + chieurongHCN);
    dientichHCN = chieudaiHCN * chieurongHCN;

    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &bankinhHT);
    chuviHT = 2 * PI * bankinhHT;
    dientichHT = PI * bankinhHT * bankinhHT;

    printf("===KET QUA===\n");
    printf("Chu vi hinh chu nhat: %.2f\n", chuviHCN);
    printf("Dien tich hinh chu nhat: %.2f\n", dientichHCN);
    printf("Chu vi hinh tron: %.2f\n", chuviHT);
    printf("Dien tich hinh tron: %.2f\n", dientichHT);

    system ("pause");
    return 0;
}