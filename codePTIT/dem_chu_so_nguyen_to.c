//
//  dem_chu_so_nguyen_to.c
//  codePTIT
//
//  Created by Chu Mai on 01/03/2022.
//

#include <stdio.h>
#include "string.h"

int main(){
    char n[19];
    scanf("%s",n);
    
    int sang[10];
    sang[0]=0;sang[1]=0;
    for(int i=2;i<10;i++){
        sang[i]=1;
    }
    for(int i=2;i<10;i++){
        if(sang[i]==1){
            for(int j=i*2;j<10;j=j+i) sang[j]=0;
        }
    }
    
    for(int i=0;i<strlen(n);i++){
        if(sang[(n[i]-48)]>=1){
            sang[(n[i]-48)]++;
        }
    }
    
    int count[10];
    for(int i=0;i<10;i++) count[i]=0;
    for(int i=0;i<strlen(n);i++){
        if(sang[(n[i]-48)]>1){
            if(count[(n[i]-48)]==0){
                printf("%d %d\n",n[i]-48,sang[(n[i]-48)]-1);
                count[(n[i]-48)]++;
            }
        }
    }
}
