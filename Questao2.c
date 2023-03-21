#include <stdio.h>

int main()
{
   
int anterior1=0;
int anterior2=1;
int anterior3=1;

int fb=0;
int numero;
int cont=0;
int numeromax;
printf("digite o seu numero:");
scanf("%d",&numeromax);
 	while( cont <= numeromax)
	{ 
	anterior3=cont;
    numero=anterior1+anterior2;
	if(numero==numeromax){
	    printf("o seu numero é fibonacci! numero %d",numero);
	    fb=1;
	    break;
	}else{
	    cont=numero;
	    anterior1=anterior2;
	    anterior2=anterior3;
	    continue;
	}	
	
	} 
if(fb==0){
    printf("seu numero não é fibonacci");
}
 	return(numero); 
}
