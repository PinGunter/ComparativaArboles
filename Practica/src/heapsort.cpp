#include <cstdlib>
#include <ctime>
#include <iostream>
#include <APO.h>

using namespace std;

int main(int argc, char * argv[]){
  if (argc != 2){
    cerr << "Error en la llamada.\nEjecución correcta: binario <numero_elementos>" << endl;
    exit (EXIT_FAILURE);
  }

  int tamanio = atoi(argv[1]);
  APO<int> arbol(tamanio);
  srand(time(NULL));
  clock_t tini, tfin;
  tini = clock();
  for (int i=0; i < tamanio; i++){
    arbol.insertar(random());
  }

  while(!arbol.empty()){
    arbol.borrar_minimo();
  }
  tfin = clock();
  
  cout << tamanio << "\t" <<((double)(tfin - tini)) / CLOCKS_PER_SEC << endl;
}

