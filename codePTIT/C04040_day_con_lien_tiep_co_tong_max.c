//
//  C04040_day_con_lien_tiep_co_tong_max.c
//  codePTIT
//
//  Created by Chu Mai on 09/04/2022.
//

#include <stdio.h>
#define ll long long
ll arr[100005],sum[100005];

void oneTime(){
    int n;
    scanf("%d",&n);
    arr[0]=0;
    for(int i=1;i<=n;i++){
        scanf("%lld",&arr[i]);
    }
    
    sum[0]=0;
    for(int i=1;i<=n;i++){
        sum[i]=sum[i-1]+arr[i];
    }
    
    ll sumMin=sum[0],sumMax=sum[1];
    for(int i=1;i<=n;i++){
        if((sum[i]-sumMin)>sumMax) sumMax=sum[i]-sumMin;
        if(sum[i]<sumMin) sumMin=sum[i];
    }
    printf("%lld\n",sumMax);
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) oneTime();
}
