/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    // printf("Hello World\n");
    // // printf("Hello World1");
    // // Khai báo 1 biến tên là number kiểu số nguyên có giá trị khởi tạo = 5
    // int number = 5;
    // // In giá trị của 1 biến 
    // /**
    //  * int => %d 
    //  * long => %ld 
    //  * float => %f 
    //  * double => %lf 
    //  * char => %c
    //  */
    // printf("%d",number);
    
    // Khai bao 2 bien kieu la so nguyen. Tinh cong, tru, nhan chia cua 2 so day
    // int numberFirst  = 10;
    // int numberSecond = 4;
    // int sum = numberFirst + numberSecond;
    // printf("%d",sum);
    
    //  Nhap xuat du lieu 
    int number;
    printf("Nhap so nguyen:");
    scanf("%d",&number);
    
    printf("Xuat thong tin:%d",number);
    // Tinh tong cua 2 so nhap tu ban phim 
    // Vieecj 1: Nhap 2 so tu ban phim 
    // Viec 2: Tinh tong cua 2 so day 
    return 0;
}
