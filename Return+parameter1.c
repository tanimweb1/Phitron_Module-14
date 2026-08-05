#include<stdio.h>

// return + parameter

int sum(int a,int b){

int ans = a+b;
return ans;

}
int sub(int a,int b){

int ans = a-b;
return ans;

}

int mul(int a,int b){

int ans = a*b;
return ans;

}


int main(){    
int a,b;
scanf("%d%d",&a,&b);
int val = sum(a,b);
int val2 = sub(a,b);
int val3 = mul(a,b);
printf("%d %d %d",val,val2,val3);
return 0;
}













#include <stdio.h>

int sum(int x, int y)
{
   
    int ans = x + y;

    return ans;
}

int sub(int x, int y)
{
   
    int ans = x - y;

    return ans;
}


int main()
{

    int a, b;
    scanf("%d%d", &a, &b);

    int jog = sum(a, b);
    printf("%d\n", jog);
int biyog = sub(a,b);
printf("%d",biyog);
    return 0;
}
