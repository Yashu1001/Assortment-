#include<stdio.h>
main(){
	int a[500],i,n;
	printf("ENTER SIZE=");
	scanf("%i",&n);
	
	printf("ENTER NUMBER= \n");
	
	for(i=0;i<n;i++){
		scanf("%i",&a[i]);
	}
	printf("NEGATIVE NUMBER= \n");
		for(i=0;i<n;i++){
			if(a[i]<0){
				printf("%i\n",a[i]);
			}
		}
	
	
}
