# include <stdio.h>

int binary(int array[], int size_of_array, int search_value);

void main (void)
{
	signed int index;
	int arr[9]={1,2,3,4,5,6,7,8,9};
	index = binary(arr,9,9);
	if(index==-99)
	{printf("Index not found");}
	else
	printf("index: %d",index);
}
int binary(int array[], int size_of_array, int search_value)
{
	signed int ReturnValue = -99, start, end, mid;
	start = 0;
	end = size_of_array - 1;
	while(start < end)
	{
		if(array[start]==search_value)
			return start;
		else if(array[end]==search_value)
			{
				ReturnValue = size_of_array;
				break;
			}
			
		mid = (start + end) / 2;
		if(array[mid] < search_value)
			start = mid + 1;
		else if(array[mid] > search_value)
			end = mid - 1;
		else
		{
			ReturnValue = mid;
			break;
		}
	}
	return ReturnValue;
	
}