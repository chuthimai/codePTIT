//
//  tao_ma_tran_don_gian.c
//  codePTIT
//
//  Created by Chu Mai on 23/03/2022.
//

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=0;
        for(int j=1;j<=n;j++){
            if(j<=i) printf("%d ",a);
            else printf("%d ",++a);
        }
        printf("\n");
    }
}
