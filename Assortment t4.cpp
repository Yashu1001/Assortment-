#include<stdio.h>
main(){
	int a[3][3]={10,20,30,40,50,60,70,80,90};
	int r,c,sum=0;
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			if(r==c){
				sum=sum+a[r][c];
			}
		}
		printf("%i",sum);
		printf("\n");
	}	
}
