/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    // Có 2 cách ép kiểu
    // C1: Ép kiểu tường minh
    int number = 6;
    printf("Truoc khi ep kieu: %d\n",number);
    float epKieuC1 = (float)number;
    printf("Sau khi ep kieu c1:%f\n",epKieuC1);
    
    // C2: Ep kieu ngam 
    float epKieuC2= 1.0*number;
    printf("Sau khi ep kieu c2:%f\n",epKieuC2);

    // Điều kiện: IF ELSE : Luồng chạy Code từ trên xuống dưới. Nếu đk trong if đúng thì sẽ thực hiện khối lệnh trong IF
    //  Còn nếu sai thì sẽ nhảy vào else 
    // Cú pháp:
    // if(dk){
    //     // code luồng xử lý
    // }else{
    //     // luồng xử lý việc cần làm
    // }
    // Khi có nhiều khoảng điều thì bắt đầu sẽ là if và kết thúc là else. Ở giữa sẽ là if else
    return 0;
}
