#include <stdio.h>
#define SIZE 100

void nhapMang(float a[], int n); 
void xuatMang(float a[], int n);
float tongmang(float a[], int n);
float tbcmangle(float a[],int n);
int demPhanduong(float a[], int n);
void sapxeptheothutu(float a[],int n);
void ingiatritaivitrile(float a[],int n);
int main()
{
    float a[SIZE] = {1, -3, 4, -2, 5, 0};
    int n,kq3;
    float kq,kq2; 

    do 
    {
        printf("\nNhap vao so phan tu: ");
        scanf("%d", &n);

        if (n <= 0 || n > SIZE)
        {
            printf("So phan tu khong phu hop! "); 
        }
    } while (n <= 0 || n > SIZE);  

    nhapMang(a, n);

    printf("\nMang vua nhap la: ");
    xuatMang(a, n);

    kq = tongmang(a, n); 
    printf("Tong tat ca cac phan tu trong mang la: %.2f\n", kq); 
    
    kq2 = tbcmangle(a,n);
    printf("trung binh cong cac phan tu le: %.2f\n", kq2);
    
	kq3 = demPhanduong(a,n); 
    printf("So phan tu duong trong mang la: %d\n", kq3);
    
    sapxeptheothutu(a, n);
    printf("Mang sau khi sap xep theo thu tu tang dan: ");
    xuatMang(a, n); 
    
	ingiatritaivitrile(a, n);
	return 0;
}

void nhapMang(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {   
        printf("Vui long nhap gia tri cua phan tu A[%d]: ", i);
        scanf("%f", &a[i]);  
    }
}

void xuatMang(float a[], int n)
{
    printf("Mang A gom cac phan tu: "); 
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", a[i]);  
    }   
    printf("\n");
}

float tongmang(float a[], int n)
{
    float tong = 0;  
    for (int i = 0; i < n; i++)  
    {
        tong += a[i];  
    }
    return tong;
}
float tbcmangle(float a[], int n)
{
    float sum = 0;
    int dem = 0;
    for (int i = 1; i < n; i += 2)  
    {
        sum += a[i];  
        dem++;        
    }

    if (dem == 0)  
        return 0;
    
    return sum / dem;  
}
int demPhanduong(float a[], int n)
{
    int count = 0;  
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)  
        {
            count++;
        }
    }
    return count;  
}
void sapxeptheothutu(float a[], int n)
{
    float temp;  
    for (int i = 0; i < n - 1; i++)  
    {
        for (int j = 0; j < n - i - 1; j++)  
		        {
            if (a[j] > a[j + 1])  
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
void ingiatritaivitrile(float a[], int n)
{
    printf("Gia tri tai cac vi tri le trong mang: ");
    for (int i = 1; i < n; i += 2)  
    {
        printf("%.2f ", a[i]);
    }
    printf("\n");
}
