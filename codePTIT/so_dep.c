//
//  so_dep.c
//  codePTIT
//
//  Created by Chu Mai on 01/03/2022.
//

#include <stdio.h>
#include <string.h>

void oneTime(){
    char a[19],b[17]="",b1[17]="";
    scanf("%s",&a);
    for(int i=0;i<strlen(a)-2;i++){
        b[i]=a[i+1];
    }
    for(int i=strlen(b)-1;i>=0;i--){
        b1[strlen(b)-1-i]=b[i];
    }
    if(2*(a[0]-48)==(a[strlen(a)-1]-48) || (a[0]-48)==2*(a[strlen(a)-1]-48)){
        if(strcmp(b, b1)==0) printf("YES\n");
        else printf("NO\n");
    }else printf("NO\n");
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        oneTime();
    }
}
