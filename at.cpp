//atividade 3.a

#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "Digite o primeiro número: ";
    cin >> num1;
    
    cout << "Digite o segundo número: ";
    cin >> num2;
    
    if (num1 > num2) {
        cout << "O primeiro número é maior que o segundo número." << endl;
    } else {
        cout << "O primeiro número não é maior que o segundo número." << endl;
    }
    
    return 0;
}


//atividade b

#include <iostream>
using namespace std;

int main2() {
    int num1, num2;
    
    cout << "Digite o primeiro número: ";
    cin >> num1;
    
    cout << "Digite o segundo número: ";
    cin >> num2;
    
    if (num1 < num2) {
        cout << "O primeiro número é menor que o segundo número." << endl;
    } else {
        cout << "O primeiro número não é menor que o segundo número." << endl;
    }
    
    return 0;
}


//atividade c

#include <iostream>
using namespace std;

int main3() {
    int num1, num2;
    
    cout << "Digite o primeiro número: ";
    cin >> num1;
    
    cout << "Digite o segundo número: ";
    cin >> num2;
    
    if (num1 == num2) {
        cout << "Os dois números são iguais." << endl;
    } else {
        cout << "Os dois números não são iguais." << endl;
    }
    
    return 0;
}


//atividade d

#include <iostream>
using namespace std;

int main4() {
    int num1, num2, num3;
    
    cout << "Digite o primeiro número: ";
    cin >> num1;
    
    cout << "Digite o segundo número: ";
    cin >> num2;
    
    cout << "Digite o terceiro número: ";
    cin >> num3;
    
    if (num1 < num2 && num1 > num3) {
        cout << "O primeiro número é menor que o segundo número e maior que o terceiro número." << endl;
    } else {
        cout << "O primeiro número não atende à condição especificada." << endl;
    }
    
    return 0;
}


//atividade e

#include <iostream>
using namespace std;

int main5() {
    double num1, num2;
    
    cout << "Digite o primeiro número real: ";
    cin >> num1;
    
    cout << "Digite o segundo número real: ";
    cin >> num2;
    
    if (num1 >= num2) {
        cout << "O primeiro número é maior ou igual ao segundo número." << endl;
    } else {
        cout << "O primeiro número não é maior ou igual ao segundo número." << endl;
    }
    
    return 0;
}


//atividade f

#include <iostream>
using namespace std;

int main6() {
    int num;
    
    cout << "Digite um número inteiro: ";
    cin >> num;
    
    if (num % 2 == 0) {
        cout << "O número é par." << endl;
    } else {
        cout << "O número não é par." << endl;
    }
    
    return 0;
}


//atividade g

#include <iostream>
using namespace std;

int main7() {
    int num;
    
    cout << "Digite um número inteiro: ";
    cin >> num;
    
    if (num % 2 != 0) {
        cout << "O número é ímpar." << endl;
    } else {
        cout << "O número não é ímpar." << endl;
    }
    
    return 0;
}


//atividade h

#include <iostream>
using namespace std;

int main8() {
    int ano;
    
    cout << "Digite um ano: ";
    cin >> ano;
    
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        cout << "O ano " << ano << " é bissexto." << endl;
    } else {
        cout << "O ano " << ano << " não é bissexto." << endl;
    }
    
    return 0;
}


//atividade i

#include <iostream>
using namespace std;

int main9() {
    double num1, num2;
    
    cout << "Digite o primeiro número real: ";
    cin >> num1;
    
    cout << "Digite o segundo número real: ";
    cin >> num2;
    
    if (num1 <= num2) {
        cout << "O primeiro número é menor ou igual ao segundo número." << endl;
    } else {
        cout << "O primeiro número não é menor ou igual ao segundo número." << endl;
    }
    
    return 0;
}


//atividade j

#include <iostream>
using namespace std;

int main10() {
    int num;
    
    cout << "Digite um número inteiro: ";
    cin >> num;
    
    if (num > 0) {
        cout << "O número é positivo." << endl;
    } else {
        cout << "O número não é positivo." << endl;
    }
    
    return 0;
}


//atividade k

#include <iostream>
using namespace std;

int main11() {
    int num;
    
    cout << "Digite um número inteiro: ";
    cin >> num;
    
    if (num < 0) {
        cout << "O número é negativo." << endl;
    } else {
        cout << "O número não é negativo." << endl;
    }
    
    return 0;
}


//atividade l

#include <iostream>
#include <cstdlib>
using namespace std;

int main12() {
    int num1, num2;
    
    cout << "Digite o primeiro número inteiro: ";
    cin >> num1;
    
    cout << "Digite o segundo número inteiro: ";
    cin >> num2;
    
    int diferenca = abs(num1 - num2);
    
    if (diferenca <= 10) {
        cout << "A diferença entre os números é menor ou igual a 10." << endl;
    } else {
        cout << "A diferença entre os números é maior que 10." << endl;
    }
    
    return 0;
}


//atividade m

#include <iostream>
using namespace std;

int main13() {
    int mes;
    
    cout << "Escolha um mês do ano (1 a 12):" << endl;
    cout << "1 - Janeiro" << endl;
    cout << "2 - Fevereiro" << endl;
    cout << "3 - Março" << endl;
    cout << "4 - Abril" << endl;
    cout << "5 - Maio" << endl;
    cout << "6 - Junho" << endl;
    cout << "7 - Julho" << endl;
    cout << "8 - Agosto" << endl;
    cout << "9 - Setembro" << endl;
    cout << "10 - Outubro" << endl;
    cout << "11 - Novembro" << endl;
    cout << "12 - Dezembro" << endl;
    cout << "Digite o número do mês escolhido: ";
    cin >> mes;
    
    int dias;

    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: 
            dias = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            dias = 30;
            break;
        case 2:
            dias = 28;
            break;
        default:
            cout << "Mês inválido!" << endl;
            return 1;
    }
    
    cout << "O mês escolhido tem " << dias << " dias." << endl;
    
    return 0;
}


//atividade n

#include <iostream>
using namespace std;

int main14() {
    int idade;
    char temCarteira;

    cout << "Digite sua idade: ";
    cin >> idade;
    
    cout << "Você tem carteira de motorista? (s/n): ";
    cin >> temCarteira;
    
    if (idade > 18 && (temCarteira == 's' || temCarteira == 'S')) {
        cout << "Você pode dirigir." << endl;
    } else {
        cout << "Você não pode dirigir." << endl;
    }
    
    return 0;
}


//atividade o

#include <iostream>
using namespace std;

int main15() {
    char desejaComprar;
    char temDinheiro;
    
    cout << "Você deseja comprar um carro novo? (s/n): ";
    cin >> desejaComprar;
    
    cout << "Você tem dinheiro suficiente para isso? (s/n): ";
    cin >> temDinheiro;
    
    if ((desejaComprar == 's' || desejaComprar == 'S') && (temDinheiro == 's' || temDinheiro == 'S')) {
        cout << "Parabéns, você pode comprar um carro novo!" << endl;
    } else {
        cout << "Você não pode comprar um carro novo no momento." << endl;
    }
    
    return 0;
}


//atividade p

#include <iostream>
using namespace std;

int main16() {
    char possuiDiploma;
    int idade;
    
    cout << "Você possui um diploma de ensino superior? (s/n): ";
    cin >> possuiDiploma;
    
    cout << "Digite sua idade: ";
    cin >> idade;
    
    if ((possuiDiploma == 's' || possuiDiploma == 'S') && idade > 21) {
        cout << "Parabéns, você está qualificado para a vaga!" << endl;
    } else {
        cout << "Você não está qualificado para a vaga." << endl;
    }
    
    return 0;
}


//atividade q

#include <iostream>
using namespace std;

int main17() {
    char assinante;
    char assistiuSerie;
    
    cout << "Você é assinante de um serviço de streaming? (s/n): ";
    cin >> assinante;
    
    cout << "Você já assistiu à série específica? (s/n): ";
    cin >> assistiuSerie;
    
    if ((assinante == 's' || assinante == 'S') && (assistiuSerie == 's' || assistiuSerie == 'S')) {
        cout << "Ótimo, agora você pode assistir à nova temporada!" << endl;
    } else {
        cout << "Você não pode assistir à nova temporada." << endl;
    }
    
    return 0;
}


//atividade r

#include <iostream>
#include <string>
using namespace std;

int main18() {
    string nome;
    int idade;
    
    cout << "Digite seu nome: ";
    getline(cin, nome); // Usa getline para ler nomes com espaços
    
    cout << "Digite sua idade: ";
    cin >> idade;
    
    if (nome.length() > 3 && idade >= 18) {
        cout << "Acesso permitido" << endl;
    } else {
        cout << "Acesso negado" << endl;
    }
    
    return 0;
}

