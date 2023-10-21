#include <stdio.h>


int linear_search (int array[], int size_of_array, int search_value);

void main (void)
{
	signed int index;
	int arr[9]={1,2,3,4,5,6,7,8,9};
	index=linear_search(arr,9,9);
	if(index==-99)
		printf("Element not found");
	else
		printf("The index is: %d",index);
	
}



int linear_search (int array[], int size_of_array, int search_value)
{
	signed int i=0,search_index;
	while (i<size_of_array)
	{
		if(array[i]==search_value)
		{
			search_index=i;
			break;
		}
		i++;
	}
	if(i==size_of_array)
		search_index=-99;
	return search_index;
}