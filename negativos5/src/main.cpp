#include <iostream>
#include <vector>
#include <array>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
const int SIZE = 5; // input size.

int main(void)
{
    vector<int> v;
    int cont = 0;

    while(true){
        int x;
        cin >> std::ws >> x;

        if(cin.eof())
        break;

        v.push_back(x);
    }

    for(int i=0; i<v.size(); i++){
        if(v[i]<0){
            cont++;
        }
    }

    cout << cont << endl;
    

    return 0;
}
