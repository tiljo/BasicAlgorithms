void insertion(int a[],int N)
{
	int i,j,v;
	for(i=1; i<=N;i++){
		v = a[i]; j=i;
		while (a[j-1] > v){
			a[j] = a[j-1]; j--;
		}
		a[j] = v ;
	}
}
