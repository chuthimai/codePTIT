//
//  C06035_xau_doi_xung_1.c
//  codePTIT
//
//  Created by Chu Mai on 20/04/2022.
//

#include <stdio.h>
#include <string.h>

void checkOneTime(){
    char num[25],revNum[25];
    scanf("%s",&num);
    int len=strlen(num),count=0;
    
    for(int i=0;i<len;i++){
        revNum[i]=num[len-i-1];
    }
    
    for(int i=0;i<len;i++){
        if(revNum[i]!=num[i]) count++;
    }
    
    if(count==2 || (count==0 && len%2!=0)) printf("YES\n");
    else printf("NO\n");
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) checkOneTime();
}
