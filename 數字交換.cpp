#include <stdio.h>
int inte_switch(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp; 
}
int main() {
    int a, b;
    printf("請輸入整數A與B (A,B): ");
    scanf("(%d,%d)", &a, &b);
    inte_switch(&a,&b);
    printf("(%d,%d)",a,b);
    return 0;
}

