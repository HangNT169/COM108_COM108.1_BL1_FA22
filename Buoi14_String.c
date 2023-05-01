#include <stdio.h>

int main()
{
    // Nhập n. Nhập , xuất các phần tử trong mảng. Liệt kê vị trí của các phần tử là số chẵn
    // int n;
    // int a[100];
    // printf("Nhap size:");
    // scanf("%d",&n);
    // printf("Nhap cac phan tu");
    // for(int i = 0;i<n;i++){
    //     scanf("%d",&a[i]);
    // }
    // // 4,5,2,1,9
    // //  => 0 : a[0] = 4 
    // //  =>1 : a[1] = 5
    // //  => cuoi : a[4] = 9 | a[n-1]
    // // 0 2 
    // // printf("Liet ke vi tri cua cac phan tu chan");
    // // for(int i = 0;i<n;i++){
    // //     if(a[i]%2==0){
    // //         printf("%d\n",i);
    // //     }
    // // }
    // int min = a[0]; 
    // for(int i = 0;i<n;i++){
    //     if(min > a[i]){
    //         min = a[i];
    //     }
    // }
    // printf("Min = %d\n",min);
    
    //  Cac loai kieu du lieu : int/long, float/double , char , bool 
    // char name ;
    // printf("Nhap ten:");
    // scanf("%c",&name); // chu cai dau tien - 1 ky tu 
    
    // printf("Name = %c",name);
    // char []: Xau ky tu 
    // char name[50]; 
    // printf("Nhap ten:"); 
    // // scanf cua %s : khong co & 
    // // scanf("%[^\n]",name);
    // gets(name); 
    // //  Khi gap khoang trang dung => mat luon 
    // printf("String: %s\n",name);
    // B1: Nhap ten, dia chi va in ra thong vua Nhap
    // B2: Nhap ten, tuoi, dia chi va in ra 
    char name[50];
    int tuoi;
    char diaChi[100];
    
    printf("Nhap ten:");
    gets(name);
    
    printf("Nhap tuoi");
    scanf("%d",&tuoi);
    
    // Xoa bo nho dem : Xoa enter 
    fflush(stdin); 
    printf("Nhap diaChi:");
    gets(diaChi);
    
    printf("Ten : %s - Tuoi : %d - Dia Chi %s ",name,tuoi,diaChi);
    
    return 0;
}
