//
//  gia_tri_trung_binh_cua_mot_mang.c
//  codePTIT
//
//  Created by Chu Mai on 20/03/2022.
//

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    float sum=0;
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        sum+=a;
    }
    printf("%.3f",sum/n);
}
