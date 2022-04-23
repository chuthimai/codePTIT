//
//  C05012_tich_ma_tran_cheo.c
//  codePTIT
//
//  Created by Chu Mai on 23/04/2022.
//

#include <stdio.h>

void oneTime(int t){
    int m;
    scanf("%d",&m);
    
    int matrix[m][m];
    int revMatrix[m][m];
    int mat[m][m];
    
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(j<=i) matrix[i][j]=j+1;
            else matrix[i][j]=0;
            revMatrix[j][i]=matrix[i][j];
        }
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            mat[i][j]=0;
            for(int k=0;k<m;k++){
                mat[i][j]+=matrix[i][k]*revMatrix[k][j];
            }
        }
    }
    
    printf("Test %d:\n",t);
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++) printf("%d ",mat[i][j]);
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        oneTime(i+1);
    }
}

