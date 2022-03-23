//
//  dem_cac_so_nguyen_to_trong_day.c
//  codePTIT
//
//  Created by Chu Mai on 06/03/2022.
//

#include <stdio.h>
int sang[100001];
void oneTime(){
    int a[101];
    int n,max=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>max) max=a[i];
    }
    sang[0]=0;sang[1]=0;
    for(int i=2;i<=max;i++) sang[i]=1;
    for(int i=2;i<=max;i++){
        if(sang[i]==1){
            for(int j=i*2;j<=max;j=j+i) sang[j]=0;
        }
    }
    for(int i=0;i<n;i++){
        if(sang[a[i]]>=1) sang[a[i]]++;
    }
    for(int i=0;i<=max;i++){
        if(sang[i]>1){
            printf("%d xuat hien %d lan\n",i,sang[i]-1);
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
