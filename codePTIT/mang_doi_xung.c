//
//  mang_doi_xung.c
//  codePTIT
//
//  Created by Chu Mai on 02/03/2022.
//

#include <stdio.h>
#define ll long long

void oneTime(){
    int n;
    ll a[101],b[101];
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%lld",&a[i]);
    }
    for(int i=0;i<n;i++){
        b[i]=a[n-1-i];
    }
    int c=0;
    for (int i=0; i<n; i++) {
        if(a[i]==b[i]) c++;
        else {
            c=0;
            break;
        }
    }
    if (c==0) {
        printf("NO\n");
    }else printf("YES\n");
}

int main(){
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        oneTime();
    }
}
