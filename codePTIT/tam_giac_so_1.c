//
//  tam_giac_so_1.c
//  codePTIT
//
//  Created by Chu Mai on 23/03/2022.
//

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a=1;
        for(int j=0;j<1+2*i;j++){
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
}
