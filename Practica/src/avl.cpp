#include <iostream>
#include <ctime>
#include <AVL.hpp>

using namespace std;

int main(int argc, char *argv[]){
    if (argc != 2){
        cerr << "Error en la llamada.\nEjecución correcta: binario <numero_elementos>" << endl;
        exit(EXIT_FAILURE);
    }

    int tamanio = atoi(argv[1]);
    AVL<int> arbol;
    srand(time(NULL));
    clock_t tini, tfin;
    for (int i=0; i < tamanio; i++){
        arbol.insertar(i);
    }
    AVL<int>::iterator it = arbol.begin();
    tini = clock();
    for (it = arbol.begin(); it != arbol.end(); ++it){

    }
    tfin = clock();
    cout << tamanio << "\t" <<((double)(tfin - tini)) / CLOCKS_PER_SEC << endl;    
}