//
//  tam_giac_so_5.c
//  codePTIT
//
//  Created by Chu Mai on 27/03/2022.
//

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a=2;
    for(int i=0;i<n;i++){
        //for(int k=0;k<n-i-1;k++) printf("~");// tam giac so 6
        int count=2,m;
        for(int j=1;j<a+2*i;j++){
            if(count<(a+2*i)){
                printf("%d",count);
                count+=2;
            }
            else{
                if(count==a+2*i){
                    m=count;
                    count++;
                }
                printf("%d",m);
                m-=2;
            }
        }
        printf("\n");
    }
}
