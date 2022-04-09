//
//  C05007_chuyen_doi_2_cot_trong_ma_tran.c
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
        for(int j=0;j<n;j++){
            if(j==a-1) printf("%d ",matrix[i][b-1]);
            else if(j==b-1) printf("%d ",matrix[i][a-1]);
            else printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}

