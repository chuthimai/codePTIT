//
//  boi_so_chung_uoc_so_chung.c
//  codePTIT
//
//  Created by Chu Mai on 27/02/2022.
//

#include <stdio.h>
#define ull unsigned long long

unsigned int findGCD(unsigned int a, unsigned int b){
    while(a!=b){
        if(a>b){
            unsigned int t=a;
            a=b;
            b=t;
        }
        b=b-a;
    }
    return a;
}

int main(){
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        unsigned int a,b;
        scanf("%u%u",&a,&b);
        printf("%llu %u\n",(ull)a*b/findGCD(a, b),findGCD(a, b));
    }
}
