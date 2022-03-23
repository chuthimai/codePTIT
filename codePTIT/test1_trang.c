//
//  test1_trang.c
//  codePTIT
//
//  Created by Chu Mai on 04/03/2022.
//

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    if(n==0) printf("0");
    if(n>=512){
        printf("1");
        count++;
        n=n-512;
    }
    if(n>=256){
        printf("1");
        count++;
        n=n-256;
    }else{
        if(count>0) printf("0");
    }
    if(n>=128){
        printf("1");
        count++;
        n=n-128;
    }else{
        if(count>0) printf("0");
    }
    if(n>=64){
        printf("1");
        count++;
        n=n-64;
    }else{
        if(count>0) printf("0");
    }
    if(n>=32){
        printf("1");
        count++;
        n=n-32;
    }else{
        if(count>0) printf("0");
    }
    if(n>=16){
        printf("1");
        count++;
        n=n-16;
    }else{
        if(count>0) printf("0");
    }
    if(n>=8){
        printf("1");
        count++;
        n=n-8;
    }else{
        if(count>0) printf("0");
    }
    if(n>=4){
        printf("1");
        count++;
        n=n-4;
    }else{
        if(count>0) printf("0");
    }
    if(n>=2){
        printf("1");
        count++;
        n=n-2;
    }else{
        if(count>0) printf("0");
    }
    if(n>=1){
        printf("1");
        count++;
        n=n-1;
    }else{
        if(count>0) printf("0");
    }
}
