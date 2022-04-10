//
//  C06007_loai_bo_tu_trong_xau.c
//  codePTIT
//
//  Created by Chu Mai on 10/04/2022.
//

#include <stdio.h>
#include <string.h>

char str1[101];
char words[100][10];
char str2[10];

int main(){
    gets(str1);
    scanf("%s",str2);
    
    int begin=0,end=0,count=0;
    
    for(int i=0;i<strlen(str1);i++){
        if(str1[i-1]==' ') begin=i;
        if(str1[i+1]==' ' || str1[i+1]=='\0'){
            end=i;
            for(int j=0;j<=end-begin;j++){
                words[count][j]=str1[j+begin];
            }
            count++;
        }
    }
    
    for(int i=0;i<count;i++){
        if(strcmp(words[i], str2)==0) continue;
        else printf("%s ",words[i]);
    }
}
