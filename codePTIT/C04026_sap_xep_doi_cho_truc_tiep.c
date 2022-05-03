//
//  C04026_sap_xep_doi_cho_truc_tiep.c
//  codePTIT
//
//  Created by Chu Mai on 02/05/2022.
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
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int step=0;
    for(int i=0;i<n;i++){
        if(i!=0){
            step++;
            printArr(arr, n, step);
        }
        int min=i;
        for(int j=i;j<n;j++){
            if(arr[min]>arr[j]){
                int t=arr[min];
                arr[min]=arr[j];
                arr[j]=t;
            }
        }
        
    }
}
