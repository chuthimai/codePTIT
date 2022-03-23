//
//  cap_so.c
//  codePTIT
//
//  Created by Chu Mai on 04/03/2022.
//

#include <stdio.h>
#define ui unsigned int
int gcd(ui x,ui y){
    while (x!=y) {
        if(x>y) x=x-y;
        if(y>x) y=y-x;
    }
    return x;
}

void oneTime(){
    ui a,b,c,d;
    scanf("%u%u%u%u",&a,&b,&c,&d);
    if(gcd(a, b)==gcd(c, d)) printf("YES\n");
    else printf("NO\n");
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        oneTime();
    }
}
