//ativ1
#include <iostream>

int main() {
	double valorinstalacao = 300.00;
	double valorlimpeza = 150.00;
	double valormanutencao = 499.99;

	double total = valorinstalacao + valorlimpeza + valormanutencao;

	std::cout << "O Cliente vai ter que pagar no valor de R$" << total << "para empresa" << std::endl;

	return 0; 

}
//ativ2
#include <iostream>

int main() {
    
    double taxahoraria = 35.00;
    int horas = 8;

    double salario = taxahoraria * horas;

    std::cout << "Joaquim vai receber R$" << salario << " no final do dia." << std::endl;

    return 0;
}
//ativ3
#include <iostream>

int main() {
	int caixabombom = 27;
	int caixacomprada = 16;

	int total = caixabombom * caixacomprada;

	std::cout << "Pamela tem" << total << "bombons" << std::endl;

	return 0;
}
//ativ4
#include <iostream>

int main() {
   
    int garrafasvendidas = 300;
    int garrafascaixa = 20;

   int caixasusadas = garrafasvendidas / garrafascaixa;

    std::cout << "Foram usadas " << caixasusadas << " caixas de água." << std::endl;

    return 0;
}
//ativ5
#include <iostream>

int main() {
    
    int camisetascompradas = 120;
    int camisetasvendidas = 80;
    double precocamiseta = 30.00;
    int camisetascompradasposteriormente = 50;

     int camisetastotais = camisetascompradas - camisetasvendidas + camisetascompradasposteriormente;

    double faturamento = camisetasvendidas * precocamiseta;

    std::cout << "A loja tem" << camisetastotais << " camisetas agora." << std::endl;
    std::cout << "O faturamento da loja foi de R$" << faturamento << "." << std::endl;

    return 0;
}


