#include <iostream>
using namespace std;

void PromedioGoles (){
	int v[]={1,2,3},n[]={1,2,3};
	int i=0;
	 cout<<"digite el promedio de goles por partido \ndel equipo LOCAL y luego del VISITANTE\n";
                cin>>v[i]>>n[i];
}

void PartidosEntreEllos (){
	int gppvee[]={1,2,3},n[]={1,2,3},sumaMA[]={1,2,3},gpplee[]={1,2,3};
	int l=0,acumuladorMA=0,ganadorv=0;
	for(int j=0;j<5;j++){
       	cout<<"digite los goles del el LOCAL y luego del visitante \nen el partido #"<<l<<"entre ellos en sus ultimos ENCUENTROS  \n";
        cin>>gpplee[j]>>gppvee[j];
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
        l=l+1;
	}
}
			




int main (){
	PromedioGoles();
}

