//
//  C05008_loai_bo_hang_va_cot_co_tong_max_ra_khoi_ma_tran.c
//  codePTIT
//
//  Created by Chu Mai on 09/04/2022.
//

#include <stdio.h>

int matrix[15][15];

void oneTime(){
    int m,n;
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++) scanf("%d",&matrix[i][j]);
    }
    
    int sumRow[m], sumColumn[n], row=0, column=0, maxSumRow=0, maxSumCol=0;
    for(int i=0;i<m;i++) sumRow[i]=0;
    for(int i=0;i<n;i++) sumColumn[i]=0;
    // loại bỏ hàng
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sumRow[i]+=matrix[i][j];
            if(sumRow[i]>maxSumRow){
                maxSumRow=sumRow[i];
                row=i;
            }
        }
    }
    // loại bỏ cột
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==row) continue;
            sumColumn[j]+=matrix[i][j];
            if(sumColumn[j]>maxSumCol){
                maxSumCol=sumColumn[j];
                column=j;
            }
        }
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==row || j==column) continue;
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Test %d:\n",i+1);
        oneTime();
    }
}
