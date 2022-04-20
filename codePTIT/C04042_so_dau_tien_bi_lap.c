//
//  C04042_so_dau_tien_bi_lap.c
//  codePTIT
//
//  Created by Chu Mai on 20/04/2022.
//

#include <stdio.h>

unsigned int arr[100000];

void oneTime(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%u",arr+i);
    }
    
    int count=0;
    unsigned int m=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                m=arr[i];
                count++;
                goto print;
            }
        }
    }
    
print:
    if(count==0)printf("NO\n");
    else printf("%u\n",m);
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        oneTime();
    }
}
