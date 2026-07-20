#include <stdio.h>
#include <stdlib.h>

int main() {
    float diemToan, diemLy, diemHoa, diemTB;

    printf("Nhap diem Toan: ");
    scanf("%f", &diemToan);
    printf("Nhap diem Ly: ");
    scanf("%f", &diemLy);
    printf("Nhap diem Hoa: ");  
    scanf("%f", &diemHoa);

    diemTB = (float)(diemToan * 3 + diemLy * 2 + diemHoa) / 6.0;

    printf("===KET QUA===\n");
    printf("Diem trung binh: %.2f\n", diemTB);

    system("pause");
    return 0;
}