//
//  C07022_quan_ly_sinh_vien_2.c
//  codePTIT
//
//  Created by Chu Mai on 21/04/2022.
//

#include <stdio.h>
#include <string.h>

struct student{
    int MSV;
    char name[50];
    float pointA, pointB, pointC;
    int test;
};

struct student list[100];

void new(int n,int m){
    
    for(int i=n;i<n+m;i++){
        list[i].MSV=i;
        gets(list[i].name);
        gets(list[i].name);
        scanf("%f %f %f",&list[i].pointA,&list[i].pointB,&list[i].pointC);
    }
    
    printf("%d\n",m);
}

void update(int n){
    gets(list[n].name);
    gets(list[n].name);

    scanf("%f %f %f",&list[n].pointA,&list[n].pointB,&list[n].pointC);
    
    printf("%d\n",n);
}

void check(int n){
    
    for(int i=1;i<n;i++){
        if(list[i].pointA<list[i].pointB && list[i].pointB<list[i].pointC){
            list[i].test=1;
        }else list[i].test=0;
    }
    
    for(int i=1;i<n;i++){
        if(list[i].test==1)
            printf("%d %s %.1f %.1f %.1f\n", list[i].MSV, list[i].name, list[i].pointA, list[i].pointB, list[i].pointC);
    }
}
int main(){
    int count=1;
    int n;
    do{
        int a;
        scanf("%d",&a);
        n=a;
        if(n==1){
            int newStudents;
            scanf("%d",&newStudents);
            new(count, newStudents);
            count+=newStudents;
        }
        
        if(n==2){
            int updateCode;
            scanf("%d",&updateCode);
            update(updateCode);
        }
        
        if(n==3){
            check(count);
        }
        
    }while(n!=3);
}
