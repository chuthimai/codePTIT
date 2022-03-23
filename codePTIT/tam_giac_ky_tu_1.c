//
//  tam_giac_ky_tu_1.c
//  codePTIT
//
//  Created by Chu Mai on 23/03/2022.
//

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char a='a';
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            if(i%2!=0){
                printf("%c ",a);
                a++;
            }
            if(i%2==0){
                printf("%c ",a+i-j-1);
            }
        }
        if(i%2==0) a=a+i;
        printf("\n");
    }
}
