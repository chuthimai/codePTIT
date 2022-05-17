//
//  TST016_mang_ky_tu.c
//  codePTIT
//
//  Created by Chu Mai on 17/05/2022.
//

#include <stdio.h>
#include <string.h>

int main(){
    char input[100];
    scanf("%s",&input);
    int dem_mn=0, dem_dn=0, dem_nd=0, dem_nk=0, dem_mt=0, dem_dt=0, dem_mv=0, dem_dv=0;
    
    for(int i=0;i<strlen(input);i++){
        if(input[i]=='(') dem_mt++;
        if(input[i]==')') dem_dt++;
        if(input[i]=='[') dem_mv++;
        if(input[i]==']') dem_dv++;
        if(input[i]=='{') dem_mn++;
        if(input[i]=='}') dem_dn++;
        if(input[i]=='\'') dem_nd++;
        if(input[i]=='\"') dem_nk++;
    }
    
    if(dem_mt==dem_dt && dem_dn==dem_mn && dem_mv==dem_dv && dem_nd%2==0 && dem_nk%2==0) printf("1\n");
    else printf("0\n");
}
