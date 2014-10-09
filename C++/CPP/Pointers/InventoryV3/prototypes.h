//prototypes.h


#include <sstream>
#include <string>
#include <iostream>
#include <vector>


int askForInt(const std::string& question, int high = INT_MAX, int low = INT_MIN);
bool isEmpty(const std::vector<const std::string*>& in);
bool isFull(const std::vector<const std::string*>& in);
bool contains(const std::vector<const std::string*>& in, const std::string* pstr);
void display(const std::vector<const std::string*>& in);
void add(std::vector<const std::string*>& in, const std::string*pstr);
void remove(std::vector<const std::string*>& in, const std::string*pstr);