//
//  chen_mang_1.c
//  codePTIT
//
//  Created by Chu Mai on 02/03/2022.
//

#include <stdio.h>

long long a[101],b[101];
int main(){
    int m,n;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%lld",&b[i]);
    }
    int p,count=0;
    scanf("%d",&p);
    for(int i=1;i<=n;i++){
        if(p==0 && count==0){
            for(int j=0;j<m;j++){
                printf("%lld ",b[j]);
                count++;
            }
        }
        printf("%lld ",a[i-1]);
        if(i==p){
            for(int j=0;j<m;j++){
                printf("%lld ",b[j]);
            }
        }
    }
}
