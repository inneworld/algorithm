#include<stdio.h> 
int number =10;
int data[10]= {10,9,8,7,6,5,4,3,2,1};

void show()
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d ",data[i]);
	}
}

void quicksort(int *data , int start, int end)
{
	if(start>=end)
	{
		return ;
	}
	
	int key = start , temp;
	int i = start + 1;int j = end;
	
	while(i <= j)
	{
		while(i <= end && data[i] <= data[key]) // 왼 쪽 부터 key값보다 큰 값을 찾기  
		{
			i++;
		}
		while(j> start && data[j] >= data[key]) //오른 쪽 부터 key값 보다 작은 값을 찾기  
		{
			j--;
		}
		if(i>j)  // 엇갈려 있다면 작은 값을 key값으로 
		{
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else // 엇갈려 있지 않다면 , 두 수 자리를 교체
		{
			temp = data[i] ;
			data[i] = data[j];
			data[j] = temp;
		}	 
	}
	
	quicksort(data, start, j-1);
	quicksort(data, j + 1 , end);
}

int main(void)
{
	quicksort(data, 0, number -1);
	show();
	
	return 0;
}