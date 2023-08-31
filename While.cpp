/*
#include<stdio.h>
#include<math.h>

int main ()
{
	
	int d=0;
	//scanf("%d", &d);

	while (d%2 ==1 || d<10)
	{
		//printf("Holaa");
		printf("%d \n",d+1);
		d=d+2;
	}
	
	

	return 0;
} */



#include<stdio.h>
int main (){
	int i=1;
	
	while (i==1){
		
		int opc;
		
		printf("Defina su numero");
	scanf("%d", &opc);
	
	switch(opc){
		
		case 1:
			printf("bienvenido");
			break;
		
	
		case 2:
		printf("1,2,3");
		break;
		
		case 3:
	   printf("3,2,1");
	   break;
	   
	   case 4: 
	   printf("4,5,6");
		break;	
	
		case 5:
		printf("6,5,4");
		break;
		
		case 6:
		printf("Hasta luego");
	    i=6;
		break;	
	}
		
		
		
	}
	
	printf("\a");
}
