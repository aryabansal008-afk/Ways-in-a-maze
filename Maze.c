#include<stdio.h>
int maze(int n,int m){
    int rightways = 0;
    int downways = 0;
if(n==1 && m==1) return 1;
if (n==1) {rightways += maze(n,m-1);}
if(m==1) {downways += maze(n-1 ,m);}
if(n>1 && m>1) {
    rightways += maze(n,m-1);
    downways += maze(n-1,m);
}
    int totalways = rightways + downways;
    return totalways;
}
int main(){
    int n,m;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    printf("\nEnter the number of columns:");
    scanf("%d",&m);
int w = maze(n,m);
printf("%d", w);
    return 0;
}