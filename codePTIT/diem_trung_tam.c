//
//  diem_trung_tam.c
//  codePTIT
//
//  Created by Chu Mai on 04/03/2022.
//

#include <stdio.h>

int a[100001];
int b[100001];

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
    }
    
    int m=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(a[i]==b[j] || a[i]==a[i-1]) {
                m=a[i];
                break;
            }
        }
    }
    
    if(m==0) printf("No");
    else{
        int count=0;
        for(int i=0;i<n-1;i++){
            if(a[i]==m || b[i]==m) count++;
        }
        if(count==n-1) printf("Yes");
        else printf("No");
    }
    
}
