//
//  so_strong_trong_doan.c
//  codePTIT
//
//  Created by Chu Mai on 27/02/2022.
//

#include <stdio.h>

int a[10];

int check(unsigned int x){
    unsigned int sum=0,save=x;
    while (x!=0) {
        sum=sum+a[x%10];
        x=x/10;
        if(sum>save) break;
    }
    if(sum==save){
        return 1;
    }else return 0;
}
int main(){
    unsigned int m,n;
    scanf("%u%u",&m,&n);
    if(m>n){
        unsigned int t=m;
        m=n;
        n=t;
    }
    a[0]=1;
    for(int i=1;i<10;i++){
        a[i]=i*a[i-1];
    }
    for(int i=m;i<=n;i++){
        if(i>a[9]*9) break;
        if(check(i)==1) printf("%d ",i);
    }
}
