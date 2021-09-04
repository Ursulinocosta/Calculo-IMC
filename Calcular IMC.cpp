/*
 1) nome, peso, altura, imc, mensagem
 2) nome, peso, altura
 3) imc = peso / altura * altura
 4) imc, mensagem 
 *
 */
#include "iostream"
#include "math.h"
#include "cstdlib"
#include "string"
using namespace std;
 
int main() 
{
    setlocale(LC_ALL, "Portuguese");

    string nome, mensagem;
    double peso, altura, imc, opcao=-1;

    Repetir:  // ponto de repetição

    system("cls");

    if (opcao != -1)
    {
       cin.ignore();        
    }

    cout << "\nDigite o nome:";
    getline ( cin, nome );

    cout << "\nDigite o peso:";
    cin >> peso;

    cout << "\nDigite a altura:";
    cin >> altura;



    imc = peso/ pow (altura, 2);


    if (imc<=18.5)
    {
        mensagem = "Abaixo do peso!";
    }
    else if ( imc <= 24.9 )
    {
        mensagem = "Peso normal!";
    }
    else
    {
        mensagem = "Sobrepeso!";  
    }

    system("cls");
    cout << "\n*** Resultados ***";
    cout << "\nNome:" << nome;
    cout << "\nImc.:" << imc;
    cout << "\nClassificação:" << mensagem << endl;
    system("pause");

    cout << "\n\n\nDigite 0 para sair ou 1 para continuar...";
    cin >> opcao;

    if (opcao == 0) 
    {
        exit(0);
    }
    else    
    {
        goto Repetir; // volta ao ponto de repetição
    }

 return 0;
 
}