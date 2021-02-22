#include <iostream>
#include <stdlib.h>
#include "maquina.h"
using namespace std;

void alocar_instrucoes (int numero_de_posicao, int memoria[])
{
	for (int i=0; i <numero_de_posicao; i++)
	{
		memoria[i]=rand()%5;
	}
}
void alocar_numero (int numero_de_passos, int passos[])
{
	for (int i=0; i <numero_de_passos; i++)
	{
		passos[i]=rand()%500;
	}
}
void calcular_deslocamento (int h, int memoria[], int robo[], int longitude[], int latitude[], int deslocamentos[] )
{
	switch (memoria[h])
	{
		case (0):
		{
			cout <<"Robo parado"<<endl;
			break;
		}
		case (1):
		{
			robo[0]+=deslocamentos[h];
			longitude[1]+=deslocamentos[h];
			cout <<"Robo deu "<< deslocamentos[h] <<" passos para direita."<<endl;
			break;
		}
		case(2):
		{
			robo[1]+=deslocamentos[h];
			longitude[1]-=deslocamentos[h];
			cout <<"Robo deu "<< deslocamentos[h] <<" passos para esquerda."<<endl;
			break;
		}
		case(3):
		{
			robo[2]+=deslocamentos[h];
			latitude[1]+=deslocamentos[h];
			cout <<"Robo deu "<< deslocamentos[h] <<" passos para frente."<<endl;
			break;
		}
		case(4):
		{
			robo[3]+=deslocamentos[h];
			latitude[1]-=deslocamentos[h];
			cout <<"Robo deu "<< deslocamentos[h] <<" passos para tras."<<endl;
			break;
		}
		break;
	}
}