//
//  so_chan_trong_day.c
//  codePTIT
//
//  Created by Chu Mai on 01/03/2022.
//

#include <stdio.h>

void oneTime(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        if(a%2==0) printf("%d ",a);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        oneTime();
        printf("\n");
    }
}
