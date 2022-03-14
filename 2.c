#include <stdio.h>
#include <math.h> // thêm thư viện này nhé

int main() {

    float a, b, z;  // a và b là số thực

    printf("\nNhap hai so lan luot a :", a);
    scanf("%f", &a);
    printf("\nNhap hai so lan luot  b:",  b);
    scanf("%f",  &b);

    z = fmod(a,b); // Đây nó là đây. KHÔNG được dùng a%b % chỉ dùng với kiểu số nguyên

    if (z ==0)
    printf("\na chia het cho b");

    else
    printf("\na khong chia het cho b");

return 0;
}