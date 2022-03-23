//
//  chia_het_cho_2.c
//  codePTIT
//
//  Created by Chu Mai on 28/02/2022.
//

#include <stdio.h>
#define ui unsigned int
void oneTime(){
    ui n;
    scanf("%u",&n);
    int i=1;
    int count = 0;
    while (i<=n/i) {//chạy đến căn n
        if(n%i==0){
            if (i%2==0) count++;
            if (n/i%2==0) count++;
            if (n/i==i && i%2==0) count--;
        }
        i++;
    }
    printf("%d\n",count);
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        oneTime();
    }
}
