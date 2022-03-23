//
//  kiem_tra_so_Fibonaci_1.c
//  codePTIT
//
//  Created by Chu Mai on 27/02/2022.
//

#include <stdio.h>

int main(){
    unsigned int n;
    scanf("%u",&n);
    if (n>99999999){printf("0");}
    else {
        unsigned int a=1,b=1,c=0;
        while(c<n){
            c=a+b;
            a=b;
            b=c;
        }
        if (c==n) {
            printf("1");
        }else printf("0");
    }
    
}
