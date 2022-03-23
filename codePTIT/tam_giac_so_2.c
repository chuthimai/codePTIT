//
//  tam_giac_so_2.c
//  codePTIT
//
//  Created by Chu Mai on 23/03/2022.
//

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a=1,b=2;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            if(i%2!=0) printf("%d",a+j*2);
            if(i%2==0) printf("%d",b+j*2);
        }
        printf("\n");
    }
}
