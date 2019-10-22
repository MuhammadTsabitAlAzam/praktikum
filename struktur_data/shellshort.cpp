	// Shell Sort
	#include <iostream>
	#include <stdio.h>
	#define size 7  // definisi array 9

	using namespace std;
	int shell_sort(int []);

	int main()
	{
		int arr[size], i;
		cout << "Enter the elements to be sorted : " << endl;
		for(i = 0; i < size; i++)
		{
			cin>> arr[i];
		}
		shell_sort(arr);
		cout << "The array after sorting is : " << endl;
		for(i = 0; i < size; i++)
		cout << arr[i] << endl;
	}


	// fungsi shell sort
	int shell_sort(int array[])
	{
		int i = 0, j = 0, k = 0, mid = 0;
		for(k = size/2; k > 0; k /= 2)
		{
			for(j = k; j < size; j++)
			{
				for(i = j-k; i >= 0; i -= k)
				{cout<<array[i+k]<<" "<<array[i]<<"\n";
					if(array[i + k] >= array[i])
					{
						
					break;
					}
					else
					{ 
						mid = array[i];
						array[i] = array[i + k];
						array[i + k] = mid;
					}
				}
			}
		}
		return 0;
	}
