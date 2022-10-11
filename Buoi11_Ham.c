/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// code ham ở trên main
// void tinhTong(int a,int b){
//     int sum = a+b;
//     printf("Tong = %d\n",sum);
// }
int tinhTong1(int a,int b){
    int sum = a+b;
    return sum;
}
int main()
{
    // Ham 
    //  => Chuong trinh van chay 
    //  => Nhin code trong gon gang ...
    // Có 2 loại hàm 
    // Hàm có kiểu dữ liệu trả về : Bắt buộc phải có return 
    // Hàm không có kiểu dữ liệu trả về : void , k có return 
    //  Cú pháp :
    // tham soDauVao: kieuDuLieu tenBien. Nếu có 2 ts đầu vào trở lên 
    // => Ngăn cách bởi dấu phẩy 
    // kiểu dữ liệu tenHam(thamSoDauVao){
    //     // code 
    //     return ...; // có thể có 
    // }
    // B1: Tính tổng của 2 số nhập từ bàn phím 
    int numberOne;
    printf("So 1:");
    scanf("%d",&numberOne);
    int numberSecond;
    printf("So 2:");
    scanf("%d",&numberSecond);
    int sum = tinhTong1(numberOne,numberSecond);
    // tinhTong(numberOne,numberSecond);
    // int sum ;
    // // int sum = numberSecond + numberOne;
    printf("Tong = %d\n",sum);
    return 0;
}
