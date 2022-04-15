//
//  C06008_loai_cac_tu_trung_nhau.c
//  codePTIT
//
//  Created by Chu Mai on 10/04/2022.
//

#include <stdio.h>
#include <string.h>

char str1[101];
char words[100][10];

int main(){
    gets(str1);
    
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
    
    char mem[10]="";
    for(int i=0; i<count; i++){
        strcpy(mem, words[i]);
        for(int j=i+1; j<count; j++){
            if(strcmp(mem, words[j])==0) strcpy(words[j], " ");
        }
    }
    
    for(int i=0; i<count; i++){
        if(strcmp(" ", words[i])==0) continue;
        else printf("%s ",words[i]);
    }
}
