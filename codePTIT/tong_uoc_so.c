//
//  tong_uoc_so.c
//  codePTIT
//
//  Created by Chu Mai on 04/03/2022.
//

#include<stdio.h>
#include <math.h>

int sumOfDivisor(int a){
    int sum=0;
    for(int i=2;i<sqrt(a)+1;i++){
        while (a%i==0) {
            sum+=i;
            a=a/i;
        }
    }
    if(a!=1) sum+=a;
    return sum;
}

int main(){
    int n;
    scanf("%d",&n);
    long long sum=0;
    for(int i=0;i<n;i++){
        int a ;
        scanf("%d",&a);
        sum+=sumOfDivisor(a);
    }
    printf("%lld\n",sum);
}
