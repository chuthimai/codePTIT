//
//  C04028_sap_xep_chen.c
//  codePTIT
//
//  Created by Chu Mai on 03/05/2022.
//

#include <stdio.h>

int arr[100],arrMem[100];

void printArr(int n, int step){
    printf("Buoc %d: ",step);
    for(int i=0;i<n;i++){
        if(arrMem[i]!=-1) printf("%d ",arrMem[i]);
    }
    printf("\n");
}

void insert(int position, int num, int n){
    int m=arrMem[0];
    for(int i=0;i<n;i++){
        if(i>position) {
            // đổi chỗ để giữ đc giá trị đã lưu của m
            int t=arrMem[i];
            arrMem[i]=m;
            m=t;
            continue;
        }
        else if(i==position) {
            m=arrMem[i];// để giữ giá trị trước khi chèn vào
            arrMem[i]=num;
            continue;
        }
        m=arrMem[i];
    }
}

int main(){
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++) {
        scanf("%d",arr+i);
        arrMem[i]=-1;
    }
    
    int step=0;
    for(int i=0;i<n;i++){
        if(i==0){
            arrMem[i]=arr[i];
            printArr(n, step);
            step++;
            continue;
        }
        
        int m=0;
        for(int j=0;j<n;j++){
            if(arr[i]<arrMem[0]){
                m=-1;
                break;
            }
            if(arr[i]>=arrMem[j] && arrMem[j]!=-1) m=j;
        }
        insert(m+1, arr[i], n);
        printArr(n, step);
        step++;
    }
    
}
