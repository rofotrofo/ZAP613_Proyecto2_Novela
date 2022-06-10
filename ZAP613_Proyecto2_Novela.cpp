// ZAP613_Proyecto2_Novela.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <Windows.h>

int pais;

int Elegir()
{
    bool salir;

    do
    {
     std::cout << "\nNO = 0\nSI = 1\n";
        std::cin >> pais;

        switch (pais)
        {
        case 0:
            salir = true;
            pais = 0;
            return pais;
            break;
        case 1:
            salir = true;
            pais = 1;
            return pais;
            break;
        default:
            std::cout << "No escogiste un caracter valido, intentalo de nuevo.\n";
            salir = false;
        }
    } while (salir = true);
   
}

int main()
{
    int continuar=0;

    Sleep(500);
    std::cout << "Desde las 3pm estas solo en la cabania que rentaste con tus amigos en el bosque.\n";
    Sleep(4000);
    std::cout << "Son las 10pm.\n";
    Sleep(1000);
    std::cout << "Todos tus amigos te abandonaron, o al menos eso crees.\n";
    Sleep(2000);
    std::cout << "Tu objetivo es sobrevivir la noche, para buscar ayuda al amanecer.\n";
    Sleep(2050);
    std::cout << "\nPresiona 0 si la respuesta a la pregunta es NO\nPresiona 1 si la respuesta a la pregunta es SI\n";
    std::cout << "Una vez que hayas presionado tu respuesta, presiona ENTER para continuar tu camino.\n\n";
    system("pause");

    do
    {

        std::cout << "\nComienzas a sentir que tu estomago grunie. Tienes hambre y no queda nada de comida dentro de los gabinetes de la cocina.\n";
        Sleep(2500);
        std::cout << "Piensas en salir, pero no sabes lo que pueda haber ahi afuera. \n";
        Sleep(1500);
        std::cout << "Sales?\n";
        Sleep(1500);
        Elegir();
        if (pais == 1) {
            Sleep(500);
            std::cout << "Abres la puerta de la cabania, y ves que, efectivamente, el bosque esta totalemnte oscuro. No puedes ver mas alla de 3 metros\n";
            Sleep(2000);
            std::cout << "Recuerdas haber visto una linterna encima del cofre del carro abandonado, esta cerca.\n";
            Sleep(1500);
            std::cout << "Vas por ella?\n";
            Sleep(1500);
            Elegir();
            if (pais == 1) {
                Sleep(1000);
                std::cout << "Corres a toda velocidad, pero escuchas mas pasos ademas de los tuyos.\n";
                Sleep(1500);
                std::cout << "Llegas a la linterna y la enciendes, pero no ves a nadie por donde estas, quieres investigar?\n";
                Sleep(2000);
                Elegir();
                if (pais == 1) {
                    Sleep(1000);
                    std::cout << "Encuentras huellas en el suelo lleno de hojas secas, pero no son de humano.\n";
                    Sleep(2000);
                    std::cout << "Decides seguirlas, cuando de repente\n";
                    Sleep(1500);
                    std::cout << "ERES ATACADO POR UN OSO ZOMBIE ESPACIAL.\n";
                    Sleep(1500);
                    std::cout << "\nMUERES\n";
                    Sleep(1500);
                    std::cout << "\nFin\n";
                    std::cout << "Si quieres repetir la historia presiona 1, si quieres salir presiona cuaquier otro numero.\n\n";
                    std::cin >> continuar;
                    
                }
                else
                {
                    Sleep(1000);
                    std::cout << "Regresas aprisa a la cabania, y te encierras en tu cuarto.\n";
                    Sleep(300);
                    std::cout << "Decides tapar la puerta de acceso con todo lo que sea pesado, y la ventana tambien.\n";
                    Sleep(3500);
                    std::cout << "Dejas un hueco en la ventana para poder ver cuando salga el sol y poder salir.\n";
                    Sleep(300);
                    std::cout << "Duermes hasta el amanecer\n";
                    Sleep(1000);
                    std::cout << "\nVIVES\n";
                    Sleep(1500);
                    std::cout << "\nFin\n";
                    std::cout << "Si quieres repetir la historia presiona 1, si quieres salir presiona cuaquier otro numero.\n\n";
                    std::cin >> continuar;
                    
                }
            }
            else
            {
                Sleep(1000);
                std::cout << "Regresas a toda velocidad a la cabania, pero escuchas mas pasos ademas de los tuyos.\n";
                Sleep(3500);
                std::cout << "Cierras la puerta, pero algo comienza a rasguniarla.\n";
                Sleep(200);
                std::cout << "Abres la puerta?\n";
                Sleep(1500);
                Elegir();
                if (pais == 1) {
                    Sleep(1000);
                    std::cout << "Al abrirla, la puerta te empuja con una fuerza inmensa, quedas inconsciente.\n";
                    Sleep(3000);
                    std::cout << "Eres atacado por un oso zombie espacial.\n";
                    Sleep(1500);
                    std::cout << "La neta esta muerte te la buscaste, como por que abririas la puerta que pedo jajaj que pendejo.\n";
                    Sleep(4000);
                    std::cout << "\nMUERES\n";
                    Sleep(1500);
                    std::cout << "\nFin\n";
                    std::cout << "Si quieres repetir la historia presiona 1, si quieres salir presiona cuaquier otro numero.\n\n";
                    std::cin >> continuar;
                    
                }
                else
                {
                    Sleep(1000);
                    std::cout << "No abres la puerta y te encierras en tu cuarto.\n";
                    Sleep(2500);
                    std::cout << "Decides tapar la puerta de acceso con todo lo que sea pesado, y la ventana tambien.\n";
                    Sleep(3500);
                    std::cout << "Dejas un hueco en la ventana para poder ver cuando salga el sol y poder salir.\n";
                    Sleep(3000);
                    std::cout << "Duermes hasta el amanecer\n";
                    Sleep(1500);
                    std::cout << "\nVIVES\n";
                    Sleep(1500);
                    std::cout << "\nFin\n";
                    std::cout << "Si quieres repetir la historia presiona 1, si quieres salir presiona cuaquier otro numero.\n\n";
                    std::cin >> continuar;
                    
                }
            }
        }
        //no---------------------------------------------------------------------------------------------------------------------------------------------------------
        else {
            Sleep(1000);
            std::cout << "Decides quedarte dentro de la cabania.\n";
            Sleep(1500);
            std::cout << "Pasan los minutos y sigues teniendo hambre, pero no hay nada que comer.\n";
            Sleep(2000);
            std::cout << "A menos que te comas a ti mismo. Un dedo no hara diferencai en tu vida, y lo puedes culpar en algun accidente.\n";
            Sleep(3000);
            std::cout << "Te comes tu propio dedo?\n";
            Sleep(1500);
            Elegir();
            if (pais == 1) {
                Sleep(1000);
                std::cout << "Te cortas el dedo con un cuchillo que encontraste. Pero comienza a sangrar mas de lo que esperabas.\n";
                Sleep(4000);
                std::cout << "Te aplicas un torniquete?\n";
                Sleep(1500);
                Elegir();
                if (pais == 1) {
                    Sleep(1000);
                    std::cout << "Aplicas el pequeño torniquete.\n";
                    Sleep(2500);
                    std::cout << "Te comes tu dedo y quedas satisfecho.\n";
                    Sleep(2500);
                    std::cout << "Duermes hasta el amanecer\n";
                    Sleep(2000);
                    std::cout << "\nVIVES\n";
                    Sleep(1500);
                    std::cout << "\nFin\n";
                    std::cout << "Si quieres repetir la historia presiona 1, si quieres salir presiona cuaquier otro numero.\n\n";
                    std::cin >> continuar;
                    
                }
                else
                {
                    Sleep(1000);
                    std::cout << "No aplicas el pequeño torniquete.\n";
                    Sleep(2000);
                    std::cout << "El sangrado no para, y empiezas a escuchar como la puerta esta siendo golpeada\n";
                    Sleep(3500);
                    std::cout << "Te acercas a intentar ver que esta pasando\n";
                    Sleep(2000);
                    std::cout << "Al acercarte, la puerta te empuja con una fuerza inmensa, quedas inconsciente.\n";
                    Sleep(3500);
                    std::cout << "Eres atacado por un oso zombie espacial.\n";
                    Sleep(12500);
                    std::cout << "\nMUERES\n";
                    Sleep(1500);
                    std::cout << "\nFin\n";
                    std::cout << "Si quieres repetir la historia presiona 1, si quieres salir presiona cuaquier otro numero.\n\n";
                    std::cin >> continuar;
                    
                }
            }
            else
            {
                Sleep(1000);
                std::cout << "Eres inteligente, quien se comeria su propio deod por un hambre de 7 horas?\n";
                Sleep(3000);
                std::cout << "Deseas dormir?\n";
                Sleep(1500);
                Elegir();
                if (pais == 1) {
                    Sleep(1000);
                    std::cout << "Duermes hasta el amanecer\n";
                    Sleep(1500);
                    std::cout << "\nVIVES\n";
                    Sleep(1500);
                    std::cout << "\nFin\n";
                    std::cout << "Si quieres repetir la historia presiona 1, si quieres salir presiona cuaquier otro numero.\n\n";
                    std::cin >> continuar;
                    
                }
                else
                {
                    Sleep(1000);
                    std::cout << "Te quedas despierto hasta el amanecer.\n";
                    Sleep(1500);
                    std::cout << "\nVIVES\n";
                    Sleep(1500);
                    std::cout << "\nFin\n";
                    std::cout << "Si quieres repetir la historia presiona 1, si quieres salir presiona cuaquier otro numero.\n\n";
                    std::cin >> continuar;
                    
                }
            }
        }
    } while (continuar == 1);
}