#include "myClass.h"
myClass::myClass(int num) :_num(num)
{
}
myClass::~myClass()
{
}
bool myClass::operator==(const myClass& other)
{
	// TODO: insert return statement here
	if (this->_num == other._num)
		return true;
	return false;
}
bool myClass::operator<(const myClass& other)
{
	if (this->_num < other._num)
		return true;
	return false;
}
std::ostream& operator<<(std::ostream& os, const myClass& p)
{
	os << p._num;
	return os;
}