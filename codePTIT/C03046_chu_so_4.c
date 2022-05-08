//
//  C03046_chu_so_4.c
//  codePTIT
//
//  Created by Chu Mai on 08/05/2022.
//

#include <stdio.h>
#include <math.h>

int check(int a){
    int m=a, aRev=0, b=0, sum=0;
    while (a!=0) {
        if(a%10==4){
            b++;
            break;
        }
        sum+=a%10;
        aRev=aRev*10+a%10;
        a/=10;
    }
    if(m==aRev && b==0 && sum%10==0) return 1;
    else return 0;
}

void oneTime(){
    int n;
    scanf("%d",&n);
    unsigned int begin=pow(10, n-1), end=pow(10, n);
    for(int i=begin;i<end;i++){
        if(check(i)==1) printf("%d ",i);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        oneTime();
        printf("\n");
    }
}
