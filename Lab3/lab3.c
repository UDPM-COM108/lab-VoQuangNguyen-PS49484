#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int menu;

    do {
        
        printf("------------ Menu ------------\n");
        printf("0. Exit\n");
        printf("1. Tinh hoc luc\n");
        printf("2. Giai phuong trinh bac nhat\n");
        printf("3. Giai phuong trinh bac hai\n");
        printf("4. Tinh tien dien\n");
        printf("Nhap lua chon: ");
        scanf("%d", &menu);
        printf("----------------------------\n");


        // # Bài 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC

        if (menu == 1) {

            double dtb;

            do {
                printf("Diem trung binh: ");
                scanf("%lf", &dtb);

                if (dtb < 0 || dtb > 10)
                    printf("Vui long nhap lai!\n");

            } while (dtb < 0 || dtb > 10);

            if (dtb >= 9)
                printf("Xuat sac\n");
            else if (dtb >= 8)
                printf("Gioi\n");
            else if (dtb >= 7)
                printf("Kha\n");
            else if (dtb >= 5)
                printf("Trung binh\n");
            else
                printf("Yeu\n");
        }

        // # Bài 2: Giải phương trình bậc nhất

        else if (menu == 2) {

            double a, b;

            printf("Nhap a: ");
            scanf("%lf", &a);
            printf("Nhap b: ");
            scanf("%lf", &b);

            if (a == 0) {
                if (b == 0)
                    printf("Phuong trinh vo so nghiem\n");
                else
                    printf("Phuong trinh vo nghiem\n");
            } else {
                printf("Nghiem x = %.2lf\n", -b / a);
            }
        }

        // # Bài 3: Giải Phương trình bậc 2

        else if (menu == 3) {

            double a, b, c;

            printf("Nhap a:");
            scanf("%lf",&a);
            printf("Nhap b:");
            scanf("%lf",&b);
            printf("Nhap c:");
            scanf("%lf",&c);

            if (a == 0) {
                printf("Day khong phai phuong trinh bac 2!\n");
            } else {
                double delta = pow(b,2) - 4*a*c;

                if (delta < 0)
                    printf("Phuong trinh vo nghiem\n");
                else if (delta == 0)
                    printf("Nghiem kep x = %.2lf\n", -b/(2*a));
                else {
                    double x1 = (-b + sqrt(delta)) / (2*a);
                    double x2 = (-b - sqrt(delta)) / (2*a);
                    printf("x1 = %.2lf, x2 = %.2lf\n",x1,x2);
                }
            }
        }


        // Bài 4 – Tính tiền điện

        else if (menu == 4) {

            double sodien, tien;

            printf("Nhap so dien tieu thu: ");
            scanf("%lf", &sodien);

            if (sodien < 0) {
                printf("So dien khong hop le!\n");
            } else if (sodien <= 50) {
                tien = sodien * 1678;
            } else if (sodien <= 100) {
                tien = 50 * 1678 + (sodien - 50) * 1734;
            } else if (sodien <= 200) {
                tien = 50 * 1678 + 50 * 1734 + (sodien - 100) * 2014;
            } else {
                tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (sodien - 200) * 2536;
            }

            printf("Tien dien phai tra: %.0lf donng\n", tien);
        }

        else if (menu == 0) {
            printf("Thoat chuong trinh.\n");
        }

        else {
            printf("Lua chon khong hop le!\n");
        }

    } while (menu != 0);

    return 0;
}
