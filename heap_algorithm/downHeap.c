void downHeap(int a[],int N,int k)
{
	int j,v;
	v = a[k];
	while(k <= N/2){
		j = k+k;
		if (j < N && a[j] < a[j+1]) j++;
		if (v >= a[j]) break;
		a[k] = a[j]; k = j;
	}
	a[k] = v;
}
