//
//  so_thuan_nghich_le.c
//  codePTIT
//
//  Created by Chu Mai on 01/03/2022.
//

#include <stdio.h>
#include <string.h>

void check(){
    char n[19];
    int sum=0;
    scanf("%s",&n);
    char n1[19]="";
    for(int i=strlen(n)-1;i>=0;i-- ){
        n1[strlen(n)-1-i]=n[i];
    }
    if(strcmp(n, n1)==0){
        for (int i=0; i<strlen(n); i++) {
            if((n[i]-48)%2==0){
                sum=0;
                break;
            }
            else sum=sum+(n[i]-48);
        }
    }
    if(sum%2==1) printf("YES\n");
    if(sum%2==0) printf("NO\n");
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        check();
    }
}
