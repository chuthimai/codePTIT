//
//  dem_so_lan_xuat_hien_2.c
//  codePTIT
//
//  Created by Chu Mai on 06/03/2022.
//

#include <stdio.h>
#define MAX 100001
int b[MAX],c[MAX];
void oneTime(){
    int a[100];
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0; i<=MAX; i++){
        b[i]=0;
        c[i]=0;
    }
    for(int i=0; i<n; i++){
        b[a[i]]++;
    }
    for(int i=0;i<n;i++){
        if(c[a[i]]==0){
            printf("%d xuat hien %d lan\n",a[i],b[a[i]]);
            c[a[i]]++;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Test %d:\n",i+1);
        oneTime();
    }
}
