//
//  tam_giac_so_8.c
//  codePTIT
//
//  Created by Chu Mai on 27/03/2022.
//

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int m=1;
    for(int i=1;i<=n;i++){
        if(i%2==0) m=m+i-1;// plus i to have largest number of even line; -1 because befor that m was plused 1
        int n=m;
        for(int j=0;j<i;j++){
            if(i%2==1){
                printf("%d ",m);
                m++;
            }else{
                printf("%d ",n);
                n--;
            }
        }
        if(i%2==0)m++;// plus 1 to have lowest number of odd line
        printf("\n");
    }
}
