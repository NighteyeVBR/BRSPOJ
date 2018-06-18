/*
Num sorteio que distribui prêmios, um participante inicialmente sorteia um inteiro N e depois N valores. O número de pontos do participante é o tamanho da maior sequência de valores consecutivos iguais. Por exemplo, suponhamos que um participante sorteia N = 11 e, nesta ordem, os valores
30, 30, 30, 30, 40, 40, 40, 40, 40, 30, 30
Então, o participante ganha 5 pontos, correspondentes aos 5 valores 40 consecutivos. Note que o participante sorteou 6 valores iguais a 30, mas nem todos são consecutivos.
Sua tarefa é ajudar a organização do evento, escrevendo um programa que determina o número de pontos de um participante.

Entrada
A primeira linha da entrada contém um inteiro N, o número de valores sorteados. A segunda linha contém N valores, V1, V2, . . . , VN, na ordem de sorteio, separados por um espaço em branco.

Saída
Seu programa deve imprimir apenas uma linha, contendo apenas um inteiro, indicando o número de pontos do participante.

*/
#include <iostream>

using namespace std;

int main(){
    //DECLARANDO VARIAVEIS
    //N = Quantidade de Numeros  CONT = Conta a sequencia de numeros   M = Maior sequencia
	int n, i = 0, cont = 1, m = 0;
	cin >> n;
	//Declarando VETOR de tamanho N para armazenar a sequencia de numeros
	int vetor[n];
    //Lendo primeiro valor do VETOR (Posição 0)
	cin >> vetor[i];
    //Repetição em N para
	for(i=1;i<n;i++)
	{
	    //Realiza leitura dos proximos valores e já compara com o anterior para montar a sequencia
		cin >> vetor[i];
		if(vetor[i]==vetor[i-1])
		    cont++;
		else
		    cont = 1;
		//Verifica se a primeira sequencia é menor que a proxima, na qual M recebe o valor da maior sequencia
		if(cont>m)
		    m = cont; 
	}
	//Retorna o valor da maior sequencia
	cout << m;
	return 0;
}
