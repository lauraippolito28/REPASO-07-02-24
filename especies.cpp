#include <iostream> 

int main(){
    //Variables 
    int peso_bebe; 
    int meses_bebe; 
    int dosis_vacunas; 

    //Entrada
    std::cout <<"Ingresa el peso del bebe"; 
    std::cin >> peso_bebe; 
    std::cout <<"Ingresa los mesesdel bebe"; 
    std::cin >> meses_bebe; 

    //Proceso 
    dosis_vacunas = ((peso_bebe + 10 )/(meses_bebe *10))*8;

    //Salida
    std::cout <<"La dosis que debes darle al bebe es: " << dosis_vacunas << std:endl; 

    return 0; 
}