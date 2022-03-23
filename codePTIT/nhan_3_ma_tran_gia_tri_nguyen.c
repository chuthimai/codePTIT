//
//  nhan_3_ma_tran_gia_tri_nguyen.c
//  codePTIT
//
//  Created by Chu Mai on 23/03/2022.
//

#include <stdio.h>

int main(){
    
    int m,n,p,q;
    scanf("%d%d%d%d",&m,&n,&p,&q);
    int A[m][n],B[n][p],C[p][q],AB[m][p],ABC[m][q];
    
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++) {
            scanf("%d",&A[i][j]);
        }
    }
    
    for(int i=0;i<n;i++){
        for (int j=0;j<p;j++) {
            scanf("%d",&B[i][j]);
        }
    }
    
    for(int i=0;i<p;i++){
        for (int j=0;j<q;j++) {
            scanf("%d",&C[i][j]);
        }
    }
    
    for(int i=0;i<m;i++){
        for (int j=0;j<p;j++) {
            AB[i][j]=0;
            for(int k=0;k<n;k++){
                AB[i][j]=AB[i][j]+A[i][k]*B[k][j];
            }
        }
    }
    
    for(int i=0;i<m;i++){
        for (int j=0;j<q;j++) {
            ABC[i][j]=0;
            for(int k=0;k<p;k++){
                ABC[i][j]=ABC[i][j]+AB[i][k]*C[k][j];
            }
        }
    }
    
    for(int i=0;i<m;i++){
        for (int j=0;j<q;j++) {
            printf("%d ",ABC[i][j]);
        }
        printf("\n");
    }
    
}
