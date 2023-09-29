#include <iostream>
#include <cstdlib>

int main(){
    srand(time(NULL));
    char arreglo[200] = {};
    char control;
    for(int i = 0; i < 200; i++){
        arreglo[i] = 65 + rand()%(91-65);
    }
    for(int j = 0; j < 200; j++){
        std::cout << arreglo[j];
    }
    std::cout << std::endl;
    for(control = 65; control < 91; control++){
        int cont = 0;
        for(int l = 0; l < 200; l++){
            if(control == arreglo[l]){
                cont += 1;
            }
        }
        std::cout << control << " : " << cont << std::endl;
    }

    return 0;
}