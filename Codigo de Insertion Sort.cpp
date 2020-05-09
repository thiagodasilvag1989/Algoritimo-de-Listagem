#include<iostream>
using namespace std;
void insercao (int vet[], int tam);
int main(){
    setlocale(LC_ALL, "Portuguese");
	int x,vet[] = {13,23,3,8,1};
    system("cls");
    cout<<"\nAntes da Chamada da Função - INSERCAO\n\t\t";
    for(x=0;x<5;x++)
        cout<<vet[x]<<"\t";
    cout<<"\n";
    insercao (vet, 5);
    cout<<"\n\nDepois da Chamada da Função INSERCAO\n\t\t";
    for(x=0;x<5;x++)
        cout<<vet[x]<<"\t";
        cout<<"\n";
system("pause");
}
void insercao (int vet[],int tam)
{
    int j,i,aux, a;
    for(i=1;i<tam;i++)
	{
	   	aux = vet[i];
		cout <<"\ni= "<<i<<"\tAntes\t";
    	for(a=0;a<5;a++)
    		cout <<vet[a]<<"\t";
    	for(j=i;j>0 && aux <vet[j-1];j--)
        	
    vet[j]=vet[j-1];
    cout <<"\n\tDurante\t";
    for (a=0;a<5;a++)
    cout<<vet[a]<<"\t";
    
    vet[j]=aux;
    cout <<"\n\tDepois\t";
    for (int a=0;a<5;a++)
    cout<<vet[a]<<"\t";
    }
}
