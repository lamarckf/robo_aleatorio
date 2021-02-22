#include <iostream>
#include <stdlib.h>
#include "maquina.h"
using namespace std;


// case 0: Robo parado
// case 1: Robo se move para a direita 
// case 2: Robo se move para a esquerda
// case 3: Robo se move para a frente
// case 4: Robo se move para tras



int main()
{
	int latitude[2];
	int longitude[2];
	int quantidadde=10000;
	int robo[4];
	int memoria_principal[quantidadde];	
	int deslocamentos[quantidadde];
	int h=0;
	int i=0;
	for (i=0; i<4; i++ )
	{
		robo[i]=0;
	}
	latitude[0]=rand()%10000;
	latitude[1]=latitude[0];
	longitude[0]=rand()%10000;
	longitude[1]=longitude[0];
	
	alocar_instrucoes (quantidadde, memoria_principal );
	
	alocar_numero (quantidadde, deslocamentos);
	while(h!=quantidadde)
	{		
		calcular_deslocamento (h, memoria_principal, robo, longitude, latitude, deslocamentos);	
		h++;
	}
	cout << endl << "Posicao inicial do robo: " << endl << "Latitude "<<latitude[0]<< endl;
	cout << "Longitude "<< longitude[0]<< endl<<endl;
	cout << "Posicao final do robo: " << endl << "Latitude "<<latitude[1]<< endl;
	cout << "Longitude "<< longitude[1]<<endl<<endl;
	cout << "Passos dados para a direita: "<< robo[0]<<endl;
	cout << "Passos dados para a esquerda: "<< robo[1]<<endl;
	cout << "Passos dados para a frente: "<< robo[2]<<endl;
	cout << "Passos dados para tras: "<< robo[3]<<endl;
	
	return 0;
}