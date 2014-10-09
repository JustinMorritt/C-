//The prototypes for the functions used the factors program

#include <sstream>
#include <string>
#include <iostream>
#include <vector>

int askForInt(const std::string& question, int high = INT_MAX, int low = INT_MIN);
bool isPrime(unsigned value);
std::vector<unsigned> factors(unsigned value);
std::vector<unsigned> primeFactors(unsigned value);



