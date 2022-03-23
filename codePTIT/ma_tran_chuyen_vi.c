//
//  ma_tran_chuyen_vi.c
//  codePTIT
//
//  Created by Chu Mai on 12/03/2022.
//

#include <stdio.h>

int main(){
    int n,m,a[10][10];
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) scanf("%d",&a[i][j]);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++) printf("%d ",a[j][i]);
        printf("\n");
    }
}
