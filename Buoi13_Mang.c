#include <stdio.h>

int main()
{
    // printf("Hello World");
    // a[i]: i thuoc 0-(n-1)
    // int a[5]={4,3,6,-3,2};
    // printf("%d",a[6]);
    // Nhap size cua mang. Nhap cac phan tu trong mang va in ra 
    int a[100];
    int n;
    // nhap size 
    printf("Nhap size:");
    scanf("%d",&n);
    
    // Nhap cac gia tri vao mang
    printf("Nhap cac gia tri vao mang:\n");
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    // In cac phan tu trong mang 
    printf("In cac phan tu trong mang \n");
    for(int i = 0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
