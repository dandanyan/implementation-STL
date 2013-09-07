#include <iostream>
#include "vector.h"

int main()
{
	std::cout<<"Hello!!!!!"<<std::endl;
	vector<int> vec(1521,5);
	vector<int> vec1;
//	vec1 = vec;
	std::cout<<"vectors back elememt is: "<<vec.back()<<std::endl;
	std::cout<<"vector is: "<<vec1.empty()<<std::endl;
	return 0;
}
