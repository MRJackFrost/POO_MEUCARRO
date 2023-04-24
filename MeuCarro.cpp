#include <iostream>
using namespace std;

class Carro{
    public:
    
    string cor;
    string modelo;
    float velmax;
    void buzinar();
};

int main() {
    Carro MeuCarro;
    
    MeuCarro.cor = "Preto";
    MeuCarro.modelo = "Corsa";
    MeuCarro.velmax = 180.0f;
    
    MeuCarro.buzinar();
    cout << MeuCarro.cor <<endl;
    cout << MeuCarro.modelo <<endl;
    cout << MeuCarro.velmax <<endl;

    return 0;
}
void Carro::buzinar(){
    cout << "BI! BI!" << endl;
}