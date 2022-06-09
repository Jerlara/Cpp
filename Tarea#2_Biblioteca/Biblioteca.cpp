#include <iostream>
#include <algorithm>
#include <time.h>

using namespace std;

string libros[39][5];

void cargarLibros() {
    // Arreglo con categoria y descripcion
	libros[0][0] = "Algoritmos"; libros[0][1] = "Algoritmos y Programacion (Guia para docentes)"; libros[0][2] = "Josselin Voto"; libros[0][3] = "Ernesto Lara"; libros[0][4] = "Jenmy Caceres";
	libros[1][0] = "Algoritmos"; libros[1][1] = "Apuntes de Algoritmos y Estructuras de Datos"; libros[1][2] = "Gabriela Vargas"; libros[1][3] = "Jose Alvarenga"; libros[1][4] = "Paola Hernandez";
	libros[2][0] = "Algoritmos"; libros[2][1] = "Breves Notas sobre Analisis de Algoritmos"; libros[2][2] = "Mario Maldonado"; libros[2][3] = "Yina Funes"; libros[2][4] = "Andrea Reyes";
	libros[3][0] = "Algoritmos"; libros[3][1] = "Fundamentos de Informatica y Programacion"; libros[3][2] = "Delia Rivera"; libros[3][3] = "Mathias Padilla"; libros[3][4] = "Marvin Ponce";
	libros[4][0] = "Algoritmos"; libros[4][1] = "Temas selectos de estructuras de datos"; libros[4][2] = "Eduardo Ramos"; libros[4][3] = "Kevin Menjivar"; libros[4][4] = "Beyson Martinez";
	libros[5][0] = "Algoritmos"; libros[5][1] = "Teoria sintactico-gramatical de objetos"; libros[5][2] = "Maricela Aceituno"; libros[5][3] = "Rene Andino"; libros[5][4] = "Harriet Torres";
	libros[6][0] = "Base de Datos"; libros[6][1] = "Apuntes de Base de Datos 1"; libros[6][2] = "Marbella Antunez"; libros[6][3] = "Mariano Ortiz"; libros[6][4] = "Juan Ortega";
	libros[7][0] = "Base de Datos"; libros[7][1] = "Base de Datos (2005)"; libros[7][2] = "Keny Alvarado"; libros[7][3] = "Laura Enamorado"; libros[7][4] = "Audrey Gonzalez";
	libros[8][0] = "Base de Datos"; libros[8][1] = "Base de Datos (2011)"; libros[8][2] = "Dario Ortiz"; libros[8][3] = "Alberto Pejuan"; libros[8][4] = "Wilfredo Dubon";
	libros[9][0] = "Base de Datos"; libros[9][1] = "Base de Datos Avanzadas (2013)"; libros[9][2] = "Jazmin Salinas"; libros[9][3] = "Vilma Fajardo"; libros[9][4] = "Daniel Macedo";
	libros[10][0] = "Base de Datos"; libros[10][1] = "Diseno Conceptual de Bases de Datos"; libros[10][2] = "Tania Contreras"; libros[10][3] = "Francis Fernandez"; libros[10][4] = "Edgardo Sosa";
	libros[11][0] = "Ciencia Computacional"; libros[11][1] = "Breves Notas sobre Automatas y Lenguajes"; libros[11][2] = "Michelle Sagastume"; libros[11][3] = "Jenifer Lima"; libros[11][4] = "Heidy Lopez";
	libros[12][0] = "Ciencia Computacional"; libros[12][1] = "Breves Notas sobre Teoria de la Computacion"; libros[12][2] = "Ana Zelaya"; libros[12][3] = "Josue Garcia"; libros[12][4] = "Arnold Abudeye";
	libros[13][0] = "Metodologias de desarrollo de software"; libros[13][1] = "Compendio de Ingenieria del Software"; libros[13][2] = "Silvia Pineda"; libros[13][3] = "Lilian Alvarado"; libros[13][4] = "Judith Fuentes";
	libros[14][0] = "Metodologias de desarrollo de software"; libros[14][1] = "Diseno agil con TDD"; libros[14][2] = "Lenin Portillo"; libros[14][3] = "Francisco Recinos"; libros[14][4] = "Gabriel Calix";
	libros[15][0] = "Metodologias de desarrollo de software"; libros[15][1] = "Ingenieria de Software: Una Guia para Crear Sistemas de Informacion";  libros[15][2] = "Nataly Alvarado"; libros[15][3] = "Harol Melgar"; libros[15][4] = "Mario Romero";
	libros[16][0] = "Metodologias de desarrollo de software"; libros[16][1] = "Scrum & Extreme Programming (para programadores)"; libros[16][2] = "Cesar Perdomo"; libros[16][3] = "Roberto Cerrato"; libros[16][4] = "Brayan Sanabria";
	libros[17][0] = "Metodologias de desarrollo de software"; libros[17][1] = "Scrum y XP desde las trincheras"; libros[17][2] = "Jarol Lemus"; libros[17][3] = "Alexa Guevara"; libros[17][4] = "Gloria Molina";
	libros[18][0] = "Miscelaneos"; libros[18][1] = "97 cosas que todo programador deberia saber"; libros[18][2] = "Irene Galeas"; libros[18][3] = "Denys Banegas"; libros[18][4] = "Franklin Martinez";
	libros[19][0] = "Miscelaneos"; libros[19][1] = "Docker"; libros[19][2] = "Victor Flores"; libros[19][3] = "Linda Carbajal"; libros[19][4] = "Jonathan Calderon";
	libros[20][0] = "Miscelaneos"; libros[20][1] = "El camino a un mejor programador"; libros[20][2] = "Lidia Cabrera"; libros[20][3] = "Stephanie Inestroza"; libros[20][4] = "Xiomara Velasquez";
	libros[21][0] = "Miscelaneos"; libros[21][1] = "Introduccion a Docker"; libros[21][2] = "Maritza Medina"; libros[21][3] = "Leyla Chacon"; libros[21][4] = "Frelin Barrio Nuevo";
	libros[22][0] = "Miscelaneos"; libros[22][1] = "Programacion de videojuegos SDL"; libros[22][2] = "Cielo Gallardo"; libros[22][3] = "Cristel Alvarez"; libros[22][4] = "Claudia Belisle";
	libros[23][0] = "PHP"; libros[23][1] = "Manual de estudio introductorio al lenguaje PHP procedural"; libros[23][2] = "Emilio Escobar"; libros[23][3] = "Pablo Gavirria"; libros[23][4] = "Genesis Cargena";
	libros[24][0] = "PHP"; libros[24][1] = "PHP y Programacion orientada a objetos"; libros[24][2] = "Melissa Andino"; libros[24][3] = "Sofia Mercedes"; libros[24][4] = "Nidia Licona";
	libros[25][0] = "PHP"; libros[25][1] = "POO y MVC en PHP"; libros[25][2] = "Wilmer Rosales"; libros[25][3] = "Nancy Castillo"; libros[25][4] = "Hector Pocasangre";
	libros[26][0] = "PHP"; libros[26][1] = "Silex, el manual oficial"; libros[26][2] = "Daniela Paz"; libros[26][3] = "Helen Montes"; libros[26][4] = "Gerardo Suazo";
	libros[27][0] = "PHP"; libros[27][1] = "Symfony 1.4, la guia definitiva"; libros[27][2] = "Diana Orantes"; libros[27][3] = "Nohemy Jordan"; libros[27][4] = "Jarvin Fiallos";
	libros[28][0] = "PHP"; libros[28][1] = "Symfony 2.4, el libro oficial"; libros[28][2] = "Kelvin Meras"; libros[28][3] = "Iveliz Posadas"; libros[28][4] = "Mayra Ruiz";
	libros[29][0] = "Python"; libros[29][1] = "Aprenda a pensar como un programador (con Python)"; libros[29][2] = "Victor Caballero"; libros[29][3] = "Angie Chavarria"; libros[29][4] = "Kevin Chichiraqui";
	libros[30][0] = "Python"; libros[30][1] = "Doma de Serpientes para Ninos: Aprendiendo a Programar con Python"; libros[30][2] = "Yajaira Sarmiento"; libros[30][3] = "Saul Fuentes"; libros[30][4] = "Henry Sosa";
	libros[31][0] = "Python"; libros[31][1] = "Inmersion en Python"; libros[31][2] = "Alberto Mejia"; libros[31][3] = "Marlon Gamez"; libros[31][4] = "Carlos Paredes";
	libros[32][0] = "Python"; libros[32][1] = "Inmersion en Python 3"; libros[32][2] = "Neo Matrix"; libros[32][3] = "Trinity Osorto"; libros[32][4] = "Varinia Trochez";
	libros[33][0] = "Python"; libros[33][1] = "Introduccion a la programacion con Python"; libros[33][2] = "Johana Navarro"; libros[33][3] = "Waldina Urbina"; libros[33][4] = "Olivia Maltes"; 
	libros[34][0] = "Python"; libros[34][1] = "Introduccion a Programando con Python"; libros[34][2] = "Joel Najera"; libros[34][3] = "Mayte Gutierrez"; libros[34][4] = "Johan Godoy";
	libros[35][0] = "Python"; libros[35][1] = "Python instantaneo (1999)"; libros[35][2] = "Keilyn Zelaya"; libros[35][3] = "Teresa Ruedas"; libros[35][4] = "Valeria Cardona";
	libros[36][0] = "Python"; libros[36][1] = "Python para ciencia e ingenieria"; libros[36][2] = "Erik Diaz"; libros[36][3] = "Reina Enrique"; libros[36][4] = "Larisa Mendoza";
	libros[37][0] = "Python"; libros[37][1] = "Python para principiantes"; libros[37][2] = "Yasnari Subuyuj"; libros[37][3] = "Julissa Bautista"; libros[37][4] = "Karla Zeron";
	libros[38][0] = "Python"; libros[38][1] = "Python para todos"; libros[38][2] = "Bianca Oliva"; libros[38][3] = "Elisa Rodriguez"; libros[38][4] = "Exel Pinto";
}


int main(int argc, char const *argv[])
{
    cargarLibros();

    srand (time(NULL));
    
    bool salir = false;

    while (salir == false)
    {
        string buscar = "";
        system("cls");
        cout << "Ingrese la descripcion del libro o autor que busca: ";
        cin >> buscar;

        // busqueda
        for (int i = 0; i < 39; i++)
        {
            string libro = libros[i][1];
            string autor1 = libros[i][2];
            string autor2 = libros[i][3];
            string autor3 = libros[i][4];
            string libroEnminuscula = libro;
            string autor1Enminuscula = autor1;
            string autor2Enminuscula = autor2;
            string autor3Enminuscula = autor3;
            // transformamos a minuscula los string buscar y libro
            transform(libroEnminuscula.begin(), libroEnminuscula.end(), libroEnminuscula.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);
            transform(autor1Enminuscula.begin(), autor1Enminuscula.end(), autor1Enminuscula.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);
            transform(autor2Enminuscula.begin(), autor2Enminuscula.end(), autor2Enminuscula.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);
            transform(autor3Enminuscula.begin(), autor3Enminuscula.end(), autor3Enminuscula.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);

            if (libroEnminuscula.find(buscar) != string::npos || (autor1Enminuscula.find(buscar) != string::npos || (autor2Enminuscula.find(buscar) != string::npos || (autor3Enminuscula.find(buscar) != string::npos)))){ 
                cout << "Libro o autor encontrado: " << libro << endl;

                cout << "Tambien te sugerimos estos libros: " << endl;

                int sugerencia1 = rand() % 38 + 1;
                int sugerencia2 = rand() % 38 + 1;
                int sugerencia3 = rand() % 38 + 1;

                cout << " Sugerencia 1: " << libros[sugerencia1][1] << endl;
                cout << " Sugerencia 2: " << libros[sugerencia2][1] << endl;
                cout << " Sugerencia 3: " << libros[sugerencia3][1] << endl;

                salir = true;
                break;
            }
        }
        
        if (salir == false) {
            char continuar = 'n';

            while(true) {
                system("cls");
                cout << "No se encontro el libro o autor que buscas. Desea continuar? s/n ";
                cin >> continuar;

                if (continuar == 's' || continuar == 'S') {
                    break;
                } else if (continuar == 'n' || continuar == 'N') {
                    salir = true;
                    break;
                }
            }
        }
    }
   
    return 0;
}