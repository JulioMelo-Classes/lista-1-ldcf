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

sobre essa questao, nao consegui entender muito bem as
entradas e saidas mas na minha opiniao a logica ta certa
mas provavelmente nao devo ter entendido alguma coisa, o
que entendi inicialmente foi que era pra somar os numeros
entre m e n perdi muito tempo fazendo isso sem entender
porque dava errado, ate que li denovo a questao e vique era
pra somente somar o m mais n numeros visinhos
se o n for + ai seria os visinhos pra frente e se o n
for negativo somar os n numeros anteriores. Porem nao
consegui passar nos testes
*/

/*
a lógica ainda não estava correta, mas vou considerar 30%
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
            //vc tem que somar m + (m+1) + (m+2) ... + (m+n)
            //vc estava somando m + m+1 + (m+(m+1)) + (m + m+1 + (m+(m+1))) + ...
            for(int i=0; i<n-1; i++){ // como vc já tinha feito uma soma (quando faz saida = m), teria que somar um elemento à menos aqui
                saida = saida + proximo;
                //proximo = saida +1; //como vc já fez saida = saida + proximo, quando vc faz isso não está indo para o próximo depois de m (que seria m + 2), mas sim pra o próximo depois de saida;
                proximo++; //correto seria apenas incrementar próximo
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
