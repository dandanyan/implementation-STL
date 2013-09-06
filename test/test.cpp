#include <iostream>
//#include <anonymous>
int main()
{
union 
{
	int a;
	float f;
};
	a = 10;
	std::cout<<"hello "<<a<<std::endl;
	return 0;
}
