//
//  C05006_chuyen_doi_hai_hang_trong_ma_tran.c
//  codePTIT
//
//  Created by Chu Mai on 09/04/2022.
//

#include <stdio.h>

int matrix[51][51];

int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++) scanf("%d",&matrix[i][j]);
    }
    int a,b;
    scanf("%d%d",&a,&b);
    
    for(int i=0;i<m;i++){
        if(i==a-1) for(int j=0;j<n;j++) printf("%d ",matrix[b-1][j]);
        else if(i==b-1) for(int j=0;j<n;j++) printf("%d ",matrix[a-1][j]);
        else for(int j=0;j<n;j++) printf("%d ",matrix[i][j]);
        printf("\n");
    }
}
