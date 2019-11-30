#include <iostream>
using namespace std;

void PartidosEntreEllos (){//toma las estadisticas de los partidos jugados entre ellos
	int gpplee[]={1,2,3,4,5},gppvee[]={1,2,3,4,5},l=1;
	 for(int j=0;j<5;j++){
		cout<<"digite los goles del el LOCAL y luego del visitante \nen el partido #"<<l<<" entre ellos en sus ultimos ENCUENTROS  \n";//toma los goles anotadoes en cada encuentro
    	cin>>gpplee[j]>>gppvee[j];
    	l=l+1;
		}
}


