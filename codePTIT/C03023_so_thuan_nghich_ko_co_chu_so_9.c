//
//  C03023_so_thuan_nghich_ko_co_chu_so_9.c
//  codePTIT
//
//  Created by Chu Mai on 23/04/2022.
//

#include <stdio.h>

int checkNum(int a){
    int m=0,count=0,mem=a;
    while (a!=0) {
        m=m*10+(a%10);
        if(a%10==9) count++;
        a=a/10;
    }
    
    if(count==0 && mem==m) return 1;
    else return 0;
}

int main(){
    int n;
    scanf("%d",&n);
    
    int count=0;
    for(int i=2;i<n;i++){
        if(checkNum(i)==1){
            count++;
            printf("%d ",i);
        }
    }
    
    printf("\n%d",count);
}
