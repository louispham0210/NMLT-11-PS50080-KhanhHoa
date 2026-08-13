#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

typedef struct {
    char mssv[50];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
} SinhVien;

// Chức năng 1: Nhập danh sách
void nhapDanhSach(SinhVien sv[], int *n) {
    printf("Nhap so luong sinh vien: ");
    scanf("%d", n);
    while (getchar() != '\n');

    for (int i = 0; i < *n; i++) {
        printf("\n--- Nhap sinh vien thu %d ---\n", i + 1);

        printf("Nhap MSSV: ");
        fgets(sv[i].mssv, sizeof(sv[i].mssv), stdin);
        sv[i].mssv[strcspn(sv[i].mssv, "\n")] = 0;

        printf("Nhap Ten SV: ");
        fgets(sv[i].tenSV, sizeof(sv[i].tenSV), stdin);
        sv[i].tenSV[strcspn(sv[i].tenSV, "\n")] = 0;

        printf("Nhap Nganh hoc: ");
        fgets(sv[i].nganhHoc, sizeof(sv[i].nganhHoc), stdin);
        sv[i].nganhHoc[strcspn(sv[i].nganhHoc, "\n")] = 0;

        printf("Nhap Diem TB: ");
        scanf("%f", &sv[i].diemTB);
        while (getchar() != '\n');
    }
}

// Hàm Xuất danh sách sinh viên
void xuatDanhSach(SinhVien sv[], int n) {
    if (n == 0) {
        printf("\nDanh sach hien tai dang rong!\n");
        return;
    }
    printf("\n================ DANH SACH SINH VIEN ================\n");
    for (int i = 0; i < n; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("  - MSSV     : %s\n", sv[i].mssv);
        printf("  - Ten SV   : %s\n", sv[i].tenSV);
        printf("  - Nganh hoc: %s\n", sv[i].nganhHoc);
        printf("  - Diem TB  : %.2f\n", sv[i].diemTB);
        printf("-----------------------------------------------------\n");
    }
}

// Chức năng 2: Sắp xếp theo điểm TB tăng dần
void sapXepSV(SinhVien sv[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sv[i].diemTB > sv[j].diemTB) {
                SinhVien temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }
    printf("\n[+] Da sap xep danh sach theo diem TB TANG DAN!\n");
}

// Chức năng 3: Tìm kiếm sinh viên theo MSSV
void timKiemSV(SinhVien sv[], int n) {
    int count = 0;
    char search[50];
    printf("Nhap MSSV can tim: ");
    fgets(search, sizeof(search), stdin);
    search[strcspn(search, "\n")] = 0;
    
    for (int i = 0; i < n; i++) {
        if (strcmp(sv[i].mssv, search) == 0) {
            printf("\n[+] Tim thay sinh vien:\n");
            printf("  - MSSV     : %s\n", sv[i].mssv);
            printf("  - Ten SV   : %s\n", sv[i].tenSV);
            printf("  - Nganh hoc: %s\n", sv[i].nganhHoc);
            printf("  - Diem TB  : %.2f\n", sv[i].diemTB); // Đã sửa %d -> %.2f
            count++;
        }
    }
    if (count == 0) {
        printf("Khong tim thay sinh vien co MSSV '%s'!\n", search);
    }
}

// Chức năng 4: Xuất danh sách đạt học bổng (>= 8.0)
void xuatHocBong(SinhVien sv[], int n) {
    int count = 0;
    printf("\n============ DANH SACH DAT HOC BONG (>= 8.0) ============\n");
    for (int i = 0; i < n; i++) {
        if (sv[i].diemTB >= 8.0) {
            printf("- MSSV: %s | Ten: %s | Nganh: %s | Diem TB: %.2f\n", 
                   sv[i].mssv, sv[i].tenSV, sv[i].nganhHoc, sv[i].diemTB);
            count++;
        }
    }
    if (count == 0) {
        printf("Khong co sinh vien nào dat hoc bong.\n");
    }
    printf("=========================================================\n");
}

int main() {
    SinhVien ds[100];
    int n = 0;        
    int chon;

    do {
        printf("\n+---------------------------------------+\n");
        printf("|  HE THONG QUAN LY SINH VIEN (LAB 8)   |\n");
        printf("+---------------------------------------+\n");
        printf("| 1. Nhap va Xuat danh sach sinh vien   |\n");
        printf("| 2. Sap xep sinh vien theo diem TB     |\n");
        printf("| 3. Tim kiem sinh vien theo MSSV       |\n");
        printf("| 4. Xuat danh sach dat Hoc bong(>= 8.0)|\n");
        printf("| 5. Thoat chuong trinh                 |\n");
        printf("+---------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-5): ");
        scanf("%d", &chon);
        while (getchar() != '\n'); 

        switch (chon) {
            case 1:
                printf("\n--- BAN DA CHON CHUC NANG 1 ---\n");
                nhapDanhSach(ds, &n);
                xuatDanhSach(ds, n);
                break;
            case 2:
                printf("\n--- BAN DA CHON CHUC NANG 2 ---\n");
                sapXepSV(ds, n);
                xuatDanhSach(ds, n);
                break;
            case 3:
                printf("\n--- BAN DA CHON CHUC NANG 3 ---\n");
                timKiemSV(ds, n);
                break;
            case 4:
                printf("\n--- BAN DA CHON CHUC NANG 4 ---\n");
                xuatHocBong(ds, n); 
                break;
            case 5:
                printf("\nCam on ban da su dung chuong trinh!\n");
                break;
            default:
                printf("\nLua chon khong hop le! Vui long chon tu 1 den 5.\n");
                break;
        }
    } while (chon != 5);

    return 0;
}