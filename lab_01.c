/* Nome: Felipe Escórcio de Sousa	RA: 171043
 * Programa: Jogo de paciência
 * Descrição: O programa implementa uma partida de paciência, com as regras clássicas:
	- Usa-se um baralho com 52 cartas
	- Temos 7 pilhas de jogos em que distribuimos as primeiras 28 cartas
	- As outras 24 vao para a pilha de estoque
	- Há quatro pilhas de saída
	- Apenas cartas abertas podem ser movidas
	- Se a pilha de descarte estiver vazia e a de estoque não vazia, deve-se mover uma carta da pilha de estoque pra pilha de descarte
	- Se alguma pilha de jogo não estiver vazia e a carta do topo estiver fechada deve-se abri-la
	- Devemos sempre empilhar as pilhas de jogo em ordem decrescente(K Q J 10 9 8 7 6 5 4 3 2 A)
	- Sempre que tivermos uma Ás eles deve ir direto para a pilha de saída
	- Só podemos empilhar cartas pretas(paus e espadas) acima de vermelhas(copas e ouros) e vice-versa
	- Podemos mover pilhas de cartas abertas entre si desde que se respeite as outras regras
	- Pilhas de jogo vazia só podem ser preenchidas por K(rei)
	- Pilhas de saídas são imútáveis
	- Só podem ser movidas 1 carta por vez da pilha de estoque pra pilha de descarte
	- O jogo acaba se não houverem movimentos válidos.
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct baralho{
	char valor[2];	//guarda valor e naipe.
	int face;	//índice 0 marca uma carta não virada, 1 uma já virada(aberta).
	struct carta *acima;
}carta;

void dist_inicial(carta **P1);

int main(void){

	carta *S1 = NULL, *S2 = NULL, *S3 = NULL, *S4 = NULL, /*O-Ouros , C-Copas, P-Paus, E-Espadas */
		*J1 = NULL, *J2 = NULL, *J3 = NULL, *J4 = NULL, *J5 = NULL, *J6 = NULL, *J7 = NULL,
		*D = NULL, *E = NULL;
	
	

	return 0;
}

/* Distribui as primeiras 28 cartas nas 7 pilhas de jogo. 
 * Pega as primeiras 28 cartas, guarda-as num vetor e depois as passa para as filas, sendo que de uma carta pra outra há uma diferença de posição de inicialmente 5 números (com exceção da primeira pilha em que há apenas uma carta) e decresce conforme as camadas aumentam até a diferença ser de 1 posição apenas.
 */
void dist_inicial(carta **P1){

	char **iniciais;
	int i = 0;

	**iniciais = *(char) malloc(sizeof(char) * 28);
	for(i = 0; i < 28; i++){
		*iniciais[i] = (char) malloc(sizeof(char) * 2);
	}
	
	
}
/* Pega todas as cartas e guarda na caixa. */
void guarda(carta **P1){

}