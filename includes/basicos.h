#ifndef BASICOS_H_INCLUDED
#define BASICOS_H_INCLUDED

void pausarPantalla(){
    char pause;
    pause = (char)getch();
}
void saltoLinea(int n){
    int i;
    for(i=1;i<=n;i++){
        cout << endl;
    }
}
void mostrarError(){
    system("color 04");
    cout << " ERROR!!";
    pausarPantalla();
    system("cls");
    system("color 07");
}
void setTrue(int t, bool v[] ){
    int i;
    for(i=0;i<t;i++){
        v[i]=true;
    }
}
void setZero(int t, int v[] ){
    int i;
    for(i=0;i<t;i++){
        v[i]=0;
    }
}
int seleccionarOpcion(){
    int n;
    cout << endl;
    cout << "           OPCIÓN SELECCIONADA: ";
    cin >> n;
    cout << endl;
    return n;
}

#endif // BASICOS_H_INCLUDED
