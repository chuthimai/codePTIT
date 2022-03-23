//
//  so_Smith.c
//  codePTIT
//
//  Created by Chu Mai on 01/03/2022.
//

#include <stdio.h>
#define ui unsigned int

int sumOfDigit(ui x){
    int sum=0;
    while(x!=0){
        sum=sum+x%10;
        x=x/10;
    }
    return sum;
}

int main(){
    ui n;
    scanf("%u",&n);
    int sum=0;
    ui i=2,save=n;
    while (n!=1) {
        if(n%i==0){
            sum=sum+sumOfDigit(i);
            n=n/i;
        }else i++;
    }
    if(sumOfDigit(save)==sum) printf("YES");
    else printf("NO");
}
