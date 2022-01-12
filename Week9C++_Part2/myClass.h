#pragma once
#include <string>
#include <iostream>
class myClass
{
public:
	int _num;
	myClass(int num);
	~myClass();
	bool operator==(const myClass& other);
	bool operator<(const myClass& other);
	friend std::ostream& operator<<(std::ostream& os, const myClass& p);
};