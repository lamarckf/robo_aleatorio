#ifndef MAQUINA_H
#define MAQUINA_H

void alocar_instrucoes (int numero_de_posicao, int memoria[]);
void alocar_numero (int numero_de_passos, int passos[]);
void calcular_deslocamento (int h, int memoria[], int robo[], int longitude[], int latitude[], int deslocamentos[] );

#endif
