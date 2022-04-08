//
//  C04036_doi_tien.c
//  codePTIT
//
//  Created by Chu Mai on 05/04/2022.
//

#include <stdio.h>

int money[10]={1,2,5,10,20,50,100,200,500,1000};

void oneTime(){
    int banknote[10]={0,0,0,0,0,0,0,0,0,0};
    int n,sum=0;
    scanf("%d",&n);
    
    for(int i=9;i>=0;i--){
        banknote[i]=n/money[i];
        if(banknote[i]!=0){
            n=n%money[i];
            sum=sum+banknote[i];
        }
    }
    printf("%d\n",sum);
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        oneTime();
    }
}
