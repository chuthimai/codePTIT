//
//  C04030_tron_2_day_va_sap_xep.c
//  codePTIT
//
//  Created by Chu Mai on 15/04/2022.
//

#include <stdio.h>

int a[100],b[100];

void oneTime(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(b[i]<b[j]){
                int t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        printf("%d %d ",a[i],b[i]);
    }
    printf("\n");
    
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Test %d:\n",i);
        oneTime();
    }
}
