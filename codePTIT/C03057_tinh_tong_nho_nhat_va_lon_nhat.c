//
//  C03057_tinh_tong_nho_nhat_va_lon_nhat.c
//  codePTIT
//
//  Created by Chu Mai on 02/04/2022.
//

#include <stdio.h>
#include <string.h>

int charToNumber(char s){
    int n;
    n=s-48;
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

void sum(char s1[18], char s2[18]){
    int sumNumber[19];
    for(int i=0;i<19;i++) sumNumber[i]=0;
    int max=strlen(s1);
    if(strlen(s2)>max) max=strlen(s2);
    int mem=0,i=0,save=max;
    while (max>0) {
        int a,b;
        
        int x=strlen(s1)-1-i;
        if(x<0) {
            a=0;
        }else a=charToNumber(s1[strlen(s1)-1-i]);
        
        int y = strlen(s2)-1-i;
        if(y<0) {
            b=0;
        }else b=charToNumber(s2[strlen(s2)-1-i]);
        
        int s=a+b+mem;
        
        if(s>=10) mem=1;
        else mem=0;
        
        sumNumber[max]=s%10;
        i++; max--;
        
        if(max==0 && mem==1) sumNumber[max]=1;
        else sumNumber[max]=0;
    }
    for(int i=0;i<=save;i++){
        if(i==0 && sumNumber[i]==0) continue;
        printf("%d",sumNumber[i]);
    }
}

void oneTime(){
    char num1[18], num2[18];
    scanf("%s %s", &num1, &num2);
    
    min(num1);
    min(num2);
    sum(num1, num2);
    
    printf(" ");
    
    max(num1);
    max(num2);
    sum(num1, num2);
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        oneTime();
        printf("\n");
    }
}
