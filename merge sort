#include<stdio.h>

int number = 8; 
int sorted[8]; // merge sort는 정렬된 수를 담을 배열이 필요하기 때문에 전역변수로 만들어 주어서 메모리 손실을 최소화 한다.
 
void merge (int a[],int m ,  int middle , int n) 
{
	int i = m;
	int j = middle + 1;
	int k = m;
	int t;
	//작은 순서대로 배열에 삽입.
	while(i<=middle && j<=n) 
	{
		if(a[i]<= a[j])
		{
			sorted[k] = a[i];
			i++;
		}
		else{
			sorted[k] = a[j];
			j++;
		}
		k++;
	}
	// 남은 데이터도 삽입 만약 j가 먼저 정렬되면 , i도 정렬되게 만들어 줘야 함
	if(i>middle) 
	{
		for(t = j; t<=n;t++)
		{
			sorted[k] = a[t];
			k++;
		}
	}
	else{
		for(t = i; t<=middle; t++)
		{
			sorted[k] = a[t];
			k++;
		}
	}
	//정렬된 배열을 삽입 
	for(t = m; t<=n; t++) 
	{
		a[t] = sorted[t];
	}
}

void mergesort(int a[], int m ,int n)
{
	//크기가 1보다 큰 경우
	if(m<n) 
	{
		int middle = (m+n)/2;
		mergesort(a,m,middle);
		mergesort(a, middle+1, n);
		merge(a,m,middle,n);
	}
}
int main(void)
{

	int array[8] = {8,7,6,5,4,3,2,1};
	mergesort(array, 0, number-1);
	int i;
	for(i= 0;i < number; i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}