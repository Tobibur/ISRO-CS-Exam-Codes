#include<stdio.h>
void swap(int *x,int *y);
main(){
	int i,j;
	i=6;
	j=9;
	swap(&i,&j);
}
void swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
