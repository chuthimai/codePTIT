//
//  so_dung_dau.c
//  codePTIT
//
//  Created by Chu Mai on 07/03/2022.
//

#include <stdio.h>
int a[1000],b[1000];
void oneTime(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=-1;
    }
    int max=-1;
    for(int i=n-1;i>=0;i--){
        if(a[i]>max){
            max=a[i];
            b[i]=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(b[i]!=-1) printf("%d ",b[i]);
    }
}
int main(){
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        oneTime();
        printf("\n");
    }
}
