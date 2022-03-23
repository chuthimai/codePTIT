//
//  sap_xep_giam.c
//  codePTIT
//
//  Created by Chu Mai on 06/03/2022.
//

#include <stdio.h>
int a[101];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(a[i]>a[j]){
                int m=a[i];
                a[i]=a[j];
                a[j]=m;
            }
        }
    }
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}
