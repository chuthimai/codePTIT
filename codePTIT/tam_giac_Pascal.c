//
//  tam_giac_Pascal.c
//  codePTIT
//
//  Created by Chu Mai on 28/03/2022.
//

#include <stdio.h>
int a[10][10];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(i==0) a[0][j]=1;
            else a[i][j]=a[i-1][j-1]+a[i-1][j];
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
