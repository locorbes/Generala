/*AUTOR: Orbes Carlos
  LEGAJO: 20930*/
#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;
#include <conio.h>
#include<time.h>
#include "includes/generala.h"
#include "includes/basicos.h"


int main(){
    setlocale(LC_CTYPE, "Spanish");
    int i, opcion, seleccion, vueltas, maxp=0, maxpuntos=0, puntos1, puntos2, total1, total2, dado[5], cambio[5], rondas1[10], rondas2[10];
    string maxpuntosnombre = "";
    bool generala, f, t1, libre1[10], libre2[10];
    string nombre1, nombre2;

    pantallaDeInicio();
    while(true){
        menuPrincipal();
        opcion=seleccionarOpcion();

        switch(opcion){
            case 1: system("cls");
                    setTrue(10, libre1);
                    setZero(10, rondas1);
                    puntos1=0;
                    total1=0;
                    vueltas=0;
                    nombre1=registrarNombre();
                    mostrarBienvenida();
                    pausarPantalla();
                    while(vueltas<10){
                        t1=true;
                        mostrarTurno(nombre1);
                        lanzarDados(dado, 5);
                        mostrarDados(dado[0],dado[1],dado[2],dado[3],dado[4]);
                        generala=verificarGenerala(dado);
                        if(generala==false){
                            for(i=1;i<=2;i++){
                                f=false;
                                switch(i){
                                    case 1:cout << endl << "         SEGUNDA TIRADA DE DADOS" << endl;
                                    break;
                                    case 2:cout << endl << "         TERCERA TIRADA DE DADOS" << endl;
                                    break;
                                }
                                f=cambiarDado(cambio);
                                if(f==false){
                                    relanzarDados(dado, cambio, 5);
                                    mostrarDados(dado[0],dado[1],dado[2],dado[3],dado[4]);
                                    cout << endl;
                                    t1=false;
                                }
                                cout << endl;
                            }
                            system("cls");
                            mostrarTitulo("ANOTADOR DE ", nombre1);
                            mostrarDados(dado[0],dado[1],dado[2],dado[3],dado[4]);
                            mostrarMensaje("   SELECCIONE DONDE VA A ANOTAR LA JUGADA");
                            mostrarOpciones(t1, libre1, dado);
                            seleccion=seleccionarOpcion();
                            seleccion=anotarSeleccion(seleccion, libre1);
                            puntos1=calcularJugada(t1, seleccion, dado);
                            guardarPuntos(seleccion, puntos1, rondas1);
                            total1=mostrarPuntaje(nombre1, rondas1);
                            vueltas++;
                        }else{
                            generalaServida();
                            total1=1000;
                            vueltas=10;
                        }
                    }
                    if(total1>=maxpuntos){
                        maxpuntos=total1;
                        maxpuntosnombre=nombre1;
                        }
                    mostrarGanador(nombre1);
                        ;

            break;
            case 2:system("cls");
                    setTrue(10, libre1);
                    setZero(10, rondas1);
                    puntos1=0;
                    total1=0;
                    setTrue(10, libre2);
                    setZero(10, rondas2);
                    puntos2=0;
                    total2=0;
                    vueltas=0;
                    saltoLinea(2);
                    mostrarMensaje("                  JUGADOR 1");
                    nombre1=registrarNombre();
                    system("cls");
                    saltoLinea(2);
                    mostrarMensaje("                  JUGADOR 2");
                    nombre2=registrarNombre();

                    while(vueltas<10){
                        t1=true;
                        mostrarTurno(nombre1);
                        lanzarDados(dado, 5);
                        mostrarDados(dado[0],dado[1],dado[2],dado[3],dado[4]);
                        generala=verificarGenerala(dado);
                        if(generala==false){
                            for(i=1;i<=2;i++){
                                f=false;
                                switch(i){
                                    case 1:cout << endl << "         SEGUNDA TIRADA DE DADOS" << endl;
                                    break;
                                    case 2:cout << endl << "         TERCERA TIRADA DE DADOS" << endl;
                                    break;
                                }
                                f=cambiarDado(cambio);
                                if(f==false){
                                    relanzarDados(dado, cambio, 5);
                                    mostrarDados(dado[0],dado[1],dado[2],dado[3],dado[4]);
                                    cout << endl;
                                    t1=false;
                                }
                                cout << endl;
                            }
                            system("cls");
                            mostrarTitulo("ANOTADOR DE ", nombre1);
                            mostrarDados(dado[0],dado[1],dado[2],dado[3],dado[4]);
                            mostrarMensaje("   SELECCIONE DONDE VA A ANOTAR LA JUGADA");
                            mostrarOpciones(t1, libre1, dado);
                            seleccion=seleccionarOpcion();
                            seleccion=anotarSeleccion(seleccion, libre1);
                            puntos1=calcularJugada(t1, seleccion, dado);
                            guardarPuntos(seleccion, puntos1, rondas1);
                            total1=mostrarPuntaje(nombre1, rondas1);
                        }else{
                            generalaServida();
                            total1=1000;
                            vueltas=10;
                        }
                        t1=true;
                        mostrarTurno(nombre2);
                        lanzarDados(dado, 5);
                        mostrarDados(dado[0],dado[1],dado[2],dado[3],dado[4]);
                        generala=verificarGenerala(dado);
                        if(generala==false){
                            for(i=1;i<=2;i++){
                                f=false;
                                switch(i){
                                    case 1:cout << endl << "         SEGUNDA TIRADA DE DADOS" << endl;
                                    break;
                                    case 2:cout << endl << "         TERCERA TIRADA DE DADOS" << endl;
                                    break;
                                }
                                f=cambiarDado(cambio);
                                if(f==false){
                                    relanzarDados(dado, cambio, 5);
                                    mostrarDados(dado[0],dado[1],dado[2],dado[3],dado[4]);
                                    cout << endl;
                                    t1=false;
                                }
                                cout << endl;
                            }
                            system("cls");
                            mostrarTitulo("ANOTADOR DE ", nombre2);
                            mostrarDados(dado[0],dado[1],dado[2],dado[3],dado[4]);
                            mostrarMensaje("   SELECCIONE DONDE VA A ANOTAR LA JUGADA");
                            mostrarOpciones(t1, libre2, dado);
                            seleccion=seleccionarOpcion();
                            seleccion=anotarSeleccion(seleccion, libre2);
                            puntos2=calcularJugada(t1, seleccion, dado);
                            guardarPuntos(seleccion, puntos2, rondas2);
                            total2=mostrarPuntaje(nombre2, rondas2);
                            vueltas++;
                        }else{
                            generalaServida();
                            total2=1000;
                            vueltas=10;
                        }
                    }
                    if(total1>total2){
                        mostrarGanador(nombre1);
                        maxpuntos=total1;
                        maxpuntosnombre=nombre1;
                        }else{
                            if(total2>total1){
                                mostrarGanador(nombre2);
                                maxpuntos=total2;
                                maxpuntosnombre=nombre2;
                            }else{
                                mostrarEmpate();
                            }
                        }
            break;
            case 3: system("cls");
                    if(maxpuntos==0){
                        sinPuntajes();
                    }else{
                        saltoLinea(2);
                        cout << "                   JUGADOR" << endl;
                        cout << "                   " << maxpuntosnombre << endl;
                        saltoLinea(5);
                        cout << "--------------------------------------------";
                        saltoLinea(6);
                        cout << "            MAXIMO PUNTAJE: "  << maxpuntos << endl;
                        saltoLinea(6);
                        cout << "--------------------------------------------";
                        saltoLinea(5);
                    }
                        cout << "   PRESIONE UNA TECLA PARA VOLVER AL MENU";
                    pausarPantalla();
            break;
            case 4:
                    cout << "     GRACIAS POR JUGAR A LA GENERALA!!" << endl << endl;
                    return 0;
            break;
            default: cout << "OPCION INCORRECTA";
            break;
        }
    }
}
