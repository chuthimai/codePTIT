//
//  C07004_phan_so.c
//  codePTIT
//
//  Created by Chu Mai on 15/05/2022.
//

#include <stdio.h>

struct PhanSo{
    int tu;
    int mau;
};

int UCLN(int a, int b){
    while(a!=0 && b!=0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    int result=a+b;
    return result;
}

int BCNN(int a, int b){
    int result=a*b/UCLN(a, b);
    return  result;
}

void oneTime(){
    struct PhanSo p1,p2,sum,div;
    scanf("%d %d %d %d",&p1.tu,&p1.mau,&p2.tu,&p2.mau);
    
    // rut gon 2 phan so neu chua toi gian
    int ucln=UCLN(p1.tu, p1.mau);
    p1.tu/=ucln;
    p1.mau/=ucln;
    ucln=UCLN(p2.tu, p2.mau);
    p2.tu/=ucln;
    p2.mau/=ucln;
    
    //quy dong
    int bcnn=BCNN(p1.mau, p2.mau);
    p1.tu*=bcnn/p1.mau;
    p2.tu*=bcnn/p2.mau;
    p1.mau=bcnn;
    p2.mau=bcnn;
    printf("%d/%d %d/%d\n",p1.tu,p1.mau,p2.tu,p2.mau);
    
    //tinh tong va rut gon
    sum.tu=p1.tu+p2.tu;
    sum.mau=bcnn;
    ucln=UCLN(sum.tu, sum.mau);
    printf("%d/%d\n",sum.tu/ucln,sum.mau/ucln);
    
    //chia p1 cho p2
    ucln=UCLN(p1.tu, p2.tu);
    div.tu=p1.tu/ucln;
    div.mau=p2.tu/ucln;
    printf("%d/%d\n",div.tu,div.mau);
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Case #%d:\n",i);
        oneTime();
    }
}
