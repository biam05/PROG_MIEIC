/*
1.1
Lê do teclado uma letra e mostra o respetivo código ASCII
*/
#include <iostream>
using namespace std;

int main()
{
	char letter;
	cout << "Escreve uma letra: ";
	cin >> letter;
	cout << "ASCII: " << int(letter);
	return 0;
}