#include<stdio.h>
int main(void)
{
	int i, j, temp, index,min;
	int array[10]={10,9,8,7,6,5,4,3,2,1};
	
	for(i=0;i<10;i++)
	{
		min = 9999;
		for(j=i;j<10;j++)
		{
			if(array[j]<min)
			{
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	for(i=0;i<10;i++){
		printf("%d ",array[i]);
	}
	return 0;
}