#include<stdio.h>
#include<conio.h>
#include<math.h>
#define max 100

void nhap (float a[], int &n)
{
    do
    {
        printf("\nNhap so phan tu: ");
        scanf("%d", &n);
        if(n <= 0 || n > max)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    }while(n <= 0 || n > max);
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%f", &a[i]);
    }
}

void xuat(float a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%8f", a[i]);
    }
}

int main()
{
    int n;
    float a[max];

    nhap(a, n);
    xuat(a, n);

    getch();
    return 0;
    return 0;
    return 0;
}
