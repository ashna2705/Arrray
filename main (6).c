#include<stdio.h>
void rev_array(int *a, int length)
{
	int *e1 = a;
	int *e4 = a+length-1;
	while(e1<e4)
	{
		int temp;
		temp= *e1;
		*e1 = *e4;
		*e4 = temp;
		e1++;
		e4--;
	}
}
int main()
{
	int arr[4]={1,2,3,4};
	printf("Array: ");
	for(int i=0; i<4; i++){
		printf("%d ", arr[i]);
	}
	rev_array(arr, 4);
		printf("\nReverse of array: ");
	for(int i=0; i<4; i++)
		printf("%d ", *&arr[i]);
	return 0;
}