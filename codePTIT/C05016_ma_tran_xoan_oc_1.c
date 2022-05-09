//
//  C05016_ma_tran_xoan_oc_1.c
//  codePTIT
//
//  Created by Chu Mai on 09/05/2022.
//

#include <stdio.h>

int matrix[100][100];

int main(){
    int n;
    scanf("%d",&n);
    
    int d=1;
    int x1=0,x2=n-1,y1=0,y2=n-1;
    
    while (x1!=x2 && y1!=y2) {
        for(int i=y1;i<=y2;i++) {
            matrix[x1][i]=d++;
        }
        if(x1<x2) x1++;
        
        for(int i=x1;i<=x2;i++) {
            matrix[i][y2]=d++;
        }
        if(y1<y2) y2--;
        
        for(int i=y2;i>=y1;i--) {
            matrix[x2][i]=d++;
        }
        if(x1<x2) x2--;

        for(int i=x2;i>=x1;i--) {
            matrix[i][y1]=d++;
        }
        if(y1<y2) y1++;
        if(x1==x2 && y1==y2) matrix[x1][y1]=n*n;
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) printf("%d ",matrix[i][j]);
        printf("\n");
    }
}
