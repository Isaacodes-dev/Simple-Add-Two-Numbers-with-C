#include<stdio.h>

int add(int x, int y);

int main(){
	int a=5,b=7;
	printf("Answer is %d",add(a,b));
}

int add(int x, int y){
	return x+y;
}