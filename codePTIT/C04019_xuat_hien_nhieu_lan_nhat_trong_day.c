//
//  C04019_xuat_hien_nhieu_lan_nhat_trong_day.c
//  codePTIT
//
//  Created by Chu Mai on 03/04/2022.
//

#include <stdio.h>

int b[30005];

void oneTime(){
    int a[105];
    int n,max=-999999, m=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        if(a[i]>max) max=a[i];
    }
    
    for(int i=0; i<=max; i++){
        b[i]=0;
    }
    
    for(int i=0; i<n; i++){
        b[a[i]]++;
    }
    
    for(int i=0;i<=max;i++){
        if(b[i]>m) m=b[i];
    }
    
    for(int i=0;i<n;i++){
        if(b[a[i]]==m){
            printf("%d ",a[i]);
            b[a[i]]=0;
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        oneTime();
        printf("\n");
    }
}
