#include "functions.h"
#include "myClass.h"
#include <iostream>
int main()
{
	////check compare
	//std::cout << "correct print is 1 -1 0" << std::endl;
	//std::cout << compare<double>(1.0, 2.5) << std::endl;
	//std::cout << compare<double>(4.5, 2.4) << std::endl;
	//std::cout << compare<double>(4.4, 4.4) << std::endl;
	////check bubbleSort
	//std::cout << "correct print is sorted array" << std::endl;
	//const int arr_size = 5;
	//double doubleArr[arr_size] = { 1000.0, 2.0, 3.4, 17.0, 50.0 };
	//bubbleSort<double>(doubleArr, arr_size);
	//for (int i = 0; i < arr_size; i++) {
	//	std::cout << doubleArr[i] << " ";
	//}
	//std::cout << std::endl;
	////check printArray
	//std::cout << "correct print is sorted array" << std::endl;
	//printArray<double>(doubleArr, arr_size);
	//std::cout << std::endl;

	/*
	* CHECK CHAR
	*/
	//check compare
	//std::cout << "correct print is 1 -1 0" << std::endl;
	//std::cout << compare<char>('1.0', '2.5') << std::endl;
	//std::cout << compare<char>('4.5', '2.4') << std::endl;
	//std::cout << compare<char>('4.4', '4.4') << std::endl;
	////check bubbleSort
	//std::cout << "correct print is sorted array" << std::endl;
	//const int arr_size = 5;
	//char charArr[arr_size] = { 'a', 'c', 'b', 'z', 'x' };
	//bubbleSort<char>(charArr, arr_size);
	//for (int i = 0; i < arr_size; i++) {
	//	std::cout << charArr[i] << " ";
	//}
	//std::cout << std::endl;
	////check printArray
	//std::cout << "correct print is sorted array" << std::endl;
	//printArray<char>(charArr, arr_size);
	//std::cout << std::endl;
	//system("pause");
	//return 1;
	/*
	* Check the new class we build
	*/
	myClass P = myClass(1);
	myClass P2 = myClass(7);
	myClass P3 = myClass(6);
	std::cout << compare<myClass>(P, P2) << std::endl;
	std::cout << compare<myClass>(P, P) << std::endl;
	std::cout << compare<myClass>(P2, P) << std::endl;
	std::cout << P << std::endl;
	myClass potatoArr[3] = { P,P2,P3 };
	bubbleSort<myClass>(potatoArr, 3);
	for (int i = 0; i < 3; i++)
	{
		std::cout << potatoArr[i] << " ";
	}
	std::cout << std::endl;
}