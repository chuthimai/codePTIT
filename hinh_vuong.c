//
//  hinh_vuong.c
//  codePTIT
//
//  Created by Chu Mai on 22/03/2022.
//

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int count=0,a=n;
        for(int j=0;j<2*n-1;j++){
            if(count>=2*n-1-i*2){
                printf("%d",a+1);
                a++;
                continue;
            }
            if(a==n-i){
                printf("%d",a);
                count++;
            }
            else if(a>n-i){
                printf("%d",a);
                a--;
            }
        }
        printf("\n");
    }
    for(int i=n-2;i>=0;i--){
        int count=0,a=n;
        for(int j=0;j<2*n-1;j++){
            if(count>=2*n-1-i*2){
                printf("%d",a+1);
                a++;
                continue;
            }
            if(a==n-i){
                printf("%d",a);
                count++;
            }
            else if(a>n-i){
                printf("%d",a);
                a--;
            }
        }
        printf("\n");
    }
}
