#include<iostream>
#include<locale.h>

using namespace std;

float add(){
    setlocale(LC_ALL,"Portuguese");
    float n1, n2, r;
    cout<<"Escolha o primeiro n�mero da soma: \n";
    cin>> n1;
    cout<<"Escolha o segundo n�mero da soma: \n";
    cin>> n2;
    r = n1 + n2 ;
    cout<<"O resultado da soma �: "<<r <<"\n";
}
float sub(){
    setlocale(LC_ALL,"Portuguese");
    float n1, n2, r;
    cout<<"Escolha o primeiro n�mero da subtra��o: \n";
    cin>> n1;
    cout<<"Escolha o segundo n�mero da subtra��o: \n";
    cin>> n2;
    r = n1 - n2 ;
    cout<<"O resultado da subtra��o �: "<<r <<"\n";
}
float mult(){
    setlocale(LC_ALL,"Portuguese");
    float n1, n2, r;
    cout<<"Escolha o primeiro n�mero da multiplica��o: \n";
    cin>> n1;
    cout<<"Escolha o segundo n�mero da multiplica��o: \n";
    cin>> n2;
    r = n1 * n2 ;
    cout<<"O resultado da multiplica��o �: "<<r <<"\n";
}
float div(){
    setlocale(LC_ALL,"Portuguese");
    float n1, n2, r;
    cout<<"Escolha o primeiro n�mero da divis�o: \n";
    cin>> n1;
    cout<<"Escolha o segundo n�mero da divis�o: \n";
    cin>> n2;
    r = n1 / n2 ;
    cout<<"O resultado da divis�o �: "<<r <<"\n";
}
float media(){
    setlocale(LC_ALL,"Portuguese");
    float n1, n2, r;
    cout<<"Escolha o primeiro n�mero da m�dia: \n";
    cin>> n1;
    cout<<"Escolha o segundo n�mero da m�dia: \n";
    cin>> n2;
    r = (n1 + n2)/2;
    cout<<"O resultado da m�dia �: "<<r <<"\n";
}
float mediaP(){
    setlocale(LC_ALL,"Portuguese");
    float n1, n2, p1, p2, r;
    cout<<"Escolha o peso do primeiro valor da m�dia: \n";
    cin>> p1;
    cout<<"Escolha o primeiro valor: \n";
    cin>> n1;
    cout<<"Escolha o peso do segundo valor: \n";
    cin>>p1;
    cout<<"Escolha o segundo valor: \n";
    cin>>n2;
    r = (n1*p1 + n2*p2)/(p1+p2);
    cout<<"O resultado da m�dia �: "<<r <<"\n";
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    int opc;
    opc = 1;
    while(opc != 0 ){
        system("cls");
        cout<<"Qual opera��o voc� deseja realizar? \n 1-Soma \n 2-Subtra��o \n 3-Divis�o \n 4-Multiplica��o \n 5-M�dia(sem peso) \n 6-M�dia(com peso) \n 0-Sair \n";
        cin>>opc;
        system("cls");
        switch(opc){
            case 1:
                add();
                system("pause");
            break;
            case 2:
                sub();
                system("pause");
            break;
            case 3:
                div();
                system("pause");
            break;
            case 4:
                mult();
                system("pause");
            break;
            case 5:
                media();
                system("pause");
            break;
            case 6:
                mediaP();
                system("pause");
            break;
            case 0:
                cout<<"\n brigado por utilizar a nossa calculadora! \nvolte sempre! \n";
                exit;
            break;
            default:
                cout<<"\n Op��o invalida, tente novamente \n";
                system("pause");
        }

    }
}
