#include <stdio.h>
int main()
{
    double dtb ;
    
    do{
        printf("diem trung binh:");
        scanf("%lf",&dtb);
        if (dtb<=0 || dtb>=10)
            printf("Vui long nhap lai");}
    while (dtb>=0 || dtb<=10);    
    
    
    if(dtb>=9)
    printf("xs");
    else if (dtb>=8) 
    printf("g");
    else if (dtb>7) 
    printf("k");
    else if (dtb>=5) 
    printf("tb");
    else 
    printf("y");
    


    printf("Viet Nam co bao nhieu dan toc anh em?\n");
    printf("a. 52\n");
    printf("b. 54\n");
    printf("c. 53\n");
    printf("d. 55\n");
    printf("Nhap dap an cua ban (a,b,c,d):\n");
    char dapan;
    scanf(" %c",&dapan);
    switch(dapan){
        case 'a':printf("Sai roi");
            break;
        case 'b':printf("Dung roi");
            break;
        case 'c':printf("Sai roi");
            break;
        case 'd':printf("Sai roi");
            break;
        default:printf("Dap an khong hop le, vui long chon lai (a,b,c,d)");
    

    return 0;
}
}