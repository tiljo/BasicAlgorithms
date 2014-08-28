void heapsort(int a[], int N)
{
	int k,t;
	for(k = N/2; k>= 1; k--) downHeap(a,N,k);
	while (N > 1)
	{
		t = a[1]; a[1] = a[N]; a[N] = t;
		downHeap(a, --N, 1);
	}
}
