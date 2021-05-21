// BinarySearch.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln

#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> vctr, int target) 
{
    int min = 0;
    int max = vctr.size() - 1;

    while (min < max) 
    {
        int guess = floor((min + max) / 2);

        if (vctr.at(guess) == target) 
        {
            return guess;
        }
        else if (vctr.at(guess) < target) 
        {
            min = guess + 1;
        }
        else if (vctr.at(guess) > target)
        {
            max = guess - 1;
        } 
        else 
        {
            return -1;
        }
    }
}

int main()
{
    vector<int> vctr{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

    int result = binarySearch(vctr, 13);

    cout << "Result: " << result << endl;

    return 0;
}