#include <iostream>
using namespace std;

int main()
{
	int ascii[] = {112, 105, 99, 111, 67, 84, 70, 123, 103, 48, 48, 100, 95, 107, 49, 116, 116, 121, 33, 95, 110, 49, 99, 51, 95, 107, 49, 116, 116, 121, 33, 95, 100, 51, 100, 102, 100, 54, 100, 102, 125, 10};

	for(int i = 0; i < size(ascii); i++)
	{
		cout <<(char)ascii[i];
	}
	return 0;
}