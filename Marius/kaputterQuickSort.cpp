int partition(int a[], int p, int r){
	int pivot = a[r];		//pivot
	int i = p -1;
	for(int y = p; y < r; y++){
		if(a[y] <= pivot){
			i++;
			//swap a[i] and a[y]
			a[i] = a[i] + a[y];
			a[y] = a[i] - a[y];
			a[i] = a[i] - a[y];
		}
	}
	//swap a[i+1] and a[r]
	int c = a[r];
	a[r] = a[i+1];
	a[i+1] = c;
	return i+1;
}

void quicksort(int a[], int p, int r){
	if(p < r){
		int q = partition(a,p,r);
		quicksort(a, p, q-1);
		quicksort(a, q+1, r);
	}
}
//Hi lukas <3
