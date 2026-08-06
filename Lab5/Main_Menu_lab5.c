#include <stdio.h>
#include <stdbool.h>

void menu();
void chucnang1();
void chucnang2();
void chucnang3();
void chucnang4();

bool kiemtranamnhuan(int nam);
int solonnhat(int a, int b, int c);
void swap(int *a, int *b);
const char* checkTriangle(int a, int b, int c);

int main()
{
    int chon;

    do
    {
        menu();
        printf(">> Xin moi chon chuc nang (1-5): ");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
            chucnang1();
            break;

        case 2:
            chucnang2();
            break;

        case 3:
            chucnang3();
            break;

        case 4:
            chucnang4();
            break;

        case 5:
            printf("Ban da thoat chuong trinh!\n");
            break;

        default:
            printf("Lua chon khong hop le!\n");
        }

        printf("\n");

    } while (chon != 5);

    return 0;
}

void menu()
{
    printf("+----------------------------------------------+\n");
    printf("|            MENU CHUONG TRINH LAB 5           |\n");
    printf("+----------------------------------------------+\n");
    printf("| 1. Tim gia tri lon nhat trong 3 so           |\n");
    printf("| 2. Kiem tra nam nhuan                        |\n");
    printf("| 3. Hoan vi hai so (Con tro)                  |\n");
    printf("| 4. Kiem tra va phan loai tam giac            |\n");
    printf("| 5. Thoat                                     |\n");
    printf("+----------------------------------------------+\n");
}

void chucnang1()
{
    int a, b, c;

    printf("Nhap 3 so a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("So lon nhat la: %d\n", solonnhat(a, b, c));
}

int solonnhat(int a, int b, int c)
{
    int max = a;

    if (b > max)
        max = b;

    if (c > max)
        max = c;

    return max;
}

void chucnang2()
{
    int nam;

    printf("Nhap nam: ");
    scanf("%d", &nam);

    if (kiemtranamnhuan(nam))
        printf("%d la nam nhuan.\n", nam);
    else
        printf("%d khong phai nam nhuan.\n", nam);
}

bool kiemtranamnhuan(int nam)
{
    return (nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0);
}

void chucnang3()
{
    int x, y;

    printf("Nhap x va y: ");
    scanf("%d%d", &x, &y);

    printf("Truoc khi hoan vi: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("Sau khi hoan vi: x = %d, y = %d\n", x, y);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void chucnang4()
{
    int a, b, c;

    printf("Nhap 3 canh a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("%s\n", checkTriangle(a, b, c));
}

const char* checkTriangle(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a)
    {
        return "Khong phai la tam giac.";
    }

    if (a == b && b == c)
    {
        return "Tam giac deu.";
    }

    if ((a * a + b * b == c * c ||
         a * a + c * c == b * b ||
         b * b + c * c == a * a) &&
        (a == b || a == c || b == c))
    {
        return "Tam giac vuong can.";
    }

    if (a * a + b * b == c * c ||
        a * a + c * c == b * b ||
        b * b + c * c == a * a)
    {
        return "Tam giac vuong.";
    }

    if (a == b || a == c || b == c)
    {
        return "Tam giac can.";
    }

    return "Tam giac thuong.";
}