//
//  C07015_tim_thu_khoa_ki_thi.c
//  codePTIT
//
//  Created by Chu Mai on 15/05/2022.
//

#include <stdio.h>
#include <string.h>

struct student{
    int code;
    char name[50];
    char date[20];
    float point1, point2, point3;
    float sum;
};

struct student arrStu[100];

void printWithoutNewline(char s[50]){
    for(int i=0;i<strlen(s)-1;i++){
        printf("%c",s[i]);
    }
    printf(" ");
}

int main(){
    int n;
    float max=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        arrStu[i].code=i+1;
        
        fgets(arrStu[i].name, 50, stdin);
        fgets(arrStu[i].name, 50, stdin);
        
        fgets(arrStu[i].date, 20, stdin);
        
        scanf("%f%f%f", &arrStu[i].point1, &arrStu[i].point2, &arrStu[i].point3);
        arrStu[i].sum=arrStu[i].point1+arrStu[i].point2+arrStu[i].point3;
        if(arrStu[i].sum>max) max=arrStu[i].sum;
    }
    
    for(int i=0;i<n;i++){
        if(arrStu[i].sum==max){
            printf("%d ",arrStu[i].code);
            printWithoutNewline(arrStu[i].name);
            printWithoutNewline(arrStu[i].date);
            printf("%.1f\n",arrStu[i].sum);
        }
    }
}
