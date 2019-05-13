// ConsoleApplication6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char greeting[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };

	cout << "Greeting message: ";
	cout << greeting << endl;

	return 0;
}