//
//  cat_doi.c
//  codePTIT
//
//  Created by Chu Mai on 23/03/2022.
//

#include <stdio.h>
#include <string.h>

int a[]={0,1,-1,-1,-1,-1,-1,-1,0,0};

void oneTime(){
    char num[19];
    scanf("%s",&num);
    long long n=0;
    for(int i=0;i<strlen(num);i++){
        if(a[num[i]-48]==-1){
            n=0;
            break;
        }else{
            n=n*10+a[num[i]-48];
        }
    }
    if(n==0)printf("INVALID\n");
    else printf("%lld\n",n);
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        oneTime();
    }
}
