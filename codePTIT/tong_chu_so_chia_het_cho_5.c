//
//  tong_chu_so_chia_het_cho_5.c
//  codePTIT
//
//  Created by Chu Mai on 01/03/2022.
//

#include <stdio.h>

int sang[100000];

int sumOfDigit(int x){
    int sum=0;
    while (x!=0) {
        sum=sum+x%10;
        x=x/10;
    }
    return sum;
}

int main(){
    int n;
    scanf("%d",&n);
    sang[0]=0;sang[1]=0;
    for(int i=2;i<=n;i++){
        sang[i]=1;
    }
    for (int i=2; i<=n; i++) {
        if(sang[i]==1){
            for(int j=i*2;j<=n;j=j+i) sang[j]=0;
        }
    }
    int count=0;
    for(int i=2;i<=n;i++){
        if(sang[i]==1){
            if(sumOfDigit(i)%5==0){
                printf("%d ",i);
                count++;
            }
        }
    }
    printf("\n%d",count);
}
