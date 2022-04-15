//
//  C03016_kiem_tra_so_Fibonaci_2.c
//  codePTIT
//
//  Created by Chu Mai on 15/04/2022.
//

#include <stdio.h>

long long fib[100];

void createFib(){
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<99;i++) fib[i]=fib[i-1]+fib[i-2];
}

void oneTime(){
    createFib();
    long long n;
    scanf("%lld",&n);
    for(int i=0;i<99;i++){
        if(n==fib[i]) {
            printf("YES\n");
            break;
        }
        if(n<fib[i]){
            printf("NO\n");
            break;
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        oneTime();
    }
}
