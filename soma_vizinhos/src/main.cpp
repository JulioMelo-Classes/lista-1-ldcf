/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
#include <vector>
#include <array>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

/*
so consegui chegar ate aki professor infelizmente mas pelo menos tentei e consegui fazer alguma coisinha depois de conseguir resolver o ambiente.

sobre essa questao, nao consegui entender muito bem as entradas e saidas mas na minha opiniao a logica ta certa mas provavelmente nao devo ter entendido alguma coisa, o que entendi inicialmente foi que era pra somar os numeros entre m e n perdi muito tempo fazendo isso sem entender porque dava errado, ate que li denovo a questao e vi que era pra somente somar o m mais n numeros visinhos se o n for + ai seria os visinhos pra frente e se o n for negativo somar os n numeros anteriores. Porem nao consegui passar nos testes
*/


int main(void)
{
    vector<int> v;
    int m=0,n=0,range=0,saida=0,proximo=0,cont=0;

    while(true){
        cin >> std::ws >> m;
        cin >> std::ws >> n;


        if (cin.eof()){
            break;
        }
        
        if(n>0){
    
            saida = m;
            proximo = saida +1;

            for(int i=0; i<n; i++){
                saida = saida + proximo;
                proximo = saida +1;
            }

            cout << saida << endl;                
        }


        else if (n<0){
            
            saida = m;
            proximo = saida -1;

            for(int i=n; i>=0; i++){
                saida = saida + proximo;
                proximo = saida -1;
            }
            cout << saida << endl;
        }

        else{
            saida = m;
            cout << saida << endl;
        }

        m=0,n=0,saida=0,proximo=0,cont=0;
    }
        
    

    return 0;
}
