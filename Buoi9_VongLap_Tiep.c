/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    // Tạo 1 menu gồm các chức năng sau đây.
    // Menu sẽ lặp đi lặp lại tới khi nào chọn vào 0 thì dừng chương trình
    // 1. Liệt kê các số từ 1-10
    // 2. Liệt kê các số chẵn từ 0-30
    // 3. Tính tổng các số lẻ từ 1 tới 20 
    // 4. Đếm các số chắn từ 0 tới 20 
    // 5. Tính tích các số lẻ từ 1 tới 10 
    // 0. Thoát 
    // int menu;
    // do{
    //     printf("Nhap menu:");
    //     scanf("%d",&menu);
    //     switch(menu){
    //         case 1:{
    //             int number = 1;
    //             while(number <11){
    //                 printf("%d\n",number);
    //                 number++;
    //             }
    //             break;
    //         }
    //         case 2:{
    //             int number = 0;
    //             while(number <31){
    //                 if(number %2 == 0){
    //                     printf("%d\n",number);
    //                 }
    //                 number++;
    //             }
    //             break;
    //         }
    //         case 3:{
    //             int sum = 0;
    //             int number = 1;
    //             while(number <21){
    //                 if(number % 2 !=0){
    //                     sum=sum+number;
    //                     // sum+=number;
    //                 }
    //                 number ++;
    //             }
    //             printf("Sum = %d\n",sum);
    //             break;
    //         }
    //         case 4:{
    //             int number = 0;
    //             int count = 0;
    //             while(number <21){
    //                 if(number %2 ==0){
    //                     count ++;
    //                 }
    //                 number++;
    //             }
    //             printf("Count = %d\n",count);
    //             break;
    //         }
    //         case 5:{
    //             int tich = 1;
    //             int number = 0;
    //             while(number <11){
    //                 tich = tich * number;
    //                 number++;
    //             }
    //             printf("Tich = %d\n",tich);
    //             break;
    //         }
    //         case 0:{
    //             break;
    //         }
    //         default:{
    //             printf("Chuc nang khong ton tai");
    //             break;
    //         }
    //     }
    // }while(menu !=0);
    
    // Bai tap : Tạo 1 menu gồm các chức năng sau đây.
    // Menu sẽ lặp đi lặp lại tới khi nào chọn vào 0 thì dừng chương trình
    // 1. Nhap vao 2 so tinh tong cua 2 so 
    // 2. Tinh tong cua cac so le tu 0 toi 30 
    // 3. Dem cac so chan tu 0-10
    // 0. THoat
    //  Vong lap for 
    // for(giaTri Khoi tao;dieu kien ;buoc nhay ){
    //     // code 
    // }
    // 1. Tinh tong cac so tu 1 toi 10 
    // 2. Liet ke cac so chan tu 0 -20 
    // 3. Nhap vao so n. Tinh tong tu 0-n 
    // int sum  = 0;
    // for(int i = 0;i<11;i++){
    //     sum+=i;
    // }
    // printf("SUm = %d",sum);
    // for(int i = 0;i<21;i++){
    //     if(i%2==0){
    //         printf("%d\n",i);
    //     }
    // }
    // int n;
    // printf("Nhap n=");
    // scanf("%d",&n);
    // int sum = 0;
    // for(int i = 0;i<(n+1);i++){
    //     sum +=i;
    // }
    // printf("%d\n",sum);
    // while(1){
    //     printf("Nhap number");
    //     int number ;
    //     scanf("%d",&number);
    //     if(number > 0){
    //         break;
    //     }
    // }
    for(int i = 0;i<11;i++){
        if(i ==4){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}
