//
//  so_uu_the_chan.c
//  codePTIT
//
//  Created by Chu Mai on 01/03/2022.
//

#include <stdio.h>
#include <string.h>

void oneTime(){
    char n[19];
    scanf("%s",&n);
    int even=0,odd=0;
    if ((n[strlen(n)-1]-48)%2==0) {
        for (int i=0; i<strlen(n); i++) {
            if((n[i]-48)%2==0) even++;
            else odd++;
        }
    }
    if(even>odd) printf("YES\n");
    else printf("NO\n");
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        oneTime();
    }
}
