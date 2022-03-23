//
//  cap_so_nguyen_to.c
//  codePTIT
//
//  Created by Chu Mai on 23/03/2022.
//

#include <stdio.h>

int sang[10001];

void sangNguyenTo(){
    for(int i=2;i<10001;i++){
        sang[i]=1;
    }
    for(int i=2;i<10001;i++){
        if(sang[i]==1)
            for(int j=i*2;j<10001;j+=i) sang[j]=0;
    }
}

void oneTime(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        if(sang[i]==1 && sang[n-i]==1) printf("%d %d ",i,n-i);
    }
}

int main(){
    sangNguyenTo();
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        oneTime();
        printf("\n");
    }
}
