// Tema 3 - Jogo de Corrida.
#include <iostream>
#include <string>
using namespace std;

// Identificador da função 'imprimir_espaços'.
void imprimir_espacos(int total);

int main(int argc, char* args[])
{
	// Quantidade Total de Espaços.
	int total_espacos = 70;
	string nome_jog1, nome_jog2, nome_jog3, nome_jog4;

	/*
	*	Laço para as rodadas do jogo. 
	*	A cada rodada o carro do jogador anda 1 (um) espaço.
	*
	*	Rodada		Carro
	*	0			 s
	*   1			  s
	*   2			   s
	*   3			    s
	*	...			...
	*   9			          s
	*
	*/
	
	cout << "Sejam Bem-Vindos a Corrida dos Desgramados. Divirtam-se!!!" << endl;
	cout << endl;
	
	cout << "Digite o nome do Jogador 1: " << endl;
	cin >> nome_jog1;
	
	cout << "Digite o nome do Jogador 2: " << endl;
	cin >> nome_jog2;
	
	cout << "Digite o nome do Jogador 3: " << endl;
	cin >> nome_jog3;
	
	cout << "Digite o nome do Jogador 4: " << endl;
	cin >> nome_jog4;
	
	
	int rodada = 0;
	while (rodada < total_espacos)
	{
		// Mostra em tela o Letreiro do Jogo.
		cout << "                              RACE OF DESGRAMADOS" << endl;
		// Mostra em tela o cartaz de fim de pista. 
		imprimir_espacos(total_espacos);
		cout << "|CHEGADA|" << endl;
		

		// Jogador 1: 
		//	a) Coloca uma quantidade de espaços dependendo da rodada.
		//  b) Mostra o carro.
		cout << nome_jog1;
		imprimir_espacos(rodada);
		cout << "  _  " << endl;
		imprimir_espacos(rodada);
		cout << "-o-o>" << endl;
		
		for (int cont = 0; cont < total_espacos; cont++) cout << "_"; 
		cout << endl;
		
		// Jogador 2: 
		//	a) Coloca uma quantidade de espaços dependendo da rodada.
		//  b) Mostra o carro.
		cout << nome_jog2;
		imprimir_espacos(rodada);
		cout << "  _  " << endl;
		imprimir_espacos(rodada);
		cout << "-o-o>" << endl;
		
		for (int cont2 = 0; cont2 < total_espacos; cont2++) cout << "_"; 
		cout << endl;
		
		// Jogador 3: 
		//	a) Coloca uma quantidade de espaços dependendo da rodada.
		//  b) Mostra o carro.
		cout << nome_jog3;
		imprimir_espacos(rodada);
		cout << "  _  " << endl;
		imprimir_espacos(rodada);
		cout << "-o-o>" << endl;
		
		for (int cont3 = 0; cont3 < total_espacos; cont3++) cout << "_"; 
		cout << endl;
		
		// Jogador 4: 
		//	a) Coloca uma quantidade de espaços dependendo da rodada.
		//  b) Mostra o carro.
		cout << nome_jog4;
		imprimir_espacos(rodada);
		cout << "  _  " << endl;
		imprimir_espacos(rodada);
		cout << "-o-o>" << endl;
		
		for (int cont4 = 0; cont4 < total_espacos; cont4++) cout << "_"; 
		cout << endl;
	
		// Limpa a tela para mostrar a próxima rodada.
		system("cls");
		
		// Passa para a próxima rodada do laço.
		rodada++;
	}

	return 0;
}

/*
*	A função serve pra mostrar espaços em branco na tela.
*	
*	int total : Quantidade de espaços que serão mostrados.
*
*/
void imprimir_espacos(int total)
{
	// Imprime espaços de 'qntd_atual' até 'total'.
	for (int qntd_atual = 0; qntd_atual < total; qntd_atual++)
	{
		cout << " ";
	}
}
