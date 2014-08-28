void upheap(int k)
{
	int v;
	v = a[k]; a[0]= 1000;
	while(a[k/2] <= v){
		a[k] = a[k/2]; k = k/2;
	}
	a[k] = v;
}
