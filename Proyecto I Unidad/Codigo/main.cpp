#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

void menu(void) //Creamos el Menu para mostrar en pantalla
{
	system("cls");
    cout << "\t---------------------------------------------\n";
    cout << "\t|               Menu de Juegos              |\n";
    cout << "\t|-------------------------------------------|\n";
    cout << "\t|  1. - Juego de Start Ship                 |" << endl;
    cout << "\t|  2. - Juego de Snake                      |" << endl;
    cout << "\t|  3. - Terminar                            |" << endl;
    cout << "\t---------------------------------------------\n";
    cout << "Escoja una numero del menu: ";
}

int main(void) //Detallamos como vamos a escoger los numeros el menu
{	
    int numero; //Declaramos la variable que nos dejara ingresar el numero para escoger del menu
    do
    {
        menu();  cin >> numero;//Designamos que del menu se solicitara que se ingrese el numero para el case
        switch(numero)
        {
            case 1:
            	{
            		starShip();
                    break;
				}
            case 2:
            	{
            		snake();
                    break;   
				} 
         }
        cout<<endl<<endl;
        system("pause"); 
    }
    while( numero != 3);
return 0;
}
