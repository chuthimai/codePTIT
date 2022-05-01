//
//  C05026_tim_hang_nhieu_so_nguyen_to_nhat.c
//  codePTIT
//
//  Created by Chu Mai on 01/05/2022.
//

#include <stdio.h>

int prime[1001];
int matrix[30][30];
int arr[30];

int main(){
    prime[0]=0; prime[1]=0;
    for(int i=2;i<=1000;i++) prime[i]=1;
    for(int i=2;i<=1000;i++){
        if(prime[i]==1){
            for(int j=i*2;j<=1000;j=j+i) prime[j]=0;
        }
    }
    
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
            if(prime[matrix[i][j]]==1) arr[i]++;
        }
    }
    
    int max=0, m=0;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
            m=i;
        }
    }
    
    printf("%d\n",m+1);
    
    for(int i=0;i<n;i++){
        if(prime[matrix[m][i]]==1) printf("%d ",matrix[m][i]);
    }
}
