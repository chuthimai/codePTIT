//
//  C07012_sap_xep_danh_sach_mat_hang.c
//  codePTIT
//
//  Created by Chu Mai on 15/05/2022.
//

#include <stdio.h>
#include <string.h>

struct MatHang{
    int code;
    char name[100];
    char type[100];
    float purchasePrice;
    float salePrice;
    float profit;
};

struct MatHang arrGood[100];

int main(){
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        arrGood[i].code=i+1;
        
        fgets(arrGood[i].name, 100, stdin);
        fgets(arrGood[i].name, 100, stdin);
        
        fgets(arrGood[i].type, 100, stdin);
        
        scanf("%f %f",&arrGood[i].purchasePrice,&arrGood[i].salePrice);
        
        arrGood[i].profit=arrGood[i].salePrice-arrGood[i].purchasePrice;
    }
    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arrGood[i].profit<arrGood[j].profit){
                struct MatHang t=arrGood[i];
                arrGood[i]=arrGood[j];
                arrGood[j]=t;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        printf("%d ",arrGood[i].code);
        for(int j=0;j<strlen(arrGood[i].name)-1;j++) printf("%c",arrGood[i].name[j]);
        printf(" ");
        for(int j=0;j<strlen(arrGood[i].type)-1;j++) printf("%c",arrGood[i].type[j]);
        printf(" ");
        printf("%.2f\n",arrGood[i].profit);
    }
}
