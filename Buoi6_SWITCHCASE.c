/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    printf("Hello World");
    // // Nhap vao 1 so nguyen va kiem tra no la thang nao trong nam
    // switch (bien){
    //     case giaTri1:{
    //         // code 
    //         break;
    //     }
    //     case giaTri2:{
    //         // code
    //         break;
    //     }
    //     //... co the co rat nhieu case 
    //     default:{
    //         // code 
    //         break;
    //     }
    // }
    // gia tri 1,2: Cung kieu du lieu vs bien truyen vao
    // int number ;
    // printf("Nhap thang:");
    // scanf("%d",&number);
    // switch(number){
    //     case 1:{
    //         printf("Thang 1");
    //         break;
    //     }
    //     case 2:{
    //         printf("Thang 2");
    //         break;
    //     }
    //     default:{
    //         printf("Thang khong ton tai");
    //         break;
    //     }
    // }
    // B1: Nhap diem toan, ly, hoa (so nguyen).
    // Tinh diem TB cua 3 mon nay.
    // Neu diem TB >=0 && diem TB <5 => SV Yeu 
    // Neu diem TB >=5 && <7 => SV TB 
    // Diem TB >= 7 && <8 => Kha 
    // 8-10: Gioi
    // B2: Nhap vao 1 so. In ra so do chan hay le 
    // Tao 1 menu gom cac chuc nang sau
    // 1. In ra chuc nang 1 
    // 2. In ra chuc nang 2 
    // 3. Thoat chuong trinh
    int number ;
    printf("Enter number:");
    scanf("%d",&number);
    switch(number){
        case 1:{
            int so ;
            printf("Enter so :");
            scanf("%d",&so);
            if(so %2 ==0){
                printf("So chan");
            }else{
                printf("So le");
            }
            break;
        }
        case 2:{
            printf("Chuc nang 2");
            break;
        }
        case 3:{
            break;
        }
        default:{
            printf("Chuc nang khong ton tai");
            break;
        }
    }
    return 0;
}
