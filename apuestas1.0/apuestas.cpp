#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main (){
	bool cierre=true,mg=true,siS=false;
	string local="s",visitante="s",gpp="si",got="hola",lov="no";
    float gecl=0,gecv=0,promgl=0,promgv=0;
    int resultado1=0,k=0,SI=0,acumuladorMA=0,l=1,resultado2=0,opcion=0,posicion=0,ganadorl=0,ganadorv=0;
    int v[]={1,2,3},n[]={1,2,3},gppl[]={1,2,3,4},gppv[]={1,2,3,4},rdp[]={1,2,3,4},sumaMA[]={1,2,3,4},gpplee[]={1,2,3,4,5},gppvee[]={1,2,3,4,5};//,gpplee[]={1,2,},gppvee[]={1,2};
	while(cierre!=false){//inicio de las opciones
    cout<<"digite el nombre del equipo local y luego el del visitante\n";
    cin>>local>>visitante;
    for (int i=0;i<=2;i++){
        switch(opcion=i){
            case 0://eleccion si habra un alta o una baja Over/Under
                cout<<"digite el promedio de goles por partido \ndel equipo LOCAL y luego del VISITANTE\n";
                cin>>v[i]>>n[i];
                resultado1=(v[i]+n[i])/2;
                for(int j=0;j<5;j++){//analisas los encuentros de ambos equipos en la historia
                	cout<<"digite los goles del el LOCAL y luego del visitante \nen el partido #"<<l<<"entre ellos en sus ultimos ENCUENTROS  \n";//toma los goles anotadoes en cada encuentro
                	cin>>gpplee[j]>>gppvee[j];
                		
					//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				
					sumaMA[j]=(gpplee[j]+gppvee[j])/2;//escoje el ganador de cada encuentro y su promedio de goles
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
                	l=l+1;
				}
					//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				l=1;
/*
<<<<<<< HEAD:apuestas1.0/apuestas.cpp
				
=======
>>>>>>> 98d58757755deef9f501d6b0606a2ac235861135:apuestas.cpp
*/
                if ((resultado1>=6)&&(acumuladorMA>=4)){//analisa los over y under
                    gpp="se puede apostar al over +4.5 [[]]SUERTE CRACK[[]]";
                }
                else{
                    for (int j=0;j<=3;j++){
                    cout<<"digita los goles totales de el partido #"<<l<<" \n que se jugaron en las ultimas fechas LIGA  de \n el LOCAL y el VISITANTE luego. \n";
                    cin>>gppl[j]>>gppv[j];
                    if ((gppl[j]<=7)&&(gppv[j]<=7)){
                    	resultado2=resultado2+1;
                    }
                       l=l+1;
     	            } 
                    if ((resultado2>=3)&&(acumuladorMA<=1)){
                    	gpp="se puede apostar al under -7.5 [[]]SUERTE CRACK[[]]";
					}
					else{
						gpp="no apueste ni por el under ni por el over [[]]SUERTE CRACK[[]]";
					}
                }
                resultado2=0;
            break;
            
            case 1 :
                cout<<"digite la cantidad de goles anotados en la \ncompetencia de el LOCAL y luego del VISITANTE. \n";
				cin>>v[i]>>n[i];
                cout<<"digite la cantidad de goles encontra de el \nequipo LOCAL y luego del VISITANTE\n";
                cin>>gecl>>gecv;
                cout<<"digite la posicion de el equipo LOCAL y el \nVISITANTE en la calsificacion general\n";
                k=i+1;
            	cin>>v[k]>>n[k];
                l=1;
                promgl=v[i]-gecl;
                promgv=n[i]-gecv;
				if (ganadorv>=4){//determina el maximo ganador entre estos
						mg=1;
						siS=1;
				}
				else{
					if(ganadorl>=4){
						mg=0;
						siS=1;	
					}
					else{
						siS=0;
					}
				cout<<ganadorv<<ganadorl;
				}
				if (v[k]>n[k]){//analisa las posiciones 
            		posicion=v[k]-n[k];
            		if (posicion>4){
						lov="apueste al hadicap +1.5 o +1 al LOCAL ";
					}
					else{
						lov="apueste al hadicap +1.5 o +1 al LOCAL\n o los dos equipos hacen gol [[]]SUERTE CRACK[[]]";
					}
				}
				else {
					posicion=n[k]-v[k];
					if (posicion>3){
						lov="no apueste al hadicap [[]]SUERTE CRACK[[]]";
					}
					else{
						lov="apueste al hadicap +1.5 o +1 al LOCAL [[]]SUERTE CRACK[[]]";
					}
				}
                if((promgl>=0)&&(promgv>=0)){ //analisa al posible gandor
                    if(( promgl>=(promgv*2))&&(mg=0)&&(siS=0)&&(posicion>=8)){
                        got="gana el equipo LOCAL [[]]SUERTE CRACK[[]]";
                    }
                    else {
                        if((promgv>=(promgl*2))&&(mg=1)&&(siS=1)&&(posicion>=8)){
						got="gana el equipo VISITANTE [[]]SUERTE CRACK[[]]";
                        }
                        else{
                        	if(SI>=4){
                        		got="los dos equipos hacen almenos un gol SI [[]]SUERTE CRACK[[]]";
							}
							else{
								got="apueste a que no va ha haber PRORROGA";	
							}
                        }
                    }
                }
                else{
                    if((promgv<0)&&(promgl>=0)){
                        if((promgl>=(-(promgv*2)))&&(mg=0)&&(siS=1)&&(posicion>=8)){
                            got="gana el equipo LOCAL [[]]SUERTE CRACK[[]]";
                        }
                        else{
                            if(SI>=4){
                        		got="los dos equipos hacen almenos un gol SI [[]]SUERTE CRACK[[]]";
							}
							else{
								got="apueste a que no va ha haber PRORROGA";	
							}
                        }  
                    }
                     else{
                        if((promgv>=(-(promgl*2)))&&(mg=1)&&(siS=1)&&(posicion>=8)){
                            got="gana el equipo VISITANTE [[]]SUERTE CRACK[[]]";
                        }
                        else{
                            if(SI>=4){
                        		got="los dos equipos hacen almenos un gol SI [[]]SUERTE CRACK[[]]";
							}
							else{
								got="apueste a que no va ha haber PRORROGA";	
							}
                        }
                    }
                }
            break;

            case 2:         
            	cout<<"\n A LOS MIEDOS SE LES CORTA LA CABEZA ";
			break;
			
			default: cout<<"adios espero que le sirva ;v";
			;
        }
    }
    //aqui impreime los resultados
    cout<<"\nentre el enfrentamiento de "<<local<<" vs "<<visitante<<"\n"<<gpp<<"\n"<<got<<"\n"<<lov;
	//cierre del bucle mas grande 
	
	
	cout<<"\ndigite si quiero continual con otro equipo o no\n (TRUE / FALSE) ";
    cin>>cierre;
	
	
	}

    getch ();
    return 0;
}
