//
//  liet_ke_n_so_fibonacci_dau_tien.c
//  codePTIT
//
//  Created by Chu Mai on 27/02/2022.
//

#include <stdio.h>
int a[31];

int main(){
    int n;
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(int i=2;i<n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    for (int i=0; i<n; i++) {
        printf("%d ",a[i]);
    }
}
