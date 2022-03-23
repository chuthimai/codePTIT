//
//  so_hoan_hao_nho_hon_n.c
//  codePTIT
//
//  Created by Chu Mai on 27/02/2022.
//

#include <stdio.h>
#include <math.h>
int check(int a){
    for(int i=2;i<a;i++){
        if(a%i==0)return 0;
    }
    return 1;
}
int calculate(int i){
    return pow(2, i-1)*(pow(2, i)-1);
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;calculate(i)<n;i++){
        if(check(pow(2, i)-1)==1) printf("%d ",calculate(i));
    }
}



