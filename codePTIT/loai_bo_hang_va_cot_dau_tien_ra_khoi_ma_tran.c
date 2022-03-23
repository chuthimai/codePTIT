//
//  loai_bo_hang_va_cot_dau_tien_ra_khoi_ma_tran.c
//  codePTIT
//
//  Created by Chu Mai on 12/03/2022.
//

#include <stdio.h>

void oneTime(){
    int n,m,a[10][10];
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) scanf("%d",&a[i][j]);
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++) printf("%d ",a[i][j]);
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Test %d:\n",i);
        oneTime();
    }
}
