//
//  C03042_so_giam.c
//  codePTIT
//
//  Created by Chu Mai on 08/05/2022.
//

#include <stdio.h>

int check(unsigned int n){
    int a=0;
    while(n!=0){
        unsigned int m=n;
        n=n/10;
        if(n==0) break;
        if(m%10>=n%10){
            a++;
            break;
        }
    }
    if(a==0) return 1;
    else return 0;
    
}

int main(){
    int n;
    scanf("%d",&n);

    for(int j=0;j<n;j++){
        unsigned int a,b;
        scanf("%u%u",&a,&b);
        
        int count=0;
        for(unsigned int i=a;i<=b;i++){
            if(check(i)==1) count++;
        }
        printf("%d\n", count);
    }
    
}
