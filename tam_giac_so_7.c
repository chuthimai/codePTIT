//
//  tam_giac_so_7.c
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
            if(j==0) printf("%d ",i);
            else {
                a=a+m;
                printf("%d ",a);
                m--;
            }
        }
        printf("\n");
    }
}
