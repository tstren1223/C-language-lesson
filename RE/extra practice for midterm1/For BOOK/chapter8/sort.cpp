void selectionsort(int list[],int len){
	int i,j,s;
	int temp;
	for(i=0;i<len-1;i++){
		s=i;
		for(j=i+1;j<len;j++)
			if(list[j]<list[s])
				s=j;
		temp=list[s];
		list[s]=list[i];
		list[i]=temp;
	}
}
