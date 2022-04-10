//
//  C03045_uoc_so_nguyen_to_lon_nhat.c
//  codePTIT
//
//  Created by Chu Mai on 09/04/2022.
//

#include <stdio.h>
#define ll long long

int main(){
    int count;
    scanf("%d",&count);
    for(int i=0; i<count; i++) {
        ll n;
        scanf("%lld",&n);
        
        ll d = 2;
        ll max = -1;
        while(n >= 1) {
            while (n % d == 0) {
                if (d > max) {
                    max = d;
                }
                n = n / d;
            }
            d = d + 1;
            if (d * d > n) {
                if (n > 1) {
                    if (n > max) {
                        max = n;
                    }
                }
                break;
            }
        }
        printf("%lld\n", max);
    }
}
