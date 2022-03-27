//
//  tam_giac_ki_tu_3.c
//  codePTIT
//
//  Created by Chu Mai on 27/03/2022.
//

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int m=n-1,a=i;
        for(int j=0;j<i;j++){
            if(j==0) printf("%c ",i+64);
            else {
                a=a+m;
                printf("%c ",a+64);
                m--;
            }
        }
        printf("\n");
    }
}
