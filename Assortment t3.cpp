#include<stdio.h>
main(){
	int r,c,i,j;
	printf("ENTER ROW NUMBER=");
	scanf("%i",&r);
	printf("ENTER colum NUMBER=");
	scanf("%i",&c);
	int a[50][50],b[50][50],total[50][50];
	for(i=0;i<r;i++){
	   for(j=0;j<c;j++){
	   		printf("ENTER FIRST METRIX= ");	  
			scanf("%i",&a[i][j]);  		  	
	   }	   
	}	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("ENTER SECONED METRIX= ");
			scanf("%i",&b[i][j]);				
		}
	}
	printf("addition number= \n");		
	 	for(i=0;i<r;i++){
		   for(j=0;j<c;j++){
		   	total[i][j]=a[i][j]+b[i][j];
		        printf("%i ",total[i][j]);	 	
	 }	
	 printf("\n");
}

}
