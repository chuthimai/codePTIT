//
//  so_fibonacci.c
//  codePTIT
//
//  Created by Chu Mai on 02/03/2022.
//

#include <stdio.h>

long long fib[93];

int main(){
    
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<93;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        printf("%lld\n",fib[a]);
    }
}
