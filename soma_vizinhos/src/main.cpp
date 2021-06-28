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

int main(void)
{
    vector<int> v;
    int m=0,n=0,range=0,saida=0,temp=0,cont=0;

    while(true){
        cin >> std::ws >> m;
        cin >> std::ws >> n;


        if (cin.eof()){
            break;
        }
        
        if(n>0){
    
            saida = m;
            temp = saida +1;

            for(int i=1; i<n; i++){
                saida = saida + temp;
                temp = saida +1;
            }

            cout << saida << endl;                
        }

        else if (n<0){
            
            saida = m;
            temp = saida -1;

            for(int i=0; i<n; i++){
                saida = saida + temp;
                temp = saida -1;
            }
            cout << saida << endl;
        }

        else{
            saida = m;
            cout << saida << endl;
        }

        m=0,n=0,saida=0,temp=0,cont=0;
    }
        
    

    return 0;
}
