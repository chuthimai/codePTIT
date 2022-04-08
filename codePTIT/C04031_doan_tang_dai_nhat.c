//
//  C04031_doan_tang_dai_nhat.c
//  codePTIT
//
//  Created by Chu Mai on 08/04/2022.
//

#include <stdio.h>

void oneTime(){
    int n,arr[100],memory[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        memory[i]=0;
    }
    
    int m=1,max=0;
    memory[0]=1;
    for(int i=1;i<n;i++){
        
        if(arr[i]>arr[i-1]){
            m++;
            memory[i]=m;
        }else{
            m=1;
            memory[i]=m;
        }
        
        if(m>max) max=m;
    }
    printf("%d\n",max);
    for(int i=0;i<n;i++){
        if(memory[i]==max){
            for(int j=i-max+1;j<=i;j++) printf("%d ",arr[j]);
            printf("\n");
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Test %d:\n",i);
        oneTime();
    }
}
