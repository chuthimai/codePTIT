//
//  dich_phai.c
//  codePTIT
//
//  Created by Chu Mai on 04/03/2022.
//

#include <stdio.h>
int a[101];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int t;
    scanf("%d",&t);
    for(int i=n-t;i<n;i++) printf("%d ",a[i]);
    for(int i=0; i<n-t;i++){
        printf("%d ",a[i]);
    }
}
