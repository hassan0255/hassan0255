#include<iostream>
using namespace std;
int main()
{
	int array[8];
	int pre=1;
	for (int  i = 0; i < 8; i++)
	{
		cin >> array[i];
	}

	for (int i = 0; i < 8; i++)
	{
		if (i == 0)
		{
			if (array[i] > array[i + 1])
			{
				cout << "its a recod breaking day:" << array[i] << endl;
			}
			pre = array[i];
			
		}
		else
		{
			if (array[i] > pre && array[i] > array[i + 1])
			{
				cout << "its a recod breaking day:" << array[i] << endl;
			}
			pre = array[i];
		}
	}
	
	
}
