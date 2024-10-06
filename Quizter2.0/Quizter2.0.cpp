#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

// Declaração das funções
void menuBaseComum(int *acertos, int *erros);
void menuBaseEspecifica(int *acertos, int *erros);

// Funções para a Base Comum
void matematica(int *acertos, int *erros);
void ingles(int *acertos, int *erros);
void fisica(int *acertos, int *erros);
void artes(int *acertos, int *erros);
void portugues(int *acertos, int *erros);
void biologia(int *acertos, int *erros);
void quimica(int *acertos, int *erros);
void historia(int *acertos, int *erros);
void filosofia(int *acertos, int *erros);

// Funções para a Base Específica
void TPA(int *acertos, int *erros);
void DD(int *acertos, int *erros);
void FI(int *acertos, int *erros);
void PW(int *acertos, int *erros);

// Funções para registrar acertos e erros
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
        printf("                          ETEC DE ARAÇATUBA\n");
        printf("            TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
        printf("                            QUIZTER\n");
        printf("=======================================================================\n");
        printf("SELECIONE A GRADE CURRICULAR:\n");
        printf("1 - Base Comum\n");
        printf("2 - Base Específica\n");
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
                printf("Alternativa inválida! \n");
                system("pause");
                break;
        }
    }
    return 0;
}

// Função para o menu da Base Comum
void menuBaseComum(int *acertos, int *erros) {
    int opc;
    system("cls");
    printf("=======================================================================\n");
    printf("                          ETEC DE ARAÇATUBA\n");
    printf("            TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                            QUIZTER\n");
    printf("=======================================================================\n");
    printf("SELECIONE A MATÉRIA DA BASE COMUM:\n");
    printf("1 - Matemática\n");
    printf("2 - Inglês\n");
    printf("3 - Física\n");
    printf("4 - Artes\n");
    printf("5 - Português\n");
    printf("6 - Biologia\n");
    printf("7 - Química\n");
    printf("8 - História\n");
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
            printf("Alternativa inválida.\n");
            system("pause");
            return;
    }
}

// Função para o menu da Base Específica
void menuBaseEspecifica(int *acertos, int *erros) {
    int opc;
    system("cls");
    printf("=======================================================================\n");
    printf("                          ETEC DE ARAÇATUBA\n");
    printf("            TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                            QUIZTER\n");
    printf("=======================================================================\n");
    printf("SELECIONE A MATÉRIA DA BASE ESPECÍFICA:\n");
    printf("1 - TPA (Técnica de Programação e Algoritmo)\n");
    printf("2 - PW (Programação Web)\n");
    printf("3 - DD (Design Digital)\n");
    printf("4 - FI (Fundamentos da Informática)\n");
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
            printf("Alternativa inválida.\n");
            system("pause");
            return;
    }
}

// Funções para as disciplinas da Base Comum
void matematica(int *acertos, int *erros) {
    int opc;
    system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          MAT - QUESTÃO 1\n");
printf("=======================================================================\n");
printf("       Em um plano cartesiano o nome dado aos eixos X e Y são ");
printf("                         respectivamente:\n");
printf("=======================================================================\n");
printf("       1 - abscissas e ordenadas\n");
printf("       2 - ordenadas e abscissas\n");
printf("       3 - domínio e contradomínio\n");
printf("       4 - imagem e função\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          MAT - QUESTÃO 2\n");
printf("=======================================================================\n");
printf("       Marque a alternativa verdadeira:\n");
printf("=======================================================================\n");
printf("       1 - Um elemento do domínio pode ter duas imagens\n");
printf("       2 - Podem sobrar um ou mais elementos no conjunto de partida\n");
printf("       3 - Não podem sobrar elementos no domínio\n");
printf("       4 - Não podem sobrar elementos no conjunto de chegada\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          MAT - QUESTÃO 3\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          MAT - QUESTÃO 4\n");
printf("=======================================================================\n");
printf("       Para representar conjuntos pode-se usar o diagrama de:\n");
printf("=======================================================================\n");
printf("       1 - Pitágoras\n");
printf("       2 - Venn\n");
printf("       3 - Aristóteles\n");
printf("       4 - Platão\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          MAT - QUESTÃO 5\n");
printf("=======================================================================\n");
printf("       Um gráfico de sinal tem como objetivo principal:\n");
printf("=======================================================================\n");
printf("       1 - Dizer em quais momentos a função é positiva ou negativa\n");
printf("       2 - Mostrar o ponto máximo global e o ponto mínimo global\n");
printf("       3 - Apontar os momentos de crescimento e decrescimento\n");
printf("       4 - Calcular a taxa média de variação\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
}

void ingles(int *acertos, int *erros) {
    int opc;
    system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          IN - QUESTÃO 1\n");
printf("=======================================================================\n");
printf("       Analise as afirmativas a seguir e escolha a melhor alternativa:\n");
printf("=======================================================================\n");
printf("       I- Usamos going to para indicar uma ação futura que já está\n");
printf("        planejada e que com certeza irá acontecer em um futuro próximo\n");
printf("       II- Na forma afirmativa do present perfect utilizamos o auxiliar\n");
printf("       will entre o sujeito e o verbo principal\n");
printf("       III- A formação de frases no futuro com going to na forma \n ");
printf("       afirmativa segue a seguinte estrutura: Sujeito + verbo to be \n");
printf("       (am/are/is) + going to + verbo principal + complemento\n");
printf("       IV- O auxiliar will é utilizado para indicar uma ideia de futuro\n");
printf("       que pode expressar incerteza ou ser decidida no momento da fala\n");
printf("       V- Os auxiliares do e does também são utilizados para o futuro \n");
printf("       com going to\n");
printf("=======================================================================\n");
printf("       1 - estão corretas somente I e IV\n");
printf("       2 - a afirmativa III é a única correta\n");
printf("       3 - as afirmativas II e V são as únicas incorretas\n");
printf("       4 - somente as afirmativas III e IV estão corretas\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          IN - QUESTÃO 2\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          IN - QUESTÃO 3\n");
printf("=======================================================================\n");
printf("       Qual das afirmativas a seguir é a estrutura correta da forma interrogativa do futuro com going to:\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          IN - QUESTÃO 4\n");
printf("=======================================================================\n");
printf("       Quais foram os tempos verbais estudados até agora?\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          IN - QUESTÃO 5\n");
printf("=======================================================================\n");
printf("       São algumas question words:\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
}

void fisica(int *acertos, int *erros) {
    int opc;
    system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          FIS - QUESTÃO 1\n");
printf("=======================================================================\n");
printf("       Marque a alternativa que melhor defina um vetor:\n");
printf("=======================================================================\n");
printf("       1 - vetor é a mesma coisa que um segmento de reta\n");
printf("       2 - um vetor possui módulo, sentido e direção\n");
printf("       3 - um vetor é uma grandeza vetorial\n");
printf("       4 - é um segmento de reta geometricamente orientado que possui\n");
printf("       módulo, direção e sentido\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          FIS - QUESTÃO 2\n");
printf("=======================================================================\n");
printf("       Quando usamos a equação de Torricelli?\n");
printf("=======================================================================\n");
printf("       1 - quando é preciso encontrar a posição e não temos a \n ");
printf("          velocidade\n");
printf("       2 - quando é necessário encontrar a velocidade e não temos a \n");
printf("       aceleração\n");
printf("       3 - em situações em que não temos tempo e o exercício não pede \n");
printf("       o tempo\n");
printf("       4 - usamos em casos que é necessário encontrar a aceleração sem\n");
printf("       ter o módulo\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          FIS - QUESTÃO 3\n");
printf("=======================================================================\n");
printf("       Complete a frase a seguir: ___________ significa ____________ \n");
printf("           um corpo que se encontra a uma determinada___________.\n");
printf("       Assinale a alternativa que melhor preencha as lacunas:\n");
printf("=======================================================================\n");
printf("       1 - queda-livre, parar, altura\n");
printf("       2 - queda-livre, abandonar, altura\n");
printf("       3 - queda-livre, largar, distância\n");
printf("       4 - lançamento horizontal, empurrar, longitude\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          FIS - QUESTÃO 4\n");
printf("=======================================================================\n");
printf("       O que a cinemática estuda?\n");
printf("=======================================================================\n");
printf("       1 - o movimento\n");
printf("       2 - a gravidade\n");
printf("       3 - a aceleração\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          FIS - QUESTÃO 5\n");
printf("=======================================================================\n");
printf("       Complete a frase: Para fazer a conversão de m/s para km/h é \n");
printf("       necessário_________ por 3,6.\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
}

void artes(int *acertos, int *erros) {
    int opc;
    system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          AR - QUESTÃO 1\n");
printf("=======================================================================\n");
printf("       Quais são as cores primárias?\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          AR - QUESTÃO 2\n");
printf("=======================================================================\n");
printf("       Quem é autor(a) de: O Menino Maluquinho?\n");
printf("=======================================================================\n");
printf("       1 - Paulo Freire\n");
printf("       2 - Cecília Meireles\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          AR - QUESTÃO 3\n");
printf("=======================================================================\n");
printf("       Quem foi Cora Coralina?\n");
printf("=======================================================================\n");
printf("       1 - irmã de Cecília Meireles\n");
printf("       2 - mãe de Jorge de Lima\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          AR - QUESTÃO 4\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          AR - QUESTÃO 5\n");
printf("=======================================================================\n");
printf("       Qual desses poemas é de Manuel Bandeira?\n");
printf("=======================================================================\n");
printf("       1 - A Triste Partida\n");
printf("       2 - Seiscentos e Sessenta e Seis\n");
printf("       3 - Baladas para el-rei\n");
printf("       4 - Os sapos e Vou-me embora pra Pasárgada\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
}

void portugues(int *acertos, int *erros) {
    int opc;
    system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          LP - QUESTÃO 1\n");
printf("=======================================================================\n");
printf("       Qual a origem do tipo de texto Sermão?\n");
printf("=======================================================================\n");
printf("       1 - Religiosa\n");
printf("       2 - Filosófica\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          LP - QUESTÃO 2\n");
printf("=======================================================================\n");
printf("       Assinale a alternativa incorreta:\n");
printf("=======================================================================\n");
printf("       1 - Uma carta apresenta um destinatário\n");
printf("       2 - Uma carta pode ou não apresentar uma assinatura do remetente\n");
printf("       3 - Cartas não precisam de contexto histórico para\n  ");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          LP - QUESTÃO 3\n");
printf("=======================================================================\n");
printf("       Os (As) autor (es) (as) das obras: A Hora da Estrela, Vidas \n");
printf("       Secas e Poemas Negros são respectivamente:\n");
printf("=======================================================================\n");
printf("       1 - Cecília Meireles, Lewis Carroll, Jorge de Lima\n");
printf("       2 - Clarice Lispector, Graciliano Ramos, Jorge de Lima\n");
printf("       3 - Jorge de Lima, Padre Antônio Vieira, Antoine de Saint-Exupéry\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          LP - QUESTÃO 4\n");
printf("=======================================================================\n");
printf("       Pero Vaz de Caminha enviou a Carta relatando o descobrimento ");
printf("                              para o rei:\n");
printf("=======================================================================\n");
printf("       1 - D. Miguel II\n");
printf("       2 - D. João IV\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          LP - QUESTÃO 5\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
}

void biologia(int *acertos, int *erros) {
   int opc;
   system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          BI - QUESTÃO 1\n");
printf("=======================================================================\n");
printf("       O que é teia alimentar?\n");
printf("=======================================================================\n");
printf("       1 - o ambiente físico onde uma espécie vive\n");
printf("       2 - a interação da comunidade com o meio ambiente\n");
printf("       3 - comunidade com cadeias alimentares interligadas\n");
printf("       4 - conjunto de população que habitam a mesma área\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          BI - QUESTÃO 2\n");
printf("=======================================================================\n");
printf("       Quais são os 3 tipos de pirâmides ecológicas?\n");
printf("=======================================================================\n");
printf("       1 - número, biomassa, energia\n");
printf("       2 - biomassa, natural, invertida\n");
printf("       3 - crescente, decrescente, inteira\n");
printf("       4 - baixa, média, alta\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          BI - QUESTÃO 3\n");
printf("=======================================================================\n");
printf("       Quem são a base da cadeia alimentar?\n");
printf("=======================================================================\n");
printf("       1 - consumidores terciários\n");
printf("       2 - consumidores primários\n");
printf("       3 - consumidores secundários\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          BI - QUESTÃO 4\n");
printf("=======================================================================\n");
printf("       O que é uma ação antrópica?\n");
printf("=======================================================================\n");
printf("       1 - qualquer ação da natureza que pode beneficiar ou prejudicar\n");
printf("          os ciclos biogeoquímicos\n");
printf("       2 - qualquer ação do homem que beneficie a natureza\n");
printf("       3 - ações feitas pelo homem no meio que prejudicam direta ou\n");
printf("         indiretamente os ciclos biogeoquímicos\n");
printf("       4 - é uma ação destruidora feita pela própria natureza\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          BI - QUESTÃO 5\n");
printf("=======================================================================\n");
printf("       Qual ciclo biogeoquímico que ocorre o processo de nitrificação?\n");
printf("=======================================================================\n");
printf("       1 - ciclo do fósforo\n");
printf("       2 - ciclo do nitrogênio\n");
printf("       3 - ciclo do carbono\n");
printf("       4 - ciclo do oxigênio\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
}

void quimica(int *acertos, int *erros) {
    int opc;
   system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          QU - QUESTÃO 1\n");
printf("=======================================================================\n");
printf("       As ligações covalentes são formadas entre:\n");
printf("=======================================================================\n");
printf("       1 - metais\n");
printf("       2 - células\n");
printf("       3 - ametais\n");
printf("       4 - prótons\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          QU - QUESTÃO 2\n");
printf("=======================================================================\n");
printf("       Qual é o elemento mais eletronegativo da tabela periódica?\n");
printf("=======================================================================\n");
printf("       1 - flúor\n");
printf("       2 - cloro\n");
printf("       3 - carbono\n");
printf("       4 - oxigênio\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          QU - QUESTÃO 3\n");
printf("=======================================================================\n");
printf("       A força fraca também pode ser conhecida como:\n");
printf("=======================================================================\n");
printf("       1 - Dipolo Dipolo\n");
printf("       2 - Forças de London\n");
printf("       3 - Ligação de Hidrogênio\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          QU - QUESTÃO 4\n");
printf("=======================================================================\n");
printf("      De acordo com a regra do octeto quantos elétrons o átomo precisa\n");
printf("         ter na camada de valência para alcançar a estabilidade?\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          QU - QUESTÃO 5\n");
printf("=======================================================================\n");
printf("       Quais são os subníveis de energia?\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
}

void historia(int *acertos, int *erros) {
    int opc;
    system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          HI - QUESTÃO 1\n");
printf("=======================================================================\n");
printf("       Quais são os períodos da Grécia Antiga?\n");
printf("=======================================================================\n");
printf("       1 - Paleolítico, Neolítico, Idade dos Metais, Idade Média, \n");
printf("            Idade Moderna\n");
printf("       2 - Helenístico, Clássico, Arcaico, Homérico, Pré-Homérico\n");
printf("       3 - Pré-Helenístico, Helenístico, Arcaico, Clássico, Homérico\n");
printf("       4 - Pré-Homérico, Homérico, Arcaico, Clássico, Helenístico\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          HI - QUESTÃO 2\n");
printf("=======================================================================\n");
printf("       Quem era Péricles?\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          HI - QUESTÃO 3\n");
printf("=======================================================================\n");
printf("       Em qual cidade surgiu a democracia?\n");
printf("=======================================================================\n");
printf("       1 - Atenas\n");
printf("       2 - Grécia\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          HI - QUESTÃO 4\n");
printf("=======================================================================\n");
printf("       Quem foi o educador de Alexandre o Grande?\n");
printf("=======================================================================\n");
printf("       1 - Platão\n");
printf("       2 - Aristóteles\n");
printf("       3 - Sócrates\n");
printf("       4 - Péricles\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          HI - QUESTÃO 5\n");
printf("=======================================================================\n");
printf("       O que era a Ágora?\n");
printf("=======================================================================\n");
printf("       1 - praça onde as ideias eram debatidas\n");
printf("       2 - eram os Genos\n");
printf("       3 - eram as capitais das Pólis\n");
printf("       4 - Ágora vem do latim e quer dizer cidadania\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
}

void filosofia(int *acertos, int *erros) {
    int opc;
    system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          FI - QUESTÃO 1\n");
printf("=======================================================================\n");
printf("       Quando se inicia o período helenístico?\n");
printf("=======================================================================\n");
printf("       1 - quando Alexandre o Grande invade a Grécia, final do século VI\n");
printf("       2 - se inicia após a morte de Platão e Aristóteles\n");
printf("       3 - após o período pré-homérico\n");
printf("       4 - antes do período arcaico\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          FI - QUESTÃO 2\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          FI - QUESTÃO 3\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          FI - QUESTÃO 4\n");
printf("=======================================================================\n");
printf("       Quais são as 3 grandes invenções que contribuíram para o avanço \n");
printf("        da ciência?\n");
printf("=======================================================================\n");
printf("       1 - óculos, cartografia, escrita\n");
printf("       2 - imprensa, pólvora, bússola\n");
printf("       3 - fogo, fala, escrita\n");
printf("       4 - universidades, carvão, máquina a vapor\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
system("cls");
printf("=======================================================================\n");
printf("                    ETEC DE ARAÇATUBA\n");
printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
printf("                           QUIZTER\n");
printf("=======================================================================\n");
printf("                          FI - QUESTÃO 5\n");
printf("=======================================================================\n");
printf("       Assinale a alternativa INCORRETA, a patrística defendia:\n");
printf("=======================================================================\n");
printf("       1 - teoria da iluminação divina\n");
printf("       2 - valorização da fé\n");
printf("       3 - predestinação\n");
printf("       4 - visão tomista\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
}

// Funções para a Base Específica
void TPA(int *acertos, int *erros) {
    int opc;
    system("cls");
    printf("=======================================================================\n");
    printf("                          ETEC DE ARAÇATUBA\n");
    printf("            TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                            QUIZTER\n");
    printf("=======================================================================\n");
    printf("Questão 1: Quais são as etapas de um processamento de dados?\n");
    printf("1 - Descrição narrativa, Fluxograma e Pseudocódigo\n");
    printf("2 - Entrada, Processamento e Saída\n");
    printf("3 - Declaração de variáveis, Algoritmo e Fim do algoritmo\n");
    printf("4 - Literal, Lógico e Inteiro\n");
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
            printf("Alternativa inválida.\n");
            system("pause");
            return;
    }
    system("pause");
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARAÇATUBA\n");
    printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          TPA - QUESTÃO 2\n");
    printf("=======================================================================\n");
    printf("       Quais são os tipos de dados já estudados?\n");
    printf("=======================================================================\n");
    printf("       1 - Real, Lógico, Rython e HTML\n");
    printf("       2 - Java, HTML, CSS e C++\n");
    printf("       3 - Real, Literal, Lógico, Inteiro e JavaScript\n");
    printf("       4 - Real, Literal, Lógico e Inteiro\n");
    printf("       0 - Voltar\n");
    printf("=======================================================================\n");
    printf("Digite a opção desejada: ");
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
            printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARAÇATUBA\n");
    printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          TPA - QUESTÃO 3\n");
    printf("=======================================================================\n");
    printf("       O que é um fluxograma?\n");
    printf("=======================================================================\n");
    printf("       1 - Figuras geométricas que implicam em ações\n");
    printf("       2 - É um comando de HTML\n");
    printf("       3 - É um tipo de dado\n");
    printf("       4 - É um operador condicional\n");
    printf("       0 - voltar\n");
    printf("=======================================================================\n");
    printf("Digite a opção desejada: ");
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
            printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARAÇATUBA\n");
    printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          TPA - QUESTÃO 4\n");
    printf("=======================================================================\n");
    printf("       Qual a função do comando 'escreval' utilizado no VisualG?\n");
    printf("=======================================================================\n");
    printf("       1 - Imprimir algo na tela\n");
    printf("       2 - É um laço condicional\n");
    printf("       3 - Lê informações\n");
    printf("       4 - Cria uma variável\n");
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
            printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARAÇATUBA\n");
    printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          TPA - QUESTÃO 5\n");
    printf("=======================================================================\n");
    printf("       Em um código em C++, qual a função do comando '//' ?\n");
    printf("=======================================================================\n");
    printf("       1 - Para imprimir algo na tela\n");
    printf("       2 - Para deixar uma nota de direcionamento no código\n");
    printf("           (anotação que não faz parte do programa/código)\n");
    printf("       3 - Para chamar uma variável\n");
    printf("       4 - É a biblioteca usada para escolher o idioma\n");
    printf("       0 - Sair\n");
    printf("=======================================================================\n");

    printf("Digite a opção desejada: ");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
}

void DD(int *acertos, int *erros) {
    int opc;
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARAÇATUBA\n");
    printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          DD - QUESTÃO 1\n");
    printf("=======================================================================\n");
    printf("       O que é tipografia?\n");
    printf("=======================================================================\n");
    printf("       1 - Tipografia pode ser definida como um aplicativo para edição de\n");
    printf("           imagens de maneira profissional\n");
    printf("       2 - Pode ser definida como design/estilo da letra em um texto\n");
    printf("       3 - É o nome de uma fonte para título de textos formais\n");
    printf("       4 - É uma das 3 leis básicas de Gestalt\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARAÇATUBA\n");
    printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          DD - QUESTÃO 2\n");
    printf("=======================================================================\n");
    printf("       O que é um pixel?\n");
    printf("=======================================================================\n");
    printf("       1 - É um programa de design usado em grandes empresas por todo o mundo\n");
    printf("       2 - É a menor unidade de medida de uma imagem\n");
    printf("       3 - É um tipo de dado\n");
    printf("       4 - É uma ferramenta de edição\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARAÇATUBA\n");
    printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          DD - QUESTÃO 3\n");
    printf("=======================================================================\n");
    printf("       Qual programa de edição é considerado o melhor do mercado pela maioria dos editores?\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARAÇATUBA\n");
    printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          DD - QUESTÃO 4\n");
    printf("=======================================================================\n");
    printf("       Assinale a alternativa que contenha 8 leis do Gestald:\n");
    printf("=======================================================================\n");
    printf("       1 - Semelhança, Proximidade, Continuidade, Pregnância, Fechamento, Unidade,\n");
    printf("           Unificação e Segregação\n");
    printf("       2 - Amor, Persistência, Determinação, Conquista, Coragem, Foco, Amor e Fé\n");
    printf("       3 - Tristeza, Felicidade, Amor, Angústia, Paz, Reflexão, Raiva e Saudade\n");
    printf("       4 - Semelhança, Tipografia, Layout, Serifa, Interface, Segregação, Design\n");
    printf("           e Pregnância\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARAÇATUBA\n");
    printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          DD - QUESTÃO 5\n");
    printf("=======================================================================\n");
    printf("       Quais elementos são necessários serem analisados para a montagem\n");
    printf("       de um banner?\n");
    printf("=======================================================================\n");
    printf("       1 - Não é necessário muita análise, basta escolher elementos gráficos\n");
    printf("           legais e que combinem com as cores escolhidas pelo cliente.\n");
    printf("       2 - A principal coisa a se analisar é o tipo da fonte que será usada,\n");
    printf("           já que este é o elemento que mais chama atenção em um banner.\n");
    printf("       3 - É necessário analisar: se as cores propostas pelo cliente combinam\n");
    printf("           com o marketing desejado, o tamanho do banner, o público-alvo e a\n");
    printf("           proposta desejada.\n");
    printf("       4 - O destaque do banner seria classificar as cores do círculo cromático\n");
    printf("           em: complementares, análogas, primárias, secundárias e terciárias.\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
}

void FI(int *acertos, int *erros) {
    int opc;
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARAÇATUBA\n");
    printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          FI - QUESTÃO 1\n");
    printf("=======================================================================\n");
    printf("       Assinale a opção que melhor define hardware:\n");
    printf("=======================================================================\n");
    printf("       1 - Hardware é a parte lógica de um computador\n");
    printf("       2 - São todos os componentes palpáveis de um dispositivo eletrônico\n");
    printf("       3 - É um tipo de memória\n");
    printf("       4 - Pode-se dizer que é um dos sistemas operacionais mais utilizados\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARAÇATUBA\n");
    printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          FI - QUESTÃO 2\n");
    printf("=======================================================================\n");
    printf("       Marque a alternativa que contenha apenas periféricos de entrada:\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARAÇATUBA\n");
    printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          FI - QUESTÃO 3\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARAÇATUBA\n");
    printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          FI - QUESTÃO 4\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARAÇATUBA\n");
    printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          DD - QUESTÃO 5\n");
    printf("=======================================================================\n");
    printf("       O ________ é onde o _________ é encaixado na placa mãe. Assinale a alternativa\n");
    printf("       que melhor complete essa frase:\n");
    printf("=======================================================================\n");
    printf("       1 - Soquete e memória\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
}

void PW(int *acertos, int *erros) {
    int opc;
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARAÇATUBA\n");
    printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          PW - QUESTÃO 1\n");
    printf("=======================================================================\n");
    printf("       Qual comando HTML é usado para adicionar um parágrafo?\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARAÇATUBA\n");
    printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          PW - QUESTÃO 2\n");
    printf("=======================================================================\n");
    printf("       Qual a função da tag <center> em HTML?\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARAÇATUBA\n");
    printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          PW - QUESTÃO 3\n");
    printf("=======================================================================\n");
    printf("       Qual o comando usado para 'chamar' o CSS no código?\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARAÇATUBA\n");
    printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          PW - QUESTÃO 4\n");
    printf("=======================================================================\n");
    printf("       Assinale a alternativa correta:\n");
    printf("=======================================================================\n");
    printf("       1 - HTML é um programa que favorece o desenvolvimento de arquivos CSS\n");
    printf("       2 - HTML e CSS são as tecnologias utilizadas na construção de páginas da Web:\n");
    printf("           HTML para a estrutura, CSS para o estilo da página\n");
    printf("       3 - Ambos são conceitos fundamentais aplicados em dados abertos conectados\n");
    printf("       4 - CSS é uma linguagem de programação poderosa e requer HTML para seu funcionamento\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
    system("cls");
    printf("=======================================================================\n");
    printf("                    ETEC DE ARAÇATUBA\n");
    printf("         TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS\n");
    printf("                           QUIZTER\n");
    printf("=======================================================================\n");
    printf("                          PW - QUESTÃO 5\n");
    printf("=======================================================================\n");
    printf("       Assinale a opção que apresenta a tag que permite a inserção de\n");
    printf("       imagens em sua página Web:\n");
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
           printf("Você escolheu voltar ao menu anterior.\n");
            system("pause");
            return;
        default:
            printf("Opção inválida! \n");
            system("pause");
            break;
    }
}

// Funções para registrar acertos e erros
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
    printf("Número de acertos: %d\n", acertos);
    printf("Número de erros: %d\n", erros);
    printf("=======================================================================\n");
}
