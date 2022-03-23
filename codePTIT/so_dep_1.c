//
//  so_dep_1.c
//  codePTIT
//
//  Created by Chu Mai on 27/02/2022.
//

#include <stdio.h>

int sang[1001];
int Fib[28];

int sumOfDigit(int a){
    int sum=0;
    while(a!=0){
        sum=sum+a%10;
        a=a/10;
    }
    return sum;
}

int main(){
    int a, b;
    scanf("%d%d",&a,&b);
    if(a>b){
        int t=a;
        a=b;
        b=t;
    }
    for(int i=2;i<=b;i++){
        sang[i]=1;
    }
    for(int i=2;i<=b;i++){
        if(sang[i]==1){
            for(int j=i*2;j<=b;j=j+i) sang[j]=0;
        }
    }
    Fib[0]=1;
    Fib[1]=1;
    Fib[2]=1;
    for(int i=3;i<28;i++){
        Fib[i]=0;
    }
    int n=1;
    for(int i=2;i<28;i++){
        if(Fib[i]==1){
            Fib[i+n]=1;
            n=i;
        }
    }
    for(int i=a;i<=b;i++){
        if(sang[i]==1){
            if(Fib[sumOfDigit(i)]==1) printf("%d ",i);
        }
    }
}
