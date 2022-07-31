#include<iostream>
using namespace std;
int main()
{
	int array[7];
	int curr=2 , max ,pre = 0;

	for (int  i = 0; i < 7; i++)
	{
		cin >> array[i];
	}
	
	pre = array[1] - array[0];
	max = 1;
	
	for (int i = 2  ; i < 7; i++)
	{
		if (pre == array[i] - array[i - 1])
		{
			curr++;

			if ( curr > max)
			{
				max = curr;
			}	
	    }
		else
		{
			pre = array[i] - array[i - 1];
			curr = 2;
			cout <<"the else curr" << curr << endl;
		}
	}

	cout << "the maximum subarray is :" << max;
}
