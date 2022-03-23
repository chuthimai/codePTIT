//
//  nho_nhat_va_nho_thu_hai.c
//  codePTIT
//
//  Created by Chu Mai on 02/03/2022.
//

#include <stdio.h>

int main(){
    int a[101];
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    int min=a[0],max=a[0],min2;
    for(int i=1;i<n;i++){
        if(a[i]<min) min=a[i];
        if(a[i]>max) max=a[i];
    }
    min2=max;
    for(int i=1;i<n;i++){
        if(a[i]<min2 && a[i]!=min){
            min2=a[i];
        }
    }
    printf("%d %d",min,min2);
}
