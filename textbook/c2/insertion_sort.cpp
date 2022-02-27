#include <iostream>
#include <algorithm>

void insSort_rec(int (&arr)[], int n);

int main()
{
	int arr[] = {3, 32, 43, 22, 32, 50, 90, 13};
	int arr_size = sizeof(arr)/sizeof(int);
	
	for (int i = 0; i < arr_size - 1; i++)
	{
		std::cout << arr[i] << ", ";
	}
	
	std::cout << arr[arr_size-1];
	std::cout << "\n" << "\n";
	
	
}


/* insSort_rec
	Insertion sort that works recursively and in-place.
	Takes an array reference and an integer representing array size.
*/
void insSort_rec(int (&arr)[], int n)
{
	if (n>1)
	{
		insSort_rec(arr, n-1);
	}
	
	int key = arr[n-1];
	int idx = n-2;
	while (idx >= 0 && arr[idx] > key)
	{
		arr[idx+1] = arr[idx];
		idx--;
	}
	arr[idx+1] = key;
	
	return;
}
