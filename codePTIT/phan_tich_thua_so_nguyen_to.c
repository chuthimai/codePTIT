//
//  phan_tich_thua_so_nguyen_to.c
//  codePTIT
//
//  Created by Chu Mai on 28/02/2022.
//

#include <stdio.h>
#define ui unsigned int

void oneTime(){
    ui a;
    scanf("%u",&a);
    int count=0,re=0;
    ui i=2;
    printf("%u =",a);
    while (a!=1) {
        if (a%i==0) {
            a=a/i;
            count++;
        }
        if(a%i!=0){
            if(count!=0){
                if(re==0){
                    printf(" %d^%d ",i,count);
                    re++;
                }else printf("* %d^%d ",i,count);
                count=0;
            }
            i++;
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        oneTime();
        printf("\n");
    }
}
