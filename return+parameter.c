#include<stdio.h>

int sum(int sum1,int sum2){

    int ans = sum1 + sum2;
return ans;
}


int main(){
int a,b;
scanf("%d %d",&a,&b);
    
int val = sum(a,b);
    
printf("%d",val);
return 0;
}