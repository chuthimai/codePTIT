//
//  so_strong_nho_hon_n.c
//  codePTIT
//
//  Created by Chu Mai on 27/02/2022.
//

#include <stdio.h>

int a[10];

int check(unsigned int x){
    int sum=0,save=x;
    while (x>0) {
        sum=sum+a[x%10];
        x=x/10;
        if(sum>save) break;
    }
    if(sum==save){
        return 1;
    }else return 0;
}
int main(){
    unsigned int n;
    scanf("%u",&n);
    a[0]=1;
    for(int i=1;i<10;i++){
        a[i]=i*a[i-1];
    }
    for(unsigned int i=1;i<n;i++){
        if(i>a[9]*9) break;
        if(check(i)==1) printf("%d ",i);
    }
}
