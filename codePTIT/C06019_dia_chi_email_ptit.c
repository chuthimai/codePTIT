//
//  C06019_dia_chi_email_ptit.c
//  codePTIT
//
//  Created by Chu Mai on 29/04/2022.
//

#include <stdio.h>
#include <string.h>

int main(){
    char name[50],email[10][10]={""};
    gets(name);
    int m=0, begin=0, end=0;
    int trans='A'-'a';
    
    for(int i=0; i<strlen(name); i++){
        if(name[i]==' ' && name[i+1]!=' ') begin=i+1;
        if(name[i]!=' ' && (name[i+1]==' ' || name[i+1]=='\0')){
            end=i;
            
            for(int j=begin; j<=end; j++){
                if(name[j]>='A' && name[j]<='Z') name[j]-=trans;
                email[m][j-begin]=name[j];
            }
            m++;
        }
    }
    
    for(int i=0; i<m; i++){
        if(i==m-1) {
            printf("%s",email[i]);
            break;;
        }
        else printf("%c",email[i][0]);
    }
    
    printf("@ptit.edu.vn\n");
}
