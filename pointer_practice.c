#include<stdio.h>
void swap_it(int *a,int *b,int x,int y){

    *a = y;
    *b= x;

}
int main(){
int a,b;
scanf("%d%d",&a,&b);
swap_it(&a,&b,a,b);
    printf("%d %d",a,b);
return 0;
}