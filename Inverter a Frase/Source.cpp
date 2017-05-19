#include <iostream>
#include <string>

int main(){
	std::string Frase, Palavra, FraseInvertida, PalavraInvertida;
	std::cout << "Frase: ";
	getline(std::cin, Frase);
	Frase.push_back(' ');

	for (int i = 0, j = 0; i < Frase.size(); i++) {
		Palavra.push_back(Frase.at(i));

		if (Frase.at(i) == ' ') {
			for (int k = i; k >= j; k--)
				FraseInvertida.push_back(Frase.at(k));
			j = i + 1;

			for (int k = 0; k < PalavraInvertida.size(); k++)
				FraseInvertida.push_back(PalavraInvertida.at(k));

			Palavra.clear();
			PalavraInvertida.clear();
		}
	}

	std::cout << "Texto Invertido:";
	for (int i = 0; i < FraseInvertida.size(); i++)
		std::cout << FraseInvertida.at(i);
	std::cout << std::endl;

	std::cout << std::endl;

	system("pause");
	Frase.clear();
	FraseInvertida.clear();
	return 0;
}

