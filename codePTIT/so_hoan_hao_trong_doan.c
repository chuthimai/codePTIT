//
//  so_hoan_hao_trong_doan.c
//  codePTIT
//
//  Created by Chu Mai on 27/02/2022.
//

#include <stdio.h>
#include <math.h>
int check(int a){
    for(int i=2;i<a;i++){
        if(a%i==0)return 0;
    }
    return 1;
}
int calculate(int i){
    return pow(2, i-1)*(pow(2, i)-1);
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b){
        unsigned int t=a;
        a=b;
        b=t;
    }
    if(a<=1)a=2;
    for(int i=1;calculate(i)<=b;i++){
        if(check(pow(2, i)-1)==1)
            if (calculate(i)>=a){
                printf("%d ",calculate(i));
            }
    }
}
