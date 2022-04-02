//
//  C03057_tinh_tong_nho_nhat_va_lon_nhat.c
//  codePTIT
//
//  Created by Chu Mai on 02/04/2022.
//

#include <stdio.h>
#include <string.h>
#include <math.h>

long long stringToNumber(char s[18]){
    long long n=0;
    for(int i=0;i<strlen(s);i++){
        n=n*10+(s[i]-48);
    }
    return n;
}

void min(char s[18]){
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='6') s[i]='5';
    }
}

void max(char s[18]){
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='5') s[i]='6';
    }
}

void oneTime(){
    char num1[18], num2[18];
    scanf("%s %s", &num1, &num2);
    long long sumMin=0, sumMax=0;
    min(num1);
    min(num2);
    sumMin = stringToNumber(num1) + stringToNumber(num2);
    max(num1);
    max(num2);
    sumMax = stringToNumber(num1) + stringToNumber(num2);
    printf("%lld %lld\n", sumMin, sumMax);
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        oneTime();
        printf("\n");
    }
}
