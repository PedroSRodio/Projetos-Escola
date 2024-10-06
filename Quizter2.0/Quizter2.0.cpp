#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

// Declara��o das fun��es
void menuBaseComum(int *acertos, int *erros);
void menuBaseEspecifica(int *acertos, int *erros);

// Fun��es para a Base Comum
void matematica(int *acertos, int *erros);
void ingles(int *acertos, int *erros);
void fisica(int *acertos, int *erros);
void artes(int *acertos, int *erros);
void portugues(int *acertos, int *erros);
void biologia(int *acertos, int *erros);
void quimica(int *acertos, int *erros);
void historia(int *acertos, int *erros);
void filosofia(int *acertos, int *erros);

// Fun��es para a Base Espec�fica
void TPA(int *acertos, int *erros);
void DD(int *acertos, int *erros);
void FI(int *acertos, int *erros);
void PW(int *acertos, int *erros);

// Fun��es para registrar acertos e erros
void registrarAcerto(int *acertos);
void registrarErro(int *erros);
void exibirResultados(int acertos, int erros);

int main() {
    setlocale(LC_ALL, "portuguese");
    int opc = 1;
    int acertos = 0;
    int erros = 0;

    while (opc != 0) {
        system("cls");
        printf("=======================================================================\n");
        printf("                          ETEC DE ARA�ATUBA\n");
        printf("            T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
        printf("                            QUIZTER\n");
        printf("=======================================================================\n");
        printf("SELECIONE A GRADE CURRICULAR:\n");
        printf("1 - Base Comum\n");
        printf("2 - Base Espec�fica\n");
        printf("0 - Sair\n");
        printf("=======================================================================\n");
        scanf("%d", &opc);

        switch (opc) {
            case 1:
                menuBaseComum(&acertos, &erros);
                break;
            case 2:
                menuBaseEspecifica(&acertos, &erros);
                break;
            case 0:
                system("cls");
                printf("Obrigado por utilizar nosso Quiz!\n");
                exibirResultados(acertos, erros);
                exit(0);
            default:
                system("cls");
                printf("Alternativa inv�lida! \n");
                system("pause");
                break;
        }
    }
    return 0;
}

// Fun��o para o menu da Base Comum
void menuBaseComum(int *acertos, int *erros) {
    int opc;
    system("cls");
    printf("=======================================================================\n");
    printf("                          ETEC DE ARA�ATUBA\n");
    printf("            T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                            QUIZTER\n");
    printf("=======================================================================\n");
    printf("SELECIONE A MAT�RIA DA BASE COMUM:\n");
    printf("1 - Matem�tica\n");
    printf("2 - Ingl�s\n");
    printf("3 - F�sica\n");
    printf("4 - Artes\n");
    printf("5 - Portugu�s\n");
    printf("6 - Biologia\n");
    printf("7 - Qu�mica\n");
    printf("8 - Hist�ria\n");
    printf("9 - Filosofia\n");
    printf("0 - Voltar\n");
    printf("=======================================================================\n");
    scanf("%d", &opc);

    switch (opc) {
        case 1:
            matematica(acertos, erros);
            break;
        case 2:
            ingles(acertos, erros);
            break;
        case 3:
            fisica(acertos, erros);
            break;
        case 4:
            artes(acertos, erros);
            break;
        case 5:
            portugues(acertos, erros);
            break;
        case 6:
            biologia(acertos, erros);
            break;
        case 7:
            quimica(acertos, erros);
            break;
        case 8:
            historia(acertos, erros);
            break;
        case 9:
            filosofia(acertos, erros);
            break;
        case 0:
            system("cls");
            return; // Volta ao menu principal
        default:
            system("cls");
            printf("Alternativa inv�lida.\n");
            system("pause");
            return;
    }
}

// Fun��o para o menu da Base Espec�fica
void menuBaseEspecifica(int *acertos, int *erros) {
    int opc;
    system("cls");
    printf("=======================================================================\n");
    printf("                          ETEC DE ARA�ATUBA\n");
    printf("            T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                            QUIZTER\n");
    printf("=======================================================================\n");
    printf("SELECIONE A MAT�RIA DA BASE ESPEC�FICA:\n");
    printf("1 - TPA (T�cnica de Programa��o e Algoritmo)\n");
    printf("2 - PW (Programa��o Web)\n");
    printf("3 - DD (Design Digital)\n");
    printf("4 - FI (Fundamentos da Inform�tica)\n");
    printf("0 - Voltar\n");
    printf("=======================================================================\n");
    scanf("%d", &opc);

    switch (opc) {
        case 1:
            TPA(acertos, erros);
            break;
        case 2:
            PW(acertos, erros);
            break;
        case 3:
            DD(acertos, erros);
            break;
        case 4:
            FI(acertos, erros);
            break;
        case 0:
            system("cls");
            return; // Volta ao menu principal
        default:
            system("cls");
            printf("Alternativa inv�lida.\n");
            system("pause");
            return;
    }
}

// Fun��es para as disciplinas da Base Comum
void matematica(int *acertos, int *erros) {
    int opc;
    system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          MAT - QUEST�O 1\n");
printf("=======================================================================\n");
printf("       Em um plano cartesiano o nome dado aos eixos X e Y s�o ");
printf("                         respectivamente:\n");
printf("=======================================================================\n");
printf("       1 - abscissas e ordenadas\n");
printf("       2 - ordenadas e abscissas\n");
printf("       3 - dom�nio e contradom�nio\n");
printf("       4 - imagem e fun��o\n");
printf("       0 - Sair\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 1:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 2:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          MAT - QUEST�O 2\n");
printf("=======================================================================\n");
printf("       Marque a alternativa verdadeira:\n");
printf("=======================================================================\n");
printf("       1 - Um elemento do dom�nio pode ter duas imagens\n");
printf("       2 - Podem sobrar um ou mais elementos no conjunto de partida\n");
printf("       3 - N�o podem sobrar elementos no dom�nio\n");
printf("       4 - N�o podem sobrar elementos no conjunto de chegada\n");
printf("       0 - Sair\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 3:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          MAT - QUEST�O 3\n");
printf("=======================================================================\n");
printf("       Em um plano cartesiano:\n");
printf("=======================================================================\n");
printf("       1 - O primeiro quadrante possui X e Y negativos\n");
printf("       2 - O terceiro quadrante possui X negativo e Y positivo\n");
printf("       3 - O segundo quadrante possui X negativo e Y positivo\n");
printf("       4 - O quarto quadrante possui X e Y positivos\n");
printf("       0 - Sair\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 3:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          MAT - QUEST�O 4\n");
printf("=======================================================================\n");
printf("       Para representar conjuntos pode-se usar o diagrama de:\n");
printf("=======================================================================\n");
printf("       1 - Pit�goras\n");
printf("       2 - Venn\n");
printf("       3 - Arist�teles\n");
printf("       4 - Plat�o\n");
printf("       0 - Sair\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 2:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          MAT - QUEST�O 5\n");
printf("=======================================================================\n");
printf("       Um gr�fico de sinal tem como objetivo principal:\n");
printf("=======================================================================\n");
printf("       1 - Dizer em quais momentos a fun��o � positiva ou negativa\n");
printf("       2 - Mostrar o ponto m�ximo global e o ponto m�nimo global\n");
printf("       3 - Apontar os momentos de crescimento e decrescimento\n");
printf("       4 - Calcular a taxa m�dia de varia��o\n");
printf("       0 - Sair\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 1:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 2:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
}

void ingles(int *acertos, int *erros) {
    int opc;
    system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          IN - QUEST�O 1\n");
printf("=======================================================================\n");
printf("       Analise as afirmativas a seguir e escolha a melhor alternativa:\n");
printf("=======================================================================\n");
printf("       I- Usamos going to para indicar uma a��o futura que j� est�\n");
printf("        planejada e que com certeza ir� acontecer em um futuro pr�ximo\n");
printf("       II- Na forma afirmativa do present perfect utilizamos o auxiliar\n");
printf("       will entre o sujeito e o verbo principal\n");
printf("       III- A forma��o de frases no futuro com going to na forma \n ");
printf("       afirmativa segue a seguinte estrutura: Sujeito + verbo to be \n");
printf("       (am/are/is) + going to + verbo principal + complemento\n");
printf("       IV- O auxiliar will � utilizado para indicar uma ideia de futuro\n");
printf("       que pode expressar incerteza ou ser decidida no momento da fala\n");
printf("       V- Os auxiliares do e does tamb�m s�o utilizados para o futuro \n");
printf("       com going to\n");
printf("=======================================================================\n");
printf("       1 - est�o corretas somente I e IV\n");
printf("       2 - a afirmativa III � a �nica correta\n");
printf("       3 - as afirmativas II e V s�o as �nicas incorretas\n");
printf("       4 - somente as afirmativas III e IV est�o corretas\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 3:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          IN - QUEST�O 2\n");
printf("=======================================================================\n");
printf("       No simple present usamos os auxiliares:\n");
printf("=======================================================================\n");
printf("       1 - was / were\n");
printf("       2 - do / does\n");
printf("       3 - did\n");
printf("       4 - will\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 2:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          IN - QUEST�O 3\n");
printf("=======================================================================\n");
printf("       Qual das afirmativas a seguir � a estrutura correta da forma interrogativa do futuro com going to:\n");
printf("=======================================================================\n");
printf("       1 - am/are/is + sujeito + going to + verbo principal + complemento\n");
printf("       2 - sujeito + verbo to be (am/are/is) + going to + verbo principal + complemento\n");
printf("       3 - sujeito + will + not + verbo to + complemento\n");
printf("       4 - will + sujeito + verbo principal + complemento\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
  switch (opc) {
        case 1:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 2:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          IN - QUEST�O 4\n");
printf("=======================================================================\n");
printf("       Quais foram os tempos verbais estudados at� agora?\n");
printf("=======================================================================\n");
printf("       1 - simple present / simple past / simple future (will / going to)\n");
printf("       2 - future perfect / simple presente / simple past\n");
printf("       3 - past continuous / simple future (will / going to) / simple present\n");
printf("       4 - present perfect continuous / simple future / simple past\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 1:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 2:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          IN - QUEST�O 5\n");
printf("=======================================================================\n");
printf("       S�o algumas question words:\n");
printf("=======================================================================\n");
printf("       1 - verbos regulares e irregulares\n");
printf("       2 - what, which, who, whose\n");
printf("       3 - whom, when, why, because, study\n");
printf("       4 - will, going to, do, does, were, was\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 2:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
}

void fisica(int *acertos, int *erros) {
    int opc;
    system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          FIS - QUEST�O 1\n");
printf("=======================================================================\n");
printf("       Marque a alternativa que melhor defina um vetor:\n");
printf("=======================================================================\n");
printf("       1 - vetor � a mesma coisa que um segmento de reta\n");
printf("       2 - um vetor possui m�dulo, sentido e dire��o\n");
printf("       3 - um vetor � uma grandeza vetorial\n");
printf("       4 - � um segmento de reta geometricamente orientado que possui\n");
printf("       m�dulo, dire��o e sentido\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 4:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 3:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          FIS - QUEST�O 2\n");
printf("=======================================================================\n");
printf("       Quando usamos a equa��o de Torricelli?\n");
printf("=======================================================================\n");
printf("       1 - quando � preciso encontrar a posi��o e n�o temos a \n ");
printf("          velocidade\n");
printf("       2 - quando � necess�rio encontrar a velocidade e n�o temos a \n");
printf("       acelera��o\n");
printf("       3 - em situa��es em que n�o temos tempo e o exerc�cio n�o pede \n");
printf("       o tempo\n");
printf("       4 - usamos em casos que � necess�rio encontrar a acelera��o sem\n");
printf("       ter o m�dulo\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 3:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          FIS - QUEST�O 3\n");
printf("=======================================================================\n");
printf("       Complete a frase a seguir: ___________ significa ____________ \n");
printf("           um corpo que se encontra a uma determinada___________.\n");
printf("       Assinale a alternativa que melhor preencha as lacunas:\n");
printf("=======================================================================\n");
printf("       1 - queda-livre, parar, altura\n");
printf("       2 - queda-livre, abandonar, altura\n");
printf("       3 - queda-livre, largar, dist�ncia\n");
printf("       4 - lan�amento horizontal, empurrar, longitude\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 2:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          FIS - QUEST�O 4\n");
printf("=======================================================================\n");
printf("       O que a cinem�tica estuda?\n");
printf("=======================================================================\n");
printf("       1 - o movimento\n");
printf("       2 - a gravidade\n");
printf("       3 - a acelera��o\n");
printf("       4 - o tempo\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 1:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 2:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          FIS - QUEST�O 5\n");
printf("=======================================================================\n");
printf("       Complete a frase: Para fazer a convers�o de m/s para km/h � \n");
printf("       necess�rio_________ por 3,6.\n");
printf("=======================================================================\n");
printf("       1 - fatorar\n");
printf("       2 - dividir\n");
printf("       3 - multiplicar\n");
printf("       4 - subtrair\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 3:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
}

void artes(int *acertos, int *erros) {
    int opc;
    system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          AR - QUEST�O 1\n");
printf("=======================================================================\n");
printf("       Quais s�o as cores prim�rias?\n");
printf("=======================================================================\n");
printf("       1 - vermelho, azul, verde\n");
printf("       2 - vermelho, azul, amarelo\n");
printf("       3 - verde, azul, amarelo\n");
printf("       4 - laranja, verde, azul\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 2:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          AR - QUEST�O 2\n");
printf("=======================================================================\n");
printf("       Quem � autor(a) de: O Menino Maluquinho?\n");
printf("=======================================================================\n");
printf("       1 - Paulo Freire\n");
printf("       2 - Cec�lia Meireles\n");
printf("       3 - Ziraldo\n");
printf("       4 - Mario Quintana\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 3:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          AR - QUEST�O 3\n");
printf("=======================================================================\n");
printf("       Quem foi Cora Coralina?\n");
printf("=======================================================================\n");
printf("       1 - irm� de Cec�lia Meireles\n");
printf("       2 - m�e de Jorge de Lima\n");
printf("       3 - poetisa brasileira\n");
printf("       4 - escritora de romance\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 3:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          AR - QUEST�O 4\n");
printf("=======================================================================\n");
printf("       Frida Kahlo era:\n");
printf("=======================================================================\n");
printf("       1 - mexicana\n");
printf("       2 - espanhola\n");
printf("       3 - argentina\n");
printf("       4 - brasileira\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 1:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 4:
        case 2:
        case 3:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          AR - QUEST�O 5\n");
printf("=======================================================================\n");
printf("       Qual desses poemas � de Manuel Bandeira?\n");
printf("=======================================================================\n");
printf("       1 - A Triste Partida\n");
printf("       2 - Seiscentos e Sessenta e Seis\n");
printf("       3 - Baladas para el-rei\n");
printf("       4 - Os sapos e Vou-me embora pra Pas�rgada\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 4:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 3:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
}

void portugues(int *acertos, int *erros) {
    int opc;
    system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          LP - QUEST�O 1\n");
printf("=======================================================================\n");
printf("       Qual a origem do tipo de texto Serm�o?\n");
printf("=======================================================================\n");
printf("       1 - Religiosa\n");
printf("       2 - Filos�fica\n");
printf("       3 - Barroca\n");
printf("       4 - Surgiu no Romantismo\n");
printf("       0 - Sair\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 1:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 2:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          LP - QUEST�O 2\n");
printf("=======================================================================\n");
printf("       Assinale a alternativa incorreta:\n");
printf("=======================================================================\n");
printf("       1 - Uma carta apresenta um destinat�rio\n");
printf("       2 - Uma carta pode ou n�o apresentar uma assinatura do remetente\n");
printf("       3 - Cartas n�o precisam de contexto hist�rico para\n  ");
printf("                   serem compreendidas\n");
printf("       4 - Uma carta precisa ser datada\n");
printf("       0 - Sair\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 3:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          LP - QUEST�O 3\n");
printf("=======================================================================\n");
printf("       Os (As) autor (es) (as) das obras: A Hora da Estrela, Vidas \n");
printf("       Secas e Poemas Negros s�o respectivamente:\n");
printf("=======================================================================\n");
printf("       1 - Cec�lia Meireles, Lewis Carroll, Jorge de Lima\n");
printf("       2 - Clarice Lispector, Graciliano Ramos, Jorge de Lima\n");
printf("       3 - Jorge de Lima, Padre Ant�nio Vieira, Antoine de Saint-Exup�ry\n");
printf("       4 - Clarice Lispector, Manuel Bandeira, Graciliano Ramos\n");
printf("       0 - Sair\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 2:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          LP - QUEST�O 4\n");
printf("=======================================================================\n");
printf("       Pero Vaz de Caminha enviou a Carta relatando o descobrimento ");
printf("                              para o rei:\n");
printf("=======================================================================\n");
printf("       1 - D. Miguel II\n");
printf("       2 - D. Jo�o IV\n");
printf("       3 - D. Manuel II\n");
printf("       4 - D. Manuel I\n");
printf("       0 - Sair\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 4:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 3:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          LP - QUEST�O 5\n");
printf("=======================================================================\n");
printf("       Qual foi o primeiro nome escolhido pelos portugueses para o ");
printf("                                  Brasil?\n");
printf("=======================================================================\n");
printf("       1 - Ilha de Vera Cruz\n");
printf("       2 - Terra de Santa Cruz\n");
printf("       3 - Terra de Vera Cruz\n");
printf("       4 - Ilha de Santa Cruz\n");
printf("       0 - Sair\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 1:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 2:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
}

void biologia(int *acertos, int *erros) {
   int opc;
   system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          BI - QUEST�O 1\n");
printf("=======================================================================\n");
printf("       O que � teia alimentar?\n");
printf("=======================================================================\n");
printf("       1 - o ambiente f�sico onde uma esp�cie vive\n");
printf("       2 - a intera��o da comunidade com o meio ambiente\n");
printf("       3 - comunidade com cadeias alimentares interligadas\n");
printf("       4 - conjunto de popula��o que habitam a mesma �rea\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 3:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          BI - QUEST�O 2\n");
printf("=======================================================================\n");
printf("       Quais s�o os 3 tipos de pir�mides ecol�gicas?\n");
printf("=======================================================================\n");
printf("       1 - n�mero, biomassa, energia\n");
printf("       2 - biomassa, natural, invertida\n");
printf("       3 - crescente, decrescente, inteira\n");
printf("       4 - baixa, m�dia, alta\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 1:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 2:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          BI - QUEST�O 3\n");
printf("=======================================================================\n");
printf("       Quem s�o a base da cadeia alimentar?\n");
printf("=======================================================================\n");
printf("       1 - consumidores terci�rios\n");
printf("       2 - consumidores prim�rios\n");
printf("       3 - consumidores secund�rios\n");
printf("       4 - produtores\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 4:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 3:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          BI - QUEST�O 4\n");
printf("=======================================================================\n");
printf("       O que � uma a��o antr�pica?\n");
printf("=======================================================================\n");
printf("       1 - qualquer a��o da natureza que pode beneficiar ou prejudicar\n");
printf("          os ciclos biogeoqu�micos\n");
printf("       2 - qualquer a��o do homem que beneficie a natureza\n");
printf("       3 - a��es feitas pelo homem no meio que prejudicam direta ou\n");
printf("         indiretamente os ciclos biogeoqu�micos\n");
printf("       4 - � uma a��o destruidora feita pela pr�pria natureza\n");
printf("         prejudicando a fauna e flora, exemplo: deslizamento\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 3:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          BI - QUEST�O 5\n");
printf("=======================================================================\n");
printf("       Qual ciclo biogeoqu�mico que ocorre o processo de nitrifica��o?\n");
printf("=======================================================================\n");
printf("       1 - ciclo do f�sforo\n");
printf("       2 - ciclo do nitrog�nio\n");
printf("       3 - ciclo do carbono\n");
printf("       4 - ciclo do oxig�nio\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 2:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
}

void quimica(int *acertos, int *erros) {
    int opc;
   system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          QU - QUEST�O 1\n");
printf("=======================================================================\n");
printf("       As liga��es covalentes s�o formadas entre:\n");
printf("=======================================================================\n");
printf("       1 - metais\n");
printf("       2 - c�lulas\n");
printf("       3 - ametais\n");
printf("       4 - pr�tons\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 3:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          QU - QUEST�O 2\n");
printf("=======================================================================\n");
printf("       Qual � o elemento mais eletronegativo da tabela peri�dica?\n");
printf("=======================================================================\n");
printf("       1 - fl�or\n");
printf("       2 - cloro\n");
printf("       3 - carbono\n");
printf("       4 - oxig�nio\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 1:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 3:
        case 2:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          QU - QUEST�O 3\n");
printf("=======================================================================\n");
printf("       A for�a fraca tamb�m pode ser conhecida como:\n");
printf("=======================================================================\n");
printf("       1 - Dipolo Dipolo\n");
printf("       2 - For�as de London\n");
printf("       3 - Liga��o de Hidrog�nio\n");
printf("       4 - Dipolo Permanente\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 2:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          QU - QUEST�O 4\n");
printf("=======================================================================\n");
printf("      De acordo com a regra do octeto quantos el�trons o �tomo precisa\n");
printf("         ter na camada de val�ncia para alcan�ar a estabilidade?\n");
printf("=======================================================================\n");
printf("       1 - 8\n");
printf("       2 - 3\n");
printf("       3 - 5\n");
printf("       4 - 7\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 1:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 2:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          QU - QUEST�O 5\n");
printf("=======================================================================\n");
printf("       Quais s�o os subn�veis de energia?\n");
printf("=======================================================================\n");
printf("       1 - d, e, f, g\n");
printf("       2 - a, g, k, r\n");
printf("       3 - w, x, y, z\n");
printf("       4 - s, p, d, f\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 4:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 3:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
}

void historia(int *acertos, int *erros) {
    int opc;
    system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          HI - QUEST�O 1\n");
printf("=======================================================================\n");
printf("       Quais s�o os per�odos da Gr�cia Antiga?\n");
printf("=======================================================================\n");
printf("       1 - Paleol�tico, Neol�tico, Idade dos Metais, Idade M�dia, \n");
printf("            Idade Moderna\n");
printf("       2 - Helen�stico, Cl�ssico, Arcaico, Hom�rico, Pr�-Hom�rico\n");
printf("       3 - Pr�-Helen�stico, Helen�stico, Arcaico, Cl�ssico, Hom�rico\n");
printf("       4 - Pr�-Hom�rico, Hom�rico, Arcaico, Cl�ssico, Helen�stico\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 4:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 3:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          HI - QUEST�O 2\n");
printf("=======================================================================\n");
printf("       Quem era P�ricles?\n");
printf("=======================================================================\n");
printf("       1 - era um apoiador de Homero\n");
printf("       2 - o rei de Esparta\n");
printf("       3 - o pai da filosofia moderna\n");
printf("       4 - o pai da democracia\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 4:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 3:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          HI - QUEST�O 3\n");
printf("=======================================================================\n");
printf("       Em qual cidade surgiu a democracia?\n");
printf("=======================================================================\n");
printf("       1 - Atenas\n");
printf("       2 - Gr�cia\n");
printf("       3 - Esparta\n");
printf("       4 - Troia\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 1:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 2:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          HI - QUEST�O 4\n");
printf("=======================================================================\n");
printf("       Quem foi o educador de Alexandre o Grande?\n");
printf("=======================================================================\n");
printf("       1 - Plat�o\n");
printf("       2 - Arist�teles\n");
printf("       3 - S�crates\n");
printf("       4 - P�ricles\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 2:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          HI - QUEST�O 5\n");
printf("=======================================================================\n");
printf("       O que era a �gora?\n");
printf("=======================================================================\n");
printf("       1 - pra�a onde as ideias eram debatidas\n");
printf("       2 - eram os Genos\n");
printf("       3 - eram as capitais das P�lis\n");
printf("       4 - �gora vem do latim e quer dizer cidadania\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 1:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 2:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
}

void filosofia(int *acertos, int *erros) {
    int opc;
    system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          FI - QUEST�O 1\n");
printf("=======================================================================\n");
printf("       Quando se inicia o per�odo helen�stico?\n");
printf("=======================================================================\n");
printf("       1 - quando Alexandre o Grande invade a Gr�cia, final do s�culo VI\n");
printf("       2 - se inicia ap�s a morte de Plat�o e Arist�teles\n");
printf("       3 - ap�s o per�odo pr�-hom�rico\n");
printf("       4 - antes do per�odo arcaico\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 4:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 3:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          FI - QUEST�O 2\n");
printf("=======================================================================\n");
printf("       Complete a frase: os helenistas buscavam a ___________");
printf("        (imperturbabilidade da alma)\n");
printf("=======================================================================\n");
printf("       1 - apatheia\n");
printf("       2 - anadeia\n");
printf("       3 - ataraxia\n");
printf("       4 - natureza racional\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 4:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 3:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          FI - QUEST�O 3\n");
printf("=======================================================================\n");
printf("       Para Epicuro o prazer precisava ser:\n");
printf("=======================================================================\n");
printf("       1 - natural\n");
printf("       2 - justo\n");
printf("       3 - racional\n");
printf("       4 - impuro\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 1:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 2:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          FI - QUEST�O 4\n");
printf("=======================================================================\n");
printf("       Quais s�o as 3 grandes inven��es que contribu�ram para o avan�o \n");
printf("        da ci�ncia?\n");
printf("=======================================================================\n");
printf("       1 - �culos, cartografia, escrita\n");
printf("       2 - imprensa, p�lvora, b�ssola\n");
printf("       3 - fogo, fala, escrita\n");
printf("       4 - universidades, carv�o, m�quina a vapor\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 2:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARA�ATUBA\n");
printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          FI - QUEST�O 5\n");
printf("=======================================================================\n");
printf("       Assinale a alternativa INCORRETA, a patr�stica defendia:\n");
printf("=======================================================================\n");
printf("       1 - teoria da ilumina��o divina\n");
printf("       2 - valoriza��o da f�\n");
printf("       3 - predestina��o\n");
printf("       4 - vis�o tomista\n");
printf("       0 - Voltar\n");
printf("=======================================================================\n");
scanf("%d", &opc);
switch (opc) {
        case 1:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 2:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
}

// Fun��es para a Base Espec�fica
void TPA(int *acertos, int *erros) {
    int opc;
    system("cls");
    printf("=======================================================================\n");
    printf("                          ETEC DE ARA�ATUBA\n");
    printf("            T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                            QUIZTER\n");
    printf("=======================================================================\n");
    printf("Quest�o 1: Quais s�o as etapas de um processamento de dados?\n");
    printf("1 - Descri��o narrativa, Fluxograma e Pseudoc�digo\n");
    printf("2 - Entrada, Processamento e Sa�da\n");
    printf("3 - Declara��o de vari�veis, Algoritmo e Fim do algoritmo\n");
    printf("4 - Literal, L�gico e Inteiro\n");
    printf("0 - Voltar\n");
    printf("=======================================================================\n");
    scanf("%d", &opc);

    switch (opc) {
        case 1:
        case 3:
        case 4:
            printf("Resposta incorreta!\n");
            registrarErro(erros);
            system("pause");
            break;
        case 2:
            printf("Resposta correta!\n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 0:
            system("cls");
            return;
        default:
            system("cls");
            printf("Alternativa inv�lida.\n");
            system("pause");
            return;
    }
    system("pause");
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARA�ATUBA\n");
    printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          TPA - QUEST�O 2\n");
    printf("=======================================================================\n");
    printf("       Quais s�o os tipos de dados j� estudados?\n");
    printf("=======================================================================\n");
    printf("       1 - Real, L�gico, Rython e HTML\n");
    printf("       2 - Java, HTML, CSS e C++\n");
    printf("       3 - Real, Literal, L�gico, Inteiro e JavaScript\n");
    printf("       4 - Real, Literal, L�gico e Inteiro\n");
    printf("       0 - Voltar\n");
    printf("=======================================================================\n");
    printf("Digite a op��o desejada: ");
    scanf("%d", &opc);

    switch (opc) {
        case 4:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 3:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;
        case 0:
            printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARA�ATUBA\n");
    printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          TPA - QUEST�O 3\n");
    printf("=======================================================================\n");
    printf("       O que � um fluxograma?\n");
    printf("=======================================================================\n");
    printf("       1 - Figuras geom�tricas que implicam em a��es\n");
    printf("       2 - � um comando de HTML\n");
    printf("       3 - � um tipo de dado\n");
    printf("       4 - � um operador condicional\n");
    printf("       0 - voltar\n");
    printf("=======================================================================\n");
    printf("Digite a op��o desejada: ");
    scanf("%d", &opc);

    switch (opc) {
        case 1:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 2:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;
        case 0:
            printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARA�ATUBA\n");
    printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          TPA - QUEST�O 4\n");
    printf("=======================================================================\n");
    printf("       Qual a fun��o do comando 'escreval' utilizado no VisualG?\n");
    printf("=======================================================================\n");
    printf("       1 - Imprimir algo na tela\n");
    printf("       2 - � um la�o condicional\n");
    printf("       3 - L� informa��es\n");
    printf("       4 - Cria uma vari�vel\n");
    printf("       0 - Sair\n");
    printf("=======================================================================\n");
    scanf("%d", &opc);

    switch (opc) {
        case 1:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 2:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;
        case 0:
            printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARA�ATUBA\n");
    printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          TPA - QUEST�O 5\n");
    printf("=======================================================================\n");
    printf("       Em um c�digo em C++, qual a fun��o do comando '//' ?\n");
    printf("=======================================================================\n");
    printf("       1 - Para imprimir algo na tela\n");
    printf("       2 - Para deixar uma nota de direcionamento no c�digo\n");
    printf("           (anota��o que n�o faz parte do programa/c�digo)\n");
    printf("       3 - Para chamar uma vari�vel\n");
    printf("       4 - � a biblioteca usada para escolher o idioma\n");
    printf("       0 - Sair\n");
    printf("=======================================================================\n");

    printf("Digite a op��o desejada: ");
    scanf("%d", &opc);

    switch (opc) {
        case 1:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;
        case 2:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
}

void DD(int *acertos, int *erros) {
    int opc;
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARA�ATUBA\n");
    printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          DD - QUEST�O 1\n");
    printf("=======================================================================\n");
    printf("       O que � tipografia?\n");
    printf("=======================================================================\n");
    printf("       1 - Tipografia pode ser definida como um aplicativo para edi��o de\n");
    printf("           imagens de maneira profissional\n");
    printf("       2 - Pode ser definida como design/estilo da letra em um texto\n");
    printf("       3 - � o nome de uma fonte para t�tulo de textos formais\n");
    printf("       4 - � uma das 3 leis b�sicas de Gestalt\n");
    printf("       0 - Sair\n");
    printf("=======================================================================\n");
    scanf("%d", &opc);
    switch (opc) {
        case 2:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARA�ATUBA\n");
    printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          DD - QUEST�O 2\n");
    printf("=======================================================================\n");
    printf("       O que � um pixel?\n");
    printf("=======================================================================\n");
    printf("       1 - � um programa de design usado em grandes empresas por todo o mundo\n");
    printf("       2 - � a menor unidade de medida de uma imagem\n");
    printf("       3 - � um tipo de dado\n");
    printf("       4 - � uma ferramenta de edi��o\n");
    printf("       0 - Sair\n");
    printf("=======================================================================\n");
    scanf("%d", &opc);
    switch (opc) {
        case 2:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARA�ATUBA\n");
    printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          DD - QUEST�O 3\n");
    printf("=======================================================================\n");
    printf("       Qual programa de edi��o � considerado o melhor do mercado pela maioria dos editores?\n");
    printf("=======================================================================\n");
    printf("       1 - Photoshop\n");
    printf("       2 - Canva\n");
    printf("       3 - Adobe Premiere Pro\n");
    printf("       4 - Avid Media Composer\n");
    printf("       0 - Sair\n");
    printf("=======================================================================\n");
    scanf("%d", &opc);
    switch (opc) {
        case 3:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARA�ATUBA\n");
    printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          DD - QUEST�O 4\n");
    printf("=======================================================================\n");
    printf("       Assinale a alternativa que contenha 8 leis do Gestald:\n");
    printf("=======================================================================\n");
    printf("       1 - Semelhan�a, Proximidade, Continuidade, Pregn�ncia, Fechamento, Unidade,\n");
    printf("           Unifica��o e Segrega��o\n");
    printf("       2 - Amor, Persist�ncia, Determina��o, Conquista, Coragem, Foco, Amor e F�\n");
    printf("       3 - Tristeza, Felicidade, Amor, Ang�stia, Paz, Reflex�o, Raiva e Saudade\n");
    printf("       4 - Semelhan�a, Tipografia, Layout, Serifa, Interface, Segrega��o, Design\n");
    printf("           e Pregn�ncia\n");
    printf("       0 - Sair\n");
    printf("=======================================================================\n");
    scanf("%d", &opc);
    switch (opc) {
        case 1:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 2:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARA�ATUBA\n");
    printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          DD - QUEST�O 5\n");
    printf("=======================================================================\n");
    printf("       Quais elementos s�o necess�rios serem analisados para a montagem\n");
    printf("       de um banner?\n");
    printf("=======================================================================\n");
    printf("       1 - N�o � necess�rio muita an�lise, basta escolher elementos gr�ficos\n");
    printf("           legais e que combinem com as cores escolhidas pelo cliente.\n");
    printf("       2 - A principal coisa a se analisar � o tipo da fonte que ser� usada,\n");
    printf("           j� que este � o elemento que mais chama aten��o em um banner.\n");
    printf("       3 - � necess�rio analisar: se as cores propostas pelo cliente combinam\n");
    printf("           com o marketing desejado, o tamanho do banner, o p�blico-alvo e a\n");
    printf("           proposta desejada.\n");
    printf("       4 - O destaque do banner seria classificar as cores do c�rculo crom�tico\n");
    printf("           em: complementares, an�logas, prim�rias, secund�rias e terci�rias.\n");
    printf("       0 - Sair\n");
    printf("=======================================================================\n");
    scanf("%d", &opc);
    switch (opc) {
        case 3:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
}

void FI(int *acertos, int *erros) {
    int opc;
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARA�ATUBA\n");
    printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          FI - QUEST�O 1\n");
    printf("=======================================================================\n");
    printf("       Assinale a op��o que melhor define hardware:\n");
    printf("=======================================================================\n");
    printf("       1 - Hardware � a parte l�gica de um computador\n");
    printf("       2 - S�o todos os componentes palp�veis de um dispositivo eletr�nico\n");
    printf("       3 - � um tipo de mem�ria\n");
    printf("       4 - Pode-se dizer que � um dos sistemas operacionais mais utilizados\n");
    printf("       0 - Sair\n");
    printf("=======================================================================\n");
    scanf("%d", &opc);
    switch (opc) {
        case 2:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARA�ATUBA\n");
    printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          FI - QUEST�O 2\n");
    printf("=======================================================================\n");
    printf("       Marque a alternativa que contenha apenas perif�ricos de entrada:\n");
    printf("=======================================================================\n");
    printf("       1 - Monitor, caixa de som e impressora\n");
    printf("       2 - Teclado, mouse, webcam e scanner\n");
    printf("       3 - Microfone, mouse, teclado e gravadora\n");
    printf("       4 - Pen-drive, monitor touch screen, HD externo e impressora\n");
    printf("       0 - Sair\n");
    printf("=======================================================================\n");
    scanf("%d", &opc);
    switch (opc) {
        case 2:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARA�ATUBA\n");
    printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          FI - QUEST�O 3\n");
    printf("=======================================================================\n");
    printf("       Assinale a alternativa que melhor completa a frase:\n");
    printf("       O __________ domina o mercado em computadores Desktop sendo o sistema operacional mais\n");
    printf("       utilizado nesses computadores.\n");
    printf("=======================================================================\n");
    printf("       1 - Windows\n");
    printf("       2 - Whindersson\n");
    printf("       3 - Android\n");
    printf("       4 - Linux\n");
    printf("       0 - Sair\n");
    printf("=======================================================================\n");
    scanf("%d", &opc);
    switch (opc) {
        case 1:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 2:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARA�ATUBA\n");
    printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          FI - QUEST�O 4\n");
    printf("=======================================================================\n");
    printf("       Qual o sistema operacional mais usado no mundo?\n");
    printf("=======================================================================\n");
    printf("       1 - Windows\n");
    printf("       2 - Linux\n");
    printf("       3 - Mac OS\n");
    printf("       4 - Android\n");
    printf("       0 - Sair\n");
    printf("=======================================================================\n");
    scanf("%d", &opc);
    switch (opc) {
        case 4:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 3:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARA�ATUBA\n");
    printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          DD - QUEST�O 5\n");
    printf("=======================================================================\n");
    printf("       O ________ � onde o _________ � encaixado na placa m�e. Assinale a alternativa\n");
    printf("       que melhor complete essa frase:\n");
    printf("=======================================================================\n");
    printf("       1 - Soquete e mem�ria\n");
    printf("       2 - Processador e Soquete\n");
    printf("       3 - Soquete e processador\n");
    printf("       4 - Slot e processador\n");
    printf("       0 - Sair\n");
    printf("=======================================================================\n");
    scanf("%d", &opc);
    switch (opc) {
        case 3:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
}

void PW(int *acertos, int *erros) {
    int opc;
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARA�ATUBA\n");
    printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          PW - QUEST�O 1\n");
    printf("=======================================================================\n");
    printf("       Qual comando HTML � usado para adicionar um par�grafo?\n");
    printf("=======================================================================\n");
    printf("       1 - <p>\n");
    printf("       2 - <title>\n");
    printf("       3 - <br>\n");
    printf("       4 - <h1>\n");
    printf("       0 - Voltar\n");
    printf("=======================================================================\n");
    scanf("%d", &opc);
    switch (opc) {
        case 1:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 2:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARA�ATUBA\n");
    printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          PW - QUEST�O 2\n");
    printf("=======================================================================\n");
    printf("       Qual a fun��o da tag <center> em HTML?\n");
    printf("=======================================================================\n");
    printf("       1 - Direcionar o texto para a esquerda\n");
    printf("       2 - Direcionar o texto para a direita\n");
    printf("       3 - Centralizar o texto\n");
    printf("       4 - Aumentar o tamanho do texto\n");
    printf("       0 - Voltar\n");
    printf("=======================================================================\n");
    scanf("%d", &opc);
     switch (opc) {
        case 3:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARA�ATUBA\n");
    printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          PW - QUEST�O 3\n");
    printf("=======================================================================\n");
    printf("       Qual o comando usado para 'chamar' o CSS no c�digo?\n");
    printf("=======================================================================\n");
    printf("       1 - <body>\n");
    printf("       2 - <href>\n");
    printf("       3 - <h1 class=' '> </h1>\n");
    printf("       4 - <link rel='stylesheet' href='./style.css'>\n");
    printf("       0 - Sair\n");
    printf("=======================================================================\n");
    scanf("%d", &opc);
        switch (opc) {
        case 4:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 2:
        case 3:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARA�ATUBA\n");
    printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          PW - QUEST�O 4\n");
    printf("=======================================================================\n");
    printf("       Assinale a alternativa correta:\n");
    printf("=======================================================================\n");
    printf("       1 - HTML � um programa que favorece o desenvolvimento de arquivos CSS\n");
    printf("       2 - HTML e CSS s�o as tecnologias utilizadas na constru��o de p�ginas da Web:\n");
    printf("           HTML para a estrutura, CSS para o estilo da p�gina\n");
    printf("       3 - Ambos s�o conceitos fundamentais aplicados em dados abertos conectados\n");
    printf("       4 - CSS � uma linguagem de programa��o poderosa e requer HTML para seu funcionamento\n");
    printf("       0 - Sair\n");
    printf("=======================================================================\n");
    scanf("%d", &opc);
    switch (opc) {
        case 2:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARA�ATUBA\n");
    printf("         T�CNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          PW - QUEST�O 5\n");
    printf("=======================================================================\n");
    printf("       Assinale a op��o que apresenta a tag que permite a inser��o de\n");
    printf("       imagens em sua p�gina Web:\n");
    printf("=======================================================================\n");
    printf("       1 - <audio>\n");
    printf("       2 - <img>\n");
    printf("       3 - <h2>\n");
    printf("       4 - <body>\n");
    printf("       0 - Sair\n");
    printf("=======================================================================\n");
    scanf("%d", &opc);
    switch (opc) {
        case 2:
            printf("Resposta correta! \n");
            registrarAcerto(acertos);
            system("pause");
            break;
        case 1:
        case 3:
        case 4:
            printf("Resposta incorreta! \n");
            registrarErro(erros);
            system("pause");
            break;

        case 0:
           printf("Voc� escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Op��o inv�lida! \n");
            system("pause");
            break;
    }
}

// Fun��es para registrar acertos e erros
void registrarAcerto(int *acertos) {
    (*acertos)++;
}

void registrarErro(int *erros) {
    (*erros)++;
}

void exibirResultados(int acertos, int erros) {
    printf("=======================================================================\n");
    printf("                     RESULTADOS DO QUIZ\n");
    printf("=======================================================================\n");
    printf("N�mero de acertos: %d\n", acertos);
    printf("N�mero de erros: %d\n", erros);
    printf("=======================================================================\n");
}
