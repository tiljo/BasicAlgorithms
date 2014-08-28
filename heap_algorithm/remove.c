int remove_heap(void)
{
	int v = a[1];
	a[1] = a[N--];
	downheap(1);
	return v;
}
