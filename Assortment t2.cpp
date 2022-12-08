#include<stdio.h>
main(){
	int a[100],size,i;
	int large1,large2;
	printf("MAX SIZE OF ARRAY=");
	scanf("%i",&size);
	
	printf("Enter Number =");
	for(i=0;i<size;i++){
		scanf("%i",&
		a[i]);
	}
     	for(i=0;i<size;i++){
     		if(a[i]>large1){
     			
     			large2=large1;
     			large1=a[i];
     		
			 }
			else if(a[i]>large2 && a[i]<large1){
				large2=a[i];
			}
		 } 
	printf("ENTER SECONED LAST LARGE NUMBER= %i",large2);
	
}
