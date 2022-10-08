/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    // 1. Switch case 
    // Nhap vao so thang . Xem thang day thuoc quy nao 
    // int number;
    // printf("Nhap thang:");
    // scanf("%d",&number);
    // switch(number){
    //     case 1:case 2:case 3:{
    //         printf("Quy 1");
    //         break;
    //     }
    //     case 4:case 5:case 6:{
    //         printf("Quy 2");
    //         break;
    //     }
    //     case 7:case 8:case 9:{
    //         printf("Quy 3");
    //         break;
    //     }
    //     case 10:case 11:case 12:{
    //         printf("Quy 4");
    //         break;
    //     }
       
    //   default:{
    //       printf("khong thuoc thang nao trong nam");
    //       break;
    //   }
    // }
    
    //2. Bien 
    // int i = 0;
    // for(;i<10;i++){
    //     printf("%d\n",i);
    // }
    //  Có 2 loại biến :
    //    - Biến toàn cục 
    //    - Biến cục bộ 
    // int i = 0;
    // for(;i<10;i++){
    //     printf("%d\n",i);
    // }     
    // printf("\nhihi\n");
    // printf("%d\n",i);

// Nhập 1 số. Đếm xem có bao nhiêu số lẻ từ 1 tới n.
// Nếu gặp số 10 thì dừng lại 
    int n ;
    printf("Enter number:");
    scanf("%d",&n);
    int count = 0;
    for(int i =0;i< (n+1);i++){
        if(i == 10){
            break;
        }
        if(i%2!=0){
            count ++;
        }
    }
    printf("Count = %d\n",count);
    return 0;
}
