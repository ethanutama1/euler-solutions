#include <iostream>

int sum,x = 1000;
int main()

{
	while (x--)sum+=x*!((x%3)&&(x%5));
	std::cout<< sum;
}
