//
//  C05010_tong_cac_so_nguyen_to_thuoc_tam_giac_tren.c
//  codePTIT
//
//  Created by Chu Mai on 23/04/2022.
//

#include <stdio.h>

int matrix[50][50];
int prime[100000];

int main(){
    prime[0]=0;prime[1]=0;
    for(int i=2;i<100000;i++) prime[i]=1;
    for(int i=2;i<100000;i++){
        if(prime[i]==1){
            for(int j=i*2;j<100000;j=j+i){
                prime[j]=0;
            }
        }
    }
    
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    
    unsigned int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(prime[matrix[i][j]]==1) sum+=matrix[i][j];
        }
    }
    
    printf("%u\n",sum);
}
