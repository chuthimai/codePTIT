//
//  C06034_so_la_ma.c
//  codePTIT
//
//  Created by Chu Mai on 20/04/2022.
//

#include <stdio.h>
#include <string.h>

struct romanNumber{
    int num;
    char a;
};
struct romanNumber number[8]={{1,'I'},{5,'V'},{10,'X'},{50,'L'},{100,'C'},{500,'D'},{1000,'M'}};

int seachIndex(char ch){
    int a=7;
    for(int i=0;i<7;i++){
        if(number[i].a==ch){
            a=i;
            break;
        }
    }
    return a;
}

void oneTime(){
    
    char roman[20];
    scanf("%s",&roman);
    
    int len=strlen(roman)-2;
    int n=number[seachIndex(roman[len+1])].num;
    
    for(int i=len;i>=0;i--){
        if(seachIndex(roman[i])<seachIndex(roman[i+1])) n=n-number[seachIndex(roman[i])].num;
        else n=n+number[seachIndex(roman[i])].num;
    }
    
    printf("%d\n",n);
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        oneTime();
    }
}
