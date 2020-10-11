#include<stdio.h>
void print(int* ,int);
void sort(int*, int);
int swap(int*, int*);
int main()
{
	int count,i,num[99];
	printf("Enter count: ");
	scanf_s("%d",&count);
	for (i=0;i<count;i++) 
	{
		printf("Enter number[%d]:", i);
		scanf_s("%d",&num[i]);
	}
	sort(num,count);
	print(num,count);
	return 0;
}
void print(int* x, int y) {
	printf("ordered by bubblesort :");
	for (int i = 0;i <= y - 1;i++)
	{
		printf("%d ",x[i]);
	}
}
int swap(int *x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	return *x, *y;
}
//swap value with bubblesort yeaaa
void sort(int *x, int y) {
	for (int i=y-1;i>0;i--) {
		for (int j = 0;j < i;j++) {
			if (x[j] > x[j + 1]) swap(&x[j], &x[j+1]);
		}
	}
}