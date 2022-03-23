//
//  liet_ke_so_phan_tu_xuat_hien_nhieu_hon_1_lan.c
//  codePTIT
//
//  Created by Chu Mai on 06/03/2022.
//

#include <stdio.h>
int a[100];
int main(){
    int n,max=-999999;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        if(a[i]>max) max=a[i];
    }
    int b[max+1],c[max+1];
    for(int i=0; i<=max; i++){
        b[i]=0;
        c[i]=0;
    }
    for(int i=0; i<n; i++){
        b[a[i]]++;
    }
    int count=0;
    for(int i=0;i<=max;i++){
        if(b[i]>1) count++;
    }
    if(count==0) printf("0");
    else{
        printf("%d\n",count);
        for(int i=0;i<n;i++){
            if(c[a[i]]==0 && b[a[i]]>1){
                printf("%d ",a[i]);
                c[a[i]]++;
            }
        }
    }
}
