//
//  C04025_sap_xep_chan_le.c
//  codePTIT
//
//  Created by Chu Mai on 05/04/2022.
//

#include <stdio.h>

int even[100],odd[100];

void sort(int arr[],int count){
    for(int i=0;i<count;i++){
        for(int j=i+1;j<count;j++){
            if(arr[i]>arr[j]){
                int n=arr[i];
                arr[i]=arr[j];
                arr[j]=n;
            }
        }
    }
}

void print(int arr[],int count){
    for(int i=0;i<count;i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int countEven=0, countOdd=0;
    
    for(int i=0;i<n;i++){
        int m;
        scanf("%d",&m);
        if(m%2==0){
            even[countEven]=m;
            countEven++;
        }else{
            odd[countOdd]=m;
            countOdd++;
        }
    }
    
    sort(even,countEven);
    sort(odd, countOdd);
    
    print(even, countEven);
    print(odd, countOdd);
}
