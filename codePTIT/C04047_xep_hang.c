//
//  C04047_xep_hang.c
//  codePTIT
//
//  Created by Chu Mai on 20/04/2022.
//

#include <stdio.h>

int T[101];
int D[101];

void swap(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&T[i],&D[i]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(T[i]>T[j]){
                swap(T+i, T+j);
                swap(D+i, D+j);
            }
        }
    }
    
    unsigned int time=0;
    for(int i=0;i<n;i++){
        if(T[i]>time) time=T[i];
        time+=D[i];
    }
    
    printf("%u\n",time);
}
