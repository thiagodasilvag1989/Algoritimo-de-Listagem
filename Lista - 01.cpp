#include <iostream>
using namespace std;

//Declarações das Funçoes
void insere (int codigo[],int &t, int tamanho);
void exibe (int codigo[], int t);
void elemento(int codigo[],int t);
int main(){
	int tam, codigoProduto[5],op;
	
	//Inicialização
	tam = 0;
	do{
		cout<<"\nMenu - LISTA \n";
		cout<<"\n0 - Reiniciar a LISTA";
		cout<<"\n1 - Inserir Codigo na LISTA";
		cout<<"\n2 - Exibir LISTA";
		cout<<"\n3 - Exibir Tamanho da LISTA";
		cout<<"\n4 - Exibe um elemento da LISTA";
		cout<<"\n5 - SAIR";
		cout<<"\nOpcao:";
		cin>>op;
		system("cls");
		switch(op){
		
		//reinicialização
		case 0: tam = 0; break;
		
		case 1: insere(codigoProduto, tam, 5);break;
		case 2: exibe(codigoProduto,tam);break;
		case 3: cout<<"\nTamnho da Lista: "<<tam; break;
		case 4: elemento (codigoProduto, tam); break;
		case 5: cout<<"\nFinalizando o programa da LISTA\n"; break;
		default: cout<<"\nOpcao invalida\n";			
		}
	cout<<"\n\n";system("pause");
	}while (op !=5);
}
	
	//Função de inserir na lista
	void insere (int codigo[],int &t,int tamanho)
	{
		int prod;
		if (tamanho == t)
			cout<<"\nAtencao! Lista cheia\n";
		else{
			cout<<"\nDigite codigo do produto a ser inserido: ";
			cin>> prod;
			codigo[t] = prod;
			t++;
		}
	}
	
	//Função de Exibir Todos os Elementos da Lista
	void exibe (int codigo[],int t){
		int x;
		if (t == 0)
			cout<<"\nAtencao! Lista Vazia\n";
			else
			cout<<"\nRelacao dos Codigos\n";
			for (x = 0; x < t; x++)
			cout <<"\n" << codigo[x];
	}
	//Função para Exibir um ELemento da Lista
	void elemento (int codigo[],int t){
		int prod,posicao;
		if(t == 0)
		cout<<"\nAtencao! Lista vazia\n";
		else
		cout<<"\nQual a posição que deseja? ";
		cin>> posicao;
		posicao--;
		if (posicao >= t)
		cout<<"\nAtencao! Nenhum codigo armazenado ou posicao inexistente\n";
		else
		cout<<"\nCodigo: " << codigo[posicao]<<"\n";
	}
