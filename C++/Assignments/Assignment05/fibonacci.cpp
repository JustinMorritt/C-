//assignment 4 fibonacci By Justin Morritt
#include <iostream>

double fibonacci(unsigned term);

int main()
{
    std::cout << "Term\t\tValue\n"
              << "====\t\t=====\n";
    for(unsigned i = 0; i <= 50; ++i)
    {
        std::cout << i << "\t\t" << std::fixed << fibonacci(i) << std::endl;
    }          
    return 0;
}

double fibonacci(unsigned term)
{
	unsigned lastnum1 = 1;
	unsigned lastnum2 = 0;
	unsigned number = 0;
	for(unsigned i = 0; i <= term; ++i)
	{
		number =  lastnum1 + lastnum2;
		lastnum1 = lastnum2;
		lastnum2 = number;
	}
	return number;
}


