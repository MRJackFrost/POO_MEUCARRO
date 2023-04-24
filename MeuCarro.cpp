// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Carro{
    public:
    
    string cor;
    string modelo;
    float velmax;
    void buzinar();
    
    Carro(){
        cor = "Vermelho";
        modelo = "Ferrari";
        velmax = 260.0f;
    }
};

int main() {
    Carro MeuCarro;
    Carro Ferrari;
    
    MeuCarro.cor = "Preto";
    MeuCarro.modelo = "Corsa";
    MeuCarro.velmax = 180.0f;
    
    MeuCarro.buzinar();
    cout << MeuCarro.cor <<endl;
    cout << MeuCarro.modelo <<endl;
    cout << MeuCarro.velmax <<endl;
    
    Ferrari.buzinar();
    cout << Ferrari.cor << endl;
    cout << Ferrari.modelo << endl;
    cout << Ferrari.velmax << endl;

    return 0;
}
void Carro::buzinar(){
    cout << "BI! BI!" << endl;
}