//
//  so_dep_2.c
//  codePTIT
//
//  Created by Chu Mai on 22/03/2022.
//

#include <stdio.h>
#include <string.h>

int checkReversibleNumber(char a[501]){
    char b[501]="",c[501]="";
    int count=0;
    for(int i=0;i<strlen(a);i++){
        if(a[i]=='0') count++;
        else break;
    }
    for(int i=0;i<strlen(a)-count;i++){
        b[i]=a[strlen(a)-1-i];
    }
    for(int i=count;i<strlen(a);i++){
        c[i-count]=a[i];
    }
    if(strcmp(c, b)==0) return 1;
    else return 0;
}

int checkSumOfDigits(char a[501]){
    int sum=0;
    for(int i=0;i<strlen(a);i++){
        sum=sum+(a[i]-48);
    }
    if(sum%10==0) return 1;
    else return 0;
}

void oneTime(){
    char num[501];
    scanf("%s",&num);
    if(checkSumOfDigits(num)==1 && checkReversibleNumber(num)==1 && num[0]=='8') printf("YES\n");
    else printf("NO\n");
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        oneTime();
    }
}
