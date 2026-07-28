#include <stdio.h>
void yeuCau1();
int main()
{
    int chon;
    
    do{
        printf("+---------------------------------------------------+\n");
        printf("|             MENU CHUONG TRINH LAB 4               |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Tinh trung binh tong cac so chia het cho 2     |\n");
        printf("| 2. Kiem tra so nguyen to                          |\n");
        printf("| 3. Kiem tra so chinh phuong                       |\n");
        printf("| 4. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-4): \n");
        scanf("%d", &chon);
        switch(chon){
            case 1:
                yeuCau1();
                break;
            case 2:
                printf("Ban chon chuc nang 2: Kiem tra so nguyen to\n");
                printf("Nhap mot so nguyen: ");
                int num;
                scanf("%d", &num);
                if(num <= 1){            
                    printf("Số %d khong phai la so nguyen to\n", num);
                } else {
                    for(int i = 2; i <= num / 2; i++){
                        if(num % i == 0){
                            printf("Số %d khong phai la so nguyen to\n", num);
                            goto ketThuc;
                            break;
                        }
                    }
                     printf("Số %d la so nguyen to\n", num);
                }
                ketThuc:
                break;
            case 3:
                printf("Ban chon chuc nang 3: Kiem tra so chinh phuong\n");
                printf("Nhap mot so nguyen: ");
                int n;
                scanf("%d", &n);
                if(n < 0){
                    printf("So %d khong phai la so chinh phuong\n", n);
                } else {
                    for(int i = 0; i * i <= n; i++){
                        if(i * i == n){
                            printf("So %d la so chinh phuong\n", n);
                            goto ketThuc2;
                            break;
                        }
                    }
                    printf("So %d khong phai la so chinh phuong\n", n);
                }
                ketThuc2:
                break;
            case 4:
                printf("Ban chon chuc nang 4: Thoat chuong trinh\n");
                break;
            default:
                printf("Ban phai chon chuc nang 1 - 4\n");
        }
    }while (chon != 4);
    return 0;
}
void yeuCau1()
{
    printf("Ban chon chuc nang 1: Tinh trung binh tong cac so chia het cho 2\n");
                int min, max, sum = 0, count = 0;
                printf("Nhap gia tri min: ");
                scanf("%d", &min);
                printf("Nhap gia tri max: ");
                scanf("%d", &max);
                do{
                    if(min > max){
                        printf("Gia tri min phai nho hon gia tri max!\n");
                        printf("Nhap lai gia tri min: ");
                        scanf("%d", &min);
                        printf("Nhap lai gia tri max: ");
                        scanf("%d", &max);
                    }else{
                        break;
                    }
                } while(min > max);
                for(int i = min; i <= max; i++){
                    if(i % 2 == 0){
                        sum += i;
                        count++;
                    }
                }
                if(count > 0){
                    float average = (float)sum / count;
                    printf("Trung binh tong cac so chia het cho 2 tu %d den %d la: %.2f\n", min, max, average);
                } else {
                    printf("Khong co so chia het cho 2 trong khoang tu %d den %d\n", min, max);
                }
}