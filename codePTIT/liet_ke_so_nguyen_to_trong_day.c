//
//  liet_ke_so_nguyen_to_trong_day.c
//  codePTIT
//
//  Created by Chu Mai on 04/03/2022.
//

#include <stdio.h>

int sang[1001];

int main(){
    
    sang[0]=0;sang[1]=0;
    for(int i=2;i<1001;i++){
        sang[i]=1;
    }
    for(int i=2;i<1001;i++){
        if(sang[i]==1){
            for(int j=i*2;j<1001;j=j+i) sang[j]=0;
        }
    }
    int n,count=0;
    int a[101];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(sang[a[i]]==1) count++;
    }
    printf("%d ",count);
    for(int i=0;i<n;i++){
        if(sang[a[i]]==1) printf("%d ",a[i]);
    }
}
