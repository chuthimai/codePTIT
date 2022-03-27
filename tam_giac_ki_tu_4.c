//
//  tam_giac_ki_tu_4.c
//  codePTIT
//
//  Created by Chu Mai on 27/03/2022.
//

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a=1;
    for(int i=0;i<n;i++){
        int count=1,m;
        for(int j=0;j<a+2*i;j++){
            if(count<(a+2*i)){
                printf("%c",count+63);
                count+=2;
            }
            else{
                if(count==a+2*i){
                    m=count;
                    count++;
                }
                printf("%c",m+63);
                m-=2;
            }
        }
        printf("\n");
    }
}
