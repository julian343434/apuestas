#include <iostream>
#include <string>
using namespace std;
int main (){
    string local="a",visitante="s",gpp="si";
    int resultado1=0,l=1,resultado2=0,opcion=0;
    int v[]={1,2,3,4},n[]={1,2,3,4},gppl[]={1,2,3,4},gppv[]={1,2,3,4};

    cout<<"digite el nombre del equipo local y luego el del visitante\n";
    cin>>local>>visitante;
    for (int i=0;i<=3;i++){
        switch(opcion=i){
            case 0:
                cout<<"digite el promedio de goles por partido \n del equipo LOCAL y luego del VISITANTE\n";
                cin>>v[i]>>n[i];
                resultado1=(v[i]+n[i])/2;
                if (resultado1>=6){
                    gpp="se puede apostar al over +4.5 [[]]SUERTE CRACK[[]]";
                }
                else{
                    for (int j=0;j<=3;j++){
                    cout<<"digita los goles totales de el partido #"<<l<<" \n que se jugaron en las ultimas fechas  de \n el LOCAL y el VISITANTE luego. \n";
                    cin>>gppl[j]>>gppv[j];
                    if ((gppl[j]<=7)&&(gppv[j]<=7)){
                    	resultado2=resultado2+1;
                    }
                    if (resultado2>=3){
                    	gpp="se puede apostar al under -7.5 [[]]SUERTE CRACK[[]]";
					}
					else{
						gpp="no apueste ni por el under ni por el over [[]]SUERTE CRACK[[]]";
					}
                    l=l+1;
                    }
                }
            break;
            
            case 1:
				cout<<"puto";
            break;
            
			default: cout<<"usted ha sellecionado una opcion incorrecta";
			;
        }
        opcion=opcion+1;
    }
    return 0;
}
