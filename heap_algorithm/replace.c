int replace(int v)
{
	a[0] = v;
	downheap(0);
	return a[0];
}
