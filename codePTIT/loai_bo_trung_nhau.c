//
//  loai_bo_trung_nhau.c
//  codePTIT
//
//  Created by Chu Mai on 06/03/2022.
//

#include <stdio.h>
int a[100];

int main(){
    int n,max=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>max) max=a[i];
    }
    int b[max+1];
    for(int i=0;i<=max;i++){
        b[i]=0;
    }
    for(int i=0;i<n;i++){
        if(b[a[i]]==0){
            printf("%d ",a[i]);
            b[a[i]]++;
        }
    }
}
