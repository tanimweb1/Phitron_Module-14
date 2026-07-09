// doubling a number with return + parameter

#include<stdio.h>
int double_it(int num){

num *=2;
return num;

}
int main(){

int n;
scanf("%d",&n);

int dbl=double_it(n);
printf("%d",dbl);
    return 0;
}