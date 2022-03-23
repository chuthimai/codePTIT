//
//  dich_trai.c
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
    for(int i=t; i<n;i++){
        printf("%d ",a[i]);
    }
    for(int i=0;i<t;i++) printf("%d ",a[i]);
}
