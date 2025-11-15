#include <stdio.h>
#include <math.h>
#define pi 3.141592654
int main(){
    
    int x,y,cd,cr; float r;

    //#BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ

    printf("nhập số nguyên x: ");
    scanf("%d", &x);
    printf("nhập số nguyên y: ");
    scanf("%d", &y);

    //tính toán và in ra kết quả.

    printf("tổng hai số là: %d\n", x+y);
    printf("hiệu hai số là: %d\n", x-y);

    //#BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
    
    printf("nhập chiều dài:");
    scanf("%d",&cd);
    printf("nhập chiều rộng:");
    scanf("%d",&cr);
    //tính toán và in ra kết quả.
    printf("C hình chữ nhật là: %dm\n",(cr+cd)*2 );
    printf("S hình chữ nhật là: %dm²\n", cr*cd );

    //#Bài 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN

    printf("nhập bán kính của hình tròn: ");
    scanf("%f", &r);
    //tính toán và in ra kết quả.
    printf("C hình tròn là: %.2fm\n", 2*pi*r );
    printf("S hình tròn là: %.2fm²\n", pi*pow(r,2) );
    
    return 0;
}
