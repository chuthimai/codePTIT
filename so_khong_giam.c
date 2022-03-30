//
//  so_khong_giam.c
//  codePTIT
//
//  Created by Chu Mai on 30/03/2022.
//

#include <stdio.h>
 
int a[10];

void print(int b[],int n){
    for(int i=1;i<=n;i++) printf("%d",a[i]);
}

void Sinh(int b[],int n){
    int i=n;//Dùng để quay lại chữ số cuối cùng để xét ngược từ dưới lên
    while (i>0 && b[i]==9) i--;// dùng để tiến sang bên trái khi các số bên phải đều là 9
    if(i>0){
        b[i]++;
        for(int j=i+1;j<=n;j++){
            b[j]=b[i];// để có được số bằng chữ số phía trước rồi lại đưa chỉ số sau cùng là i để xét tiếp
        }
    }
}

void oneTime(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=9;i++) a[i]=1;
    print(a, n);
    while(a[1]!=9){
        printf(" ");
        Sinh(a, n);
        print(a, n);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        oneTime();
        printf("\n");
    }
}
