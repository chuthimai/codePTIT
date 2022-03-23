//
//  so_nguyen_to_trong_day.c
//  codePTIT
//
//  Created by Chu Mai on 01/03/2022.
//

#include <stdio.h>

int sang[1001];

void oneTime(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        if(sang[a]==1) printf("%d ",a);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    
    sang[0]=0;sang[1]=0;
    for(int i=2;i<1001;i++){
        sang[i]=1;
    }
    for(int i=2;i<1001;i++){
        if(sang[i]==1){
            for(int j=i*2;j<1001;j=j+i) sang[j]=0;
        }
    }
    
    for (int i=0; i<n; i++) {
        oneTime();
        printf("\n");
    }
}
