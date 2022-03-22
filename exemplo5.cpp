#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int *v;
	int *aux;
	
	v = (int*)malloc(10 * sizeof(int));
	aux = v;
	
	// Carregando os valores no array
	for(int i=0; i<10; ++i)
	{
		v[i] = i+1;
	}
	
	// Exibindo os valores do array - percorrendo através do índice
	for(int i=0; i<10; ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	
	// Exibindo os valores do array - percorrendo através do endereço
	for(int i=0; i<10; ++i)
	{
		cout << *v << " ";
		++v;
	}
	cout << endl;

	// Reposicionamento do ponteiro no início do array	
	v = aux;
	
	// Exibindo os valores do array - percorrendo através do índice
	for(int i=0; i<10; ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	
	// Exibindo os valores do array - percorrendo através do endereço
	for(int i=0; i<10; ++i)
	{
		cout << *v << " ";
		++v;
	}
	cout << endl;
		
	free(v);
	
	return 0;
}