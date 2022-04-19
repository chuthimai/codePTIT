//
//  C03019_so_dep_2.c
//  codePTIT
//
//  Created by Chu Mai on 19/04/2022.
//

#include <stdio.h>
#include <math.h>

int arr[11];

int main(){
    int n;
    scanf("%d",&n);
    
    arr[0]=0;
    arr[1]=0;
    arr[2]=1;
    for(int i=3;i<=10;i++){
        if(i%2==0) arr[i]=2*9*pow(10, (int)(i/2-2));
        else arr[i]=9*pow(10, (int)(i/2-1));
    }
    
    for(int i=0;i<n;i++){
        int m;
        scanf("%d",&m);
        printf("%d\n",arr[m]);
    }
}
