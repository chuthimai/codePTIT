//
//  dem_so_phan_tu_lon_hon_so_dung_truoc.c
//  codePTIT
//
//  Created by Chu Mai on 02/03/2022.
//

#include <stdio.h>

void oneTime(){
    int n,max=0;
    scanf("%d",&n);
    unsigned int a[51],count=0;
    for (int i=0;i<n;i++) {
        scanf("%u",&a[i]);
    }
    for (int i=0;i<n;i++) {
        if(a[i]>=max) {
            max=a[i];
            count++;
        }
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
