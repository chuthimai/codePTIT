//
//  so_chan_dac_biet.c
//  codePTIT
//
//  Created by Chu Mai on 27/02/2022.
//

#include <stdio.h>
#include <string.h>

void check(char a[]){
    for(int i=0;i<strlen(a);i++){
        int x=a[i]-48;
        if(x%2!=0) {
            printf("NO\n");
            break;
        }
        if(i==strlen(a)-1 && x%2==0){
            printf("YES\n");
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char a[19];
        scanf("%s",&a);
        check(a);
    }
}
