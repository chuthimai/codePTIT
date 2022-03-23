//
//  dem_so_lan_xuat_hien_1.c
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
    for(int i=0;i<n;i++){
        if(c[a[i]]==0){
            printf("%d %d\n",a[i],b[a[i]]);
            c[a[i]]++;
        }
    }
}
