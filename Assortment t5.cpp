#include<stdio.h>
main(){
	int r,c;
	int a[r];;
	printf("ENTER SIZE=");
	scanf("%i",&c);
	
	printf("ENTER ELEMENTS= \n");
	
	for(r=0;r<c;r++){
		scanf("%i",&a[r]);
		
	}
	printf("ELEMENTS NUMBER =");
	
	for(r=0;r<c;r++){
		if(a[r]%2==0){
			printf("%i\n",a[r]);
		}
	}
	
	
	
}
