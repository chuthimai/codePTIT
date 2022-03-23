//
//  hinh_vuong.c
//  codePTIT
//
//  Created by Chu Mai on 04/03/2022.
//

#include <stdio.h>

int abs(int x){
    if(x<0) return -x;
    else return x;
}

void oneTime(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int m=abs(b-d);
    int n=abs(a-c);
    if(m==n) printf("YES\n");
    else printf("NO\n");
}
 
int main(){
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        oneTime();
    }
}
