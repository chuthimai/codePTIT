//
//  so_cap_bang_nhau_trong_day.c
//  codePTIT
//
//  Created by Chu Mai on 04/03/2022.
//

#include <stdio.h>
  
void oneTime(){
    int n,a[31],count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==a[i-1]) count++;
    }
    printf("%d\n",count);
}
int main(){
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        oneTime();
    }
}
