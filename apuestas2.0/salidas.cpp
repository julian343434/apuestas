#include <iostream>
using namespace std;
void PartidosEntreEllos ();
void promedioMejorEquipo (gpplee[j],gppvee[j]){
	int  acumuladorMA=0,ganadorl=0,ganadorv=0,SI=0,sumaMA[j]={1,2,3,4,5};
	for(j=0;j<5;j++){//escoje el ganador de cada encuentro y su promedio de goles
		 sumaMA[j]=gpplee[j]+gppvee[j];
	                        if(sumaMA[j]>=6){
	                                acumuladorMA=acumuladorMA+1;
	                        }
	                                        if(gpplee[j]>(gppvee[j])){
	                                                ganadorl=ganadorl+1;
	                                        }
	                                        else{
	                                                ganadorv=ganadorv+1;
	                                        }
	                                        if((gpplee[j]>=1)&&(gppvee[j]>=1)){
	                                                SI=SI+1;
	                        				}
	}
	return (ganadorl,ganadorv,SI,acumuladorMA);
}
