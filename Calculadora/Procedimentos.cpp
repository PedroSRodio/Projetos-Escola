#include<iostream>
#include<locale.h>

using namespace std;

float add(){
    setlocale(LC_ALL,"Portuguese");
    float n1, n2, r;
    cout<<"Escolha o primeiro número da soma: \n";
    cin>> n1;
    cout<<"Escolha o segundo número da soma: \n";
    cin>> n2;
    r = n1 + n2 ;
    cout<<"O resultado da soma é: "<<r <<"\n";
}
float sub(){
    setlocale(LC_ALL,"Portuguese");
    float n1, n2, r;
    cout<<"Escolha o primeiro número da subtração: \n";
    cin>> n1;
    cout<<"Escolha o segundo número da subtração: \n";
    cin>> n2;
    r = n1 - n2 ;
    cout<<"O resultado da subtração é: "<<r <<"\n";
}
float mult(){
    setlocale(LC_ALL,"Portuguese");
    float n1, n2, r;
    cout<<"Escolha o primeiro número da multiplicação: \n";
    cin>> n1;
    cout<<"Escolha o segundo número da multiplicação: \n";
    cin>> n2;
    r = n1 * n2 ;
    cout<<"O resultado da multiplicação é: "<<r <<"\n";
}
float div(){
    setlocale(LC_ALL,"Portuguese");
    float n1, n2, r;
    cout<<"Escolha o primeiro número da divisão: \n";
    cin>> n1;
    cout<<"Escolha o segundo número da divisão: \n";
    cin>> n2;
    r = n1 / n2 ;
    cout<<"O resultado da divisão é: "<<r <<"\n";
}
float media(){
    setlocale(LC_ALL,"Portuguese");
    float n1, n2, r;
    cout<<"Escolha o primeiro número da média: \n";
    cin>> n1;
    cout<<"Escolha o segundo número da média: \n";
    cin>> n2;
    r = (n1 + n2)/2;
    cout<<"O resultado da média é: "<<r <<"\n";
}
float mediaP(){
    setlocale(LC_ALL,"Portuguese");
    float n1, n2, p1, p2, r;
    cout<<"Escolha o peso do primeiro valor da média: \n";
    cin>> p1;
    cout<<"Escolha o primeiro valor: \n";
    cin>> n1;
    cout<<"Escolha o peso do segundo valor: \n";
    cin>>p1;
    cout<<"Escolha o segundo valor: \n";
    cin>>n2;
    r = (n1*p1 + n2*p2)/(p1+p2);
    cout<<"O resultado da média é: "<<r <<"\n";
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    int opc;
    opc = 1;
    while(opc != 0 ){
        system("cls");
        cout<<"Qual operação você deseja realizar? \n 1-Soma \n 2-Subtração \n 3-Divisão \n 4-Multiplicação \n 5-Média(sem peso) \n 6-Média(com peso) \n 0-Sair \n";
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
                cout<<"\n Opção invalida, tente novamente \n";
                system("pause");
        }

    }
}
