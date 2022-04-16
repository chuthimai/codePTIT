//
//  C04045_day_uu_the.c
//  codePTIT
//
//  Created by Chu Mai on 15/04/2022.
//

#include <stdio.h>
#include <string.h>
int charToNumber(char a[6]){
    int n=0;
    for(int i=0; i<strlen(a);i++){
        n=n*10+(a[i]-'0');
    }
    return n;
}
void oneTime(char num[1500]){
    
    char nums[200][6]={"",""};// why does it need?
    
    int begin=0,end=0,count=0;
    
    for(int i=0;i<strlen(num);i++){
        if(num[i-1]==' ') begin=i;
        if(num[i+1]==' ' || num[i+1]=='\n'){
            end=i;
            for(int j=0;j<=end-begin;j++){
                nums[count][j]=num[j+begin];
            }
            count++;
        }
    }
    
    int arrNum[count],even=0,odd=0;
    for(int i=0;i<count;i++){
        arrNum[i]=charToNumber(nums[i]);
        if(arrNum[i]%2==0) even++;
        else odd++;
    }

    if(count%2==0 && even>odd) printf("YES\n");
    else if (count%2!=0 && odd>even) printf("YES\n");
    else if(count==0 && even==0 && odd==0) printf("");
    else printf("NO\n");
    
}

int main(){
    
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++) {
        char num[1500];
        fgets(num, 1500, stdin);
        oneTime(num);
    }
}
