//
//  C04027_sap_xep_chon.c
//  codePTIT
//
//  Created by Chu Mai on 03/05/2022.
//

#include <stdio.h>

void printArr(int a[100], int n, int step){
    printf("Buoc %d: ",step);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    
    int step=0;
    for(int i=0;i<n;i++){
        if(i!=0){
            step++;
            printArr(arr, n, step);
        }
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]) min=j;
        }
        int t=arr[i];
        arr[i]=arr[min];
        arr[min]=t;
    }
}
