void bubble(int a[], int N)
{
	int i,j,t;
	for(i=N; i>=1; i--)
		for(j=1; j<=i; j++)
			if(a[j-1] > a[j]){
				t =a[j-1]; a[j-1] = a[j]; a[j] = t;
			}
}
