//
//  lon_nhat_va_lon_thu_hai.c
//  codePTIT
//
//  Created by Chu Mai on 06/03/2022.
//

#include <stdio.h>

int main(){
    int a[101];
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    int min=a[0],max=a[0],max2;
    for(int i=1;i<n;i++){
        if(a[i]<min) min=a[i];
        if(a[i]>max) max=a[i];
    }
    max2=min;
    for(int i=1;i<n;i++){
        if(a[i]>max2 && a[i]!=max){
            max2=a[i];
        }
    }
    printf("%d %d",max,max2);
}
