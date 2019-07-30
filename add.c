#include<stdio.h>

// headers
int add_fun(int num1, int num2);
void add_ref(int * num1, int * num2, int * ans);

 
int main() {
 
	int num1 = 1;
	int num2 = 2;
	int ans = 0;

	//perform functional addition
	ans = add_fun(num1, num2);
	printf("add_fun: %i\n", ans);

	//perform reference addition
	ans = 0;
	add_ref(&num1, &num2, &ans);
	printf("add_ref: %i\n", ans);
	
	//safe exit
	return (0);
}

// functional programming 
int add_fun(int num1, int num2) 
{
   int num3;
   num3 = num1 + num2;
   return (num3);
}

// pass by reference
void add_ref(int * num1, int * num2, int * ans)
{
	*ans = *num1 + *num2;
}
