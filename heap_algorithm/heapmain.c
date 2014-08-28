#include "heap.h"
void print(int a[])
{
	int i;
	for(i=1;a[i]!='\0';i++)
		printf("%d ",a[i]);
	printf("\n");
}
int main()
{	
	int M = 5;
	int b[6] = {INT_MAX,4,3,2,7,1};
	print(a);
	downheap(1);
	print(a);
	remove_heap();
	print(a);
	insert(8);
	print(a);
	replace(1);
	print(a);
	heapsort(a,N);
	print(a);
	printf("\n");

	return 0;
}
