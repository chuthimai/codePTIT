//
//  dem_so_tu_trong_xau.c
//  codePTIT
//
//  Created by Chu Mai on 12/03/2022.
//

#include <stdio.h>
#include <string.h>
void oneTime(int i){
    char str[201];
    if(i==0) gets(str);
    gets(str);
    int count=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]!=' '){
            if(str[i+1]==' ' || str[i+1]=='\0') count++;
        }
    }
    printf("%d\n",count);
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        oneTime(i);
    }
}
