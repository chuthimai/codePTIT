//
//  dem_so_nguyen_to.c
//  codePTIT
//
//  Created by Chu Mai on 28/02/2022.
//

#include <stdio.h>

int sang[100001];

int check(int x){
    while(x!=0){
        if(sang[x%10]==0){
            return 0;
            break;
        }else x=x/10;
    }
    return 1;
}
void oneTime(){
    int a,b,count=0;
    scanf("%d%d",&a,&b);
    
    for(int i=a;i<=b;i++){
        if(sang[i]==1){
            if(check(i)==1) count++;
        }
    }
    printf("%d\n",count);
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<=100000;i++){
        sang[i]=1;
    }
    for(int i=2;i<=100000;i++){
        if(sang[i]==1){
            for(int j=i*2;j<=100000;j=j+i) sang[j]=0;
        }
    }
    for(int i=0;i<n;i++){
        oneTime();
    }
}
