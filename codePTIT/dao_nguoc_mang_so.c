//
//  dao_nguoc_mang_so.c
//  codePTIT
//
//  Created by Chu Mai on 02/03/2022.
//

#include <stdio.h>
int a[101],b[101];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
}
