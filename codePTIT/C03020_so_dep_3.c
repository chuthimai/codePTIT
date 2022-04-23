//
//  C03020_so_dep_3.c
//  codePTIT
//
//  Created by Chu Mai on 23/04/2022.
//

#include <stdio.h>

int checkNum(int a){
    int m=0,sum=0,count=0,mem=a;
    while (a!=0) {
        m=m*10+(a%10);
        sum+=a%10;
        if(a%10==6) count++;
        a=a/10;
    }
    
    if(count>0 && mem==m && sum%10==8) return 1;
    else return 0;
}


int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        int t=a;
        a=b;
        b=t;
    }
    for(int i=a;i<=b;i++) if(checkNum(i)==1) {
        printf("%d ",i);
    }
}
