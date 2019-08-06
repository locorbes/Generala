#ifndef GENERALA_H_INCLUDED
#define GENERALA_H_INCLUDED
#include <string.h>
using namespace std;
#include <conio.h>
#include "basicos.h"

void pantallaDeInicio(){
    system("mode con: cols=45 lines=35");
    system("cls");
    cout << "---------------------------------------------" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "   __    __    __     _   _  _____  _  _ " << endl;
    cout << "  |  |  |  |  |  |   | | | ||_   _|| \\| |" << endl;
    cout << "  |  |  |  |  |  |   | | | |  | |  | .` |" << endl;
	cout << "  \\  \\  |  |  /  /   | |_| |  | |  | |\\ |" << endl;
	cout << "  _\\  \\_|  |_/  /_    \\___/   |_|  |_||_|" << endl;
    cout << " |_    _    _    _|  ____ ____   ____ ____  " << endl;
    cout << "   /  / |  | \\  \\   |  __|  _ \\ / ___|  _ \\" << endl;
    cout << "  /  /  |  |  \\  \\  | |_ | |_) | |  _| |_) |" << endl;
    cout << "  |  |  |  |  |  |  |  _||  _ <| |_| |  __/ " << endl;
    cout << "  |__|  |__|  |__|  |_|  |_| \\_\\\\____|_|  " << endl << endl << endl;
    cout << "---------------------------------------------" << endl;
    cout << "------------ GENERALA ver. 1.0.0 ------------" << endl;
    cout << "------- TRABAJO PRÁCTICO LABORATORIO --------" << endl;
    cout << "----------- ALUMNO: ORBES CARLOS ------------" << endl;
    cout << "--------- PROFESORES: KLOSTER/SIMÓN ---------" << endl;
    cout << "-------------- COMISIÓN: LUNES --------------" << endl;
    cout << "--------------- TURNO: MAÑANA ---------------" << endl;
    cout << "----------------- AÑO: 2017 -----------------" << endl;
    cout << "---------------------------------------------" << endl;
    _sleep(4000);
}
void menuPrincipal(){
    system("cls");
    cout << endl;
    cout << "                  GENERALA" << endl << endl;
    cout << "            SELECCIONE UNA OPCIÓN" << endl << endl;
    cout << "---------------------------------------------" << endl << endl;
    cout << "      1 - JUEGO NUEVO PARA UN JUGADOR" << endl << endl;
    cout << "     2 - JUEGO NUEVO PARA DOS JUGADORES" << endl << endl;
    cout << "      3 - MOSTRAR PUNTUACIÓN MÁS ALTA" << endl << endl;
    cout << "           4 - SALIR DEL JUEGO" << endl << endl << endl;
    cout << "---------------------------------------------" << endl;
}
void unSoloJugador(){
    pausarPantalla();
}
void mostrarTitulo(string t, string n){
    cout << endl <<  "---------------------------------------------"  << endl;
    cout << "              " << t << n << endl;
    cout << endl <<  "---------------------------------------------"  << endl;
}
void mostrarMensaje(string m){
    cout << m << endl;
}
string registrarNombre(){
    string nombre;
    cout << endl <<  "---------------------------------------------"  << endl;
    cout << "              INGRESE SU NOMBRE" << endl;
    cout << endl <<  "---------------------------------------------"  << endl;
    cout << "              " ;
    cin >> nombre;
    return nombre;
}
void mostrarBienvenida(){
    system("cls");
    cout << endl << endl << endl;
    cout << "          BIENVENIDO A LA GENERALA!!" << endl;
    cout << endl << endl << endl;
    cout << "       PRESIONE UNA TECLA PARA INICIAR ";
}
void lanzarDados(int d[], int j){
    int i;
    srand(time(NULL));
    for(i=0;i<j;i++){
        d[i] =(rand()%6)+1;
    }
    cout << endl;
}
void relanzarDados(int d[], int c[], int j){
    int i;
    cout << endl;
    cout << endl;
    for(i=0;i<j;i++){
        if(c[i]!=0){
            d[i] =(rand()%6)+1;
        }
    }
}

void d1(int i){
    char d[5][10] = {"  ----- ", " |     |", " |  *  |", " |     |", "  ----- "};
    cout << d[i];
}
void d2(int i){
    char d[5][10] = {"  ----- ", " |    *|", " |     |", " |*    |", "  ----- "};
    cout << d[i];
}
void d3(int i){
    char d[5][10] = {"  ----- ", " |    *|", " |  *  |", " |*    |", "  ----- "};
    cout << d[i];
}
void d4(int i){
    char d[5][10] = {"  ----- ", " |*   *|", " |     |", " |*   *|", "  ----- "};
    cout << d[i];
}
void d5(int i){
    char d[5][10] = {"  ----- ", " |*   *|", " |  *  |", " |*   *|", "  ----- "};
    cout << d[i];
}
void d6(int i){
    char d[5][10] = {"  ----- ", " |*   *|", " |*   *|", " |*   *|", "  ----- "};
    cout << d[i];
}
void mostrarDados(int n1, int n2, int n3, int n4, int n5){
    int i;
    for(i=0;i<5;i++){
        cout <<"  ";
        switch(n1){
            case 1:d1(i);
            break;
            case 2:d2(i);
            break;
            case 3:d3(i);
            break;
            case 4:d4(i);
            break;
            case 5:d5(i);
            break;
            case 6:d6(i);
            break;
        }

        switch(n2){
            case 1:d1(i);
            break;
            case 2:d2(i);
            break;
            case 3:d3(i);
            break;
            case 4:d4(i);
            break;
            case 5:d5(i);
            break;
            case 6:d6(i);
            break;
        }
        switch(n3){
            case 1:d1(i);
            break;
            case 2:d2(i);
            break;
            case 3:d3(i);
            break;
            case 4:d4(i);
            break;
            case 5:d5(i);
            break;
            case 6:d6(i);
            break;
        }
        switch(n4){
            case 1:d1(i);
            break;
            case 2:d2(i);
            break;
            case 3:d3(i);
            break;
            case 4:d4(i);
            break;
            case 5:d5(i);
            break;
            case 6:d6(i);
            break;
        }
        switch(n5){
            case 1:d1(i);
            break;
            case 2:d2(i);
            break;
            case 3:d3(i);
            break;
            case 4:d4(i);
            break;
            case 5:d5(i);
            break;
            case 6:d6(i);
            break;
        }
        cout << endl;
    }
        cout << "    DADO 1  DADO 2  DADO 3  DADO 4  DADO 5" << endl << endl;
}

void mostrarTurno(string name){
    system("cls");
    cout << endl << "           ES EL TURNO DE  " << name << endl;
    cout << endl <<  "---------------------------------------------"  << endl;
    cout << "   PRESIONE UNA TECLA PARA TIRAR LOS DADOS" << endl;
    cout << endl <<  "---------------------------------------------"  << endl;
    pausarPantalla();
}
void generalaServida(){
    system("cls");
    saltoLinea(6);
    cout << "   ____ ____ _  _ ____ ____ ____ _    ____ " << endl;
    cout << "   | __ |___ |\\ | |___ |__/ |__| |    |__|" << endl;
    cout << "   |__] |___ | \\| |___ |  \\ |  | |___ |  |" << endl << endl;
    cout << "       ____ ____ ____ _  _ _ ___  ____      " << endl;
    cout << "       [__  |___ |__/ |  | | |  \\ |__|      " << endl;
    cout << "       ___] |___ |  \\  \\/  | |__/ |  |      " << endl << endl;
    cout << "      ____ ____ _  _ ____ ____ ___ ____    " << endl;
    cout << "      | __ |__| |\\ | |__| [__   |  |___    " << endl;
    cout << "      |__] |  | | \\| |  | ___]  |  |___    " << endl << endl;
    pausarPantalla();
}
bool verificarGenerala(int v[]){
    int i, cont=0;
    bool b=false;
        for(i=0;i<4;i++){
            if(v[i]==v[i+1]){
                cont++;
                 }
        }
            if(cont==4){
                b=true;
              }
        return b;
    }
bool cambiarDado(int ver[]){
    bool verc, f=false;
    int i, j, n, v, cant;
    for(v=0;v<5;v++){
        ver[v]=0;
    }

    cout << endl << "    ¿CUANTOS DADOS VOLVERÁ A TIRAR?  : ";
    cin >> cant;
        if(cant==0){
            cout << endl;
            cout << "      HA DECIDIDO NO CAMBIAR DADOS";
            cout << endl;
            f=true;
            return f;
            }else{
                while(cant<0||cant>5){
                    cout << endl;
                    cout << "        CANTIDAD INCORRECTA DE DADOS" << endl << endl;
                    cout << "    ¿CUANTOS DADOS VOLVERÁ A TIRAR?  : ";
                    cin >> cant;
                }

                for(i=0;i<5;i++){
                }
                for(i=0;i<cant;i++){
                verc = false;
                cout << "    INGRESE EL NUMERO DE DADO A TIRAR: ";
                cin >> n;
                    for(j=0;j<5;j++){
                        if(ver[j]==n){
                            verc=true;
                        }
                    }
                    if(n>0&&n<6&&verc==false){
                        ver[n-1]=n;
                    }else{
                        cout << endl;
                        cout << "               NUMERO ERRONEO" << endl;
                        cout << endl;
                        i--;
                    }
                }
            }
            return f;
}
int calcularJugada(bool p, int n, int v[]){
    int i, c, cont=0, cont2=0, cont3=0, cont4=0, val1=0, val2=0, puntos=0;
    bool b=false, w=true, f2=false, f3=false, f4=false;
    while(w==true){
        if(n<=6&&n>0){
            for(i=0;i<5;i++){
                if(v[i]==n){
                    puntos= puntos + n;
                }
                w=false;
            }
        }else{
            switch(n){
            //POKER
            case 7:for(c=0;c<5;c++){
                        cont=0;
                        for(i=0;i<5;i++){
                            if(v[c]==v[i]){
                            cont++;
                        }
                        if(cont==4){
                            b=true;
                        }
                    }
                }
                if(b==true){
                    puntos=40;
                        if(p==true){
                            puntos=puntos+5;
                            }
                }
                w=false;
                break;
            //FULL
            case 8:
                int a, r[6];
                for(i=0;i<6;i++){
                    r[i]=0;
                }
                for(i=0;i<5;i++){
                    a=v[i];
                    r[a-1]++;
                }
                for(i=0;i<6;i++){
                    if(r[i]==2){
                        f2=true;
                    }
                    if(r[i]==3){
                        f3=true;
                    }
                }
                if(f2==true&&f3==true){
                    puntos=30;
                        if(p==true){
                            puntos=puntos+5;
                        }
                    }
                w=false;
            break;
            //ESCALERA
            case 9: int aux, o[6];
                for(i=0;i<6;i++){
                    o[i]=0;
                }
                for(i=0;i<5;i++){
                    aux=v[i];
                    o[aux-1]=aux;
                }
                for(i=0;i<6;i++){
                    if(o[i]==0){
                    cont++;
                    }
                }
                if(cont==1){
                    if(o[0]==0||o[5]==0){
                    puntos=20;
                        if(p==true){
                            puntos=puntos+5;
                        }
                    }
                }
            w=false;
            break;
            //GENERALA
            case 10:for(i=0;i<4;i++){
                       if(v[i]==v[i+1]){
                          cont++;
                        }
                        if(cont==4){
                            b=true;
                        }
                    }
                if(b==true){
                    puntos=60;
                }
                w=false;
            break;
            default: cout << "OPCION INCORRECTA. SELECCIONE NUEVAMENTE" << endl;
                     cin >> n;
            break;
            }
        }
    }
    return puntos;
}
void sinPuntajes(){
    saltoLinea(5);
    cout << "--------------------------------------------";
    saltoLinea(6);
    cout << "       NO SE HAN REGISTRADO PUNTAJES";
    saltoLinea(6);
    cout << "--------------------------------------------";
    saltoLinea(5);
}
void mostrarOpciones(bool t, bool l[], int v[]){
    int i, p=0;
    cout << endl;
    cout << "       #| CATEGORÍA | ESTADO | PUNTOS" << endl;
    cout << "      -------------------------------" << endl;
    for(i=1;i<=11;i++){
        switch(i){
            case 1:
            p=calcularJugada(t,i,v);
            cout << "      " << i << " | UNO       | ";
            if(l[i-1]==true){
                cout << "LIBRE  |   ";
            }else{
                cout << "USADO  |   ";
            }
            cout << p << endl;
            break;
            case 2:
            p=calcularJugada(t,i,v);
            cout << "      "  << i << " | DOS       | ";
            if(l[i-1]==true){
                cout << "LIBRE  |   ";
            }else{
                cout << "USADO  |   ";
            }
            cout << p << endl;
            break;
            case 3:
            p=calcularJugada(t,i,v);
            cout << "      "  << i << " | TRES      | ";
            if(l[i-1]==true){
                cout << "LIBRE  |   ";
            }else{
                cout << "USADO  |   ";
            }
            cout << p << endl;
            break;
            case 4:
            p=calcularJugada(t,i,v);
            cout << "      "  << i << " | CUATRO    | ";
            if(l[i-1]==true){
                cout << "LIBRE  |   ";
            }else{
                cout << "USADO  |   ";
            }
            cout << p << endl;
            break;
            case 5:
            p=calcularJugada(t,i,v);
            cout << "      "  << i << " | CINCO     | ";
            if(l[i-1]==true){
                cout << "LIBRE  |   ";
            }else{
                cout << "USADO  |   ";
            }
            cout << p << endl;
            break;
            case 6:
            p=calcularJugada(t,i,v);
            cout << "      "  << i << " | SEIS      | ";
            if(l[i-1]==true){
                cout << "LIBRE  |   ";
            }else{
                cout << "USADO  |   ";
            }
            cout << p << endl;
            break;
            case 7:
            p=calcularJugada(t,i,v);
            cout << "      "  << i << " | POKER     | ";
            if(l[i-1]==true){
                cout << "LIBRE  |   ";
            }else{
                cout << "USADO  |   ";
            }
            cout << p << endl;
            break;
            case 8:
            p=calcularJugada(t,i,v);
            cout << "      "  << i << " | FULL      | ";
            if(l[i-1]==true){
                cout << "LIBRE  |   ";
            }else{
                cout << "USADO  |   ";
            }
            cout << p << endl;
            break;
            case 9:
            p=calcularJugada(t,i,v);
            cout << "      "  << i << " | ESCALERA  | ";
            if(l[i-1]==true){
                cout << "LIBRE  |   ";
            }else{
                cout << "USADO  |   ";
            }
            cout << p << endl;
            break;
            case 10:
            p=calcularJugada(t,i,v);
            cout << "      "  << i << "| GENERALA  | ";
            if(l[i-1]==true){
                cout << "LIBRE  |   ";
            }else{
                cout << "USADO  |   ";
            }
            cout << p << endl;
            break;
            default:;
            break;
        }
    }
}
void guardarPuntos(int s, int p, int v[]){
    v[s-1]=p;
}
void mostrarGanador(string n){
    system("cls");
    cout << "--------------------------------------------" << endl << endl;
    cout << "               EL GANADOR ES                " << endl << endl;
    cout << "--------------------------------------------" << endl << endl;
    cout << "                  " << n << "               " << endl << endl << endl;
    cout << "--------------------------------------------" << endl << endl;
    cout << "             GRACIAS POR JUGAR!!            " << endl << endl;
    cout << "--------------------------------------------" << endl << endl;
    cout << " PRESIONE UNA TECLA PARA IR AL MENU INICIAL ";
    pausarPantalla();
}
void mostrarEmpate(){
    system("cls");
    cout << "--------------------------------------------" << endl << endl;
    cout << "             AMBOS SON GANADORES            " << endl << endl;
    cout << "--------------------------------------------" << endl << endl;
    cout << "               HUBO UN EMPATE               " << endl << endl << endl;
    cout << "--------------------------------------------" << endl << endl;
    cout << "             GRACIAS POR JUGAR!!            " << endl << endl;
    cout << "--------------------------------------------" << endl << endl;
    cout << " PRESIONE UNA TECLA PARA IR AL MENU INICIAL ";
    pausarPantalla();
}
int mostrarPuntaje(string nom, int v[]){
    system("cls");
    int i, acu=0;
    string cat[10]={"            UNO        ", "            DOS        ", "            TRES       ", "            CUATRO     ", "            CINCO      ", "            SEIS       ", "            POKER      ", "            FULL       ", "            ESCALERA   ", "            GENERALA   ",};
    cout << endl;
    cout << "--------------------------------------------" << endl << endl;
    cout << "             PLANILLA DE PUNTOS             " << endl << endl;
    cout << "--------------------------------------------" << endl << endl;
    cout << " JUGADOR: " << nom << endl << endl;
    cout << "--------------------------------------------" << endl;
    cout << "            CATEGORIA  |  PUNTOS" << endl;
    cout << "--------------------------------------------" << endl;
    for(i=0;i<10;i++){
        cout << "" << cat[i] << "|    "<< v[i] << endl;
        acu = acu + v[i];
    }
    cout << "--------------------------------------------" << endl;
    cout << "              TOTAL    |    " << acu << endl;
    cout << "--------------------------------------------" << endl << endl;
    cout << "   PARA CONTINUAR CON LA SIGUIENTE TIRADA   " << endl << endl;
    cout << "             PRESIONE UNA TECLA             " << endl;
    pausarPantalla();
    return acu;
}
int anotarSeleccion(int n, bool v[]){
    int i=0;
    bool w= false;
    if(n==0){
        while(n==0){
            cout << "  INGRESE UNA OPCIÓN QUE SE ENCUENTRE LIBRE" << endl;
            cout << "           OPCIÓN SELECCIONADA: ";
            cin >> n;
        }
    }
    while(w==false){
        if(v[n-1]==false){
            cout << "  INGRESE UNA OPCIÓN QUE SE ENCUENTRE LIBRE" << endl;
            cout << "           OPCIÓN SELECCIONADA: ";
            cin >> n;
        }else{
            v[n-1]=false;
            w=true;
        }
    }
    return n;
}
#endif // GENERALA_H_INCLUDED
