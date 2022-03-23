//
//  dem_ky_tu.c
//  codePTIT
//
//  Created by Chu Mai on 12/03/2022.
//

#include <stdio.h>
#include <string.h>

int main(){
    char a[1000];
    gets(a);
    int ch=0, num=0, other=0;
    for(int i=0;i<strlen(a);i++){
        if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z')) ch++;
        else if(a[i]>='0' && a[i]<='9') num++;
        else other++;
    }
    printf("%d %d %d\n",ch,num,other);
}
