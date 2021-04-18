
//  Created by Gabriel Batista Cristiano
//  TIA: 32090722
//  Referencia: https://www.dobitaobyte.com.br/como-criar-arrays-dinamicos-em-c/

#include <iostream>

using namespace std;


int main()
{
    int size, secondSize, input;
    char choice;
    cout << "Digite o tamanho do array: ";
    cin >> size;
    int* array = new int[size];
    for (int i=0; i < size; i++)
    {
        cout << "\nInforme o número positivo para o elemento " << i << ": \n";
        cin >> input;
        if(input < 0)
        {
            for (int j = i; j<size; j++) {
                array[j] = -1;
            }
            break;
        }
        array[i] = input;
        if(i == size - 1)
        {
            cout << "Limite do array atingido. Deseja aumentar o tamanho do array? \n[s/n]: ";
            cin >> choice;
            if(choice == 's')
            {
                cout << "Ïnforme o novo valor do array: ";
                cin >> secondSize;
                if (secondSize <= size) {
                    cout << "O tamanho do novo array não pode ser menor ou igual ao atual. \nEncerrando...";
                    break;
                }
                size = secondSize;
            }
        }
    }
    
    for(int i=0; i < size; i++)
    {
        cout << "\narray[" << i << "]: "<< "= " << array[i];
    }
    delete [] array;
    array = nullptr;
    cout << "\n";
    
}

