#include <iostream>
#include <conio.h>
#include <cstring>
#include <locale.h>
#include <iomanip>
#define MAX_FILA 5 // Tamanho Máximo da Fila Circular

using namespace std;

struct DADOS_ALUNO {
    int CodAluno;
    char Nome[100], Turma;
    float Nota;
    bool Removido;
};

bool Enfileirar(DADOS_ALUNO Fila[], int CodAluno, char Nome[], char Turma, float Nota, int &FimFila, int &PosicaoFim);
bool Exibir(DADOS_ALUNO Fila[], int IniFila, int FimFila, int PosicaoFim);
bool Desenfileirar(DADOS_ALUNO Fila[], int &IniFila, int &PosicaoFim);
bool ExibirTurmaA(DADOS_ALUNO Fila[], int IniFila, int FimFila, int PosicaoFim);
bool ExibirTurmaB(DADOS_ALUNO Fila[], int IniFila, int FimFila, int PosicaoFim);
float CalcularMediaTurmaA(DADOS_ALUNO Fila[], int IniFila, int FimFila, int PosicaoFim);
float CalcularMediaTurmaB(DADOS_ALUNO Fila[], int IniFila, int FimFila, int PosicaoFim);
float CalcularMaiorNota(DADOS_ALUNO Fila[], int IniFila, int FimFila, int PosicaoFim);
float CalcularMenorNota(DADOS_ALUNO Fila[], int IniFila, int FimFila, int PosicaoFim);

int main() {
	setlocale(LC_ALL, "");
    struct DADOS_ALUNO FilaAlunos[MAX_FILA];
    int IniFila = 0;
    int PosicaoFim = 0;
    int FimFila = 0;
    bool Ret;
    int CodAluno, opcao;
    char Nome[100], Turma;
    float Nota;

    do {
    	cout << "=======================MENU=======================" << endl;
        cout << "\n1 - Enfileirar\n";
        cout << "2 - Exibir\n";
        cout << "3 - Desenfileirar\n";
   		cout << "4 - Exibir alunos da Turma A\n";
   		cout << "5 - Exibir alunos da Turma B\n";
        cout << "6 - Exibir média das notas dos alunos da Turma A\n";
        cout << "7 - Exibir média das notas dos alunos da Turma B\n";
   		cout << "8 - Exibir maior Nota geral entre as Turmas A e B\n";
   		cout << "9 - Exibir menor Nota geral entre as Turmas A e B\n";
        cout << "10 - Sair\n";
        cout << "\n==================================================" << endl;
        cout << "Digite a opçao: ";

        cin >> opcao;

        switch (opcao) {
            case 1:
                system("cls");
                cout << "Insercao: " << endl;
                cout << "Digite o código do aluno: ";
                cin >> CodAluno;
                cout << "Digite o nome do aluno: ";
                cin >> Nome;
                cout << "Digite a turma: (A) ou (B): ";
                cin >> Turma;
                cout << "Digite a Nota do aluno: ";
                cin >> Nota;
                Ret = Enfileirar(FilaAlunos, CodAluno, Nome, Turma, Nota, FimFila, PosicaoFim);
                if (Ret == true) {
                    cout << "\nInsercao efetuada com sucesso!" << endl;
                }
                break;
            case 2:
            	system("cls");
                Ret = Exibir(FilaAlunos, IniFila, FimFila, PosicaoFim);
                if (Ret == false) {
                    cout << "\nNão foi possível exibir a fila." << endl;
                }
                break;
            case 3:
            	system("cls");
                Ret = Desenfileirar(FilaAlunos, IniFila, PosicaoFim);
                if (Ret == false) {
                    cout << "\nNão foi possível desenfileirar a fila." << endl;
                }
                break;
            case 4:
            	system("cls");
                Ret = ExibirTurmaA(FilaAlunos, IniFila, FimFila, PosicaoFim);
                if (Ret == false) {
                    cout << "\nNão foi possível exibir os alunos da Turma A." << endl;
                }
                break;
            case 5:
            	system("cls");
                Ret = ExibirTurmaB(FilaAlunos, IniFila, FimFila, PosicaoFim);
                if (Ret == false) {
                    cout << "\nNão foi possível exibir os alunos da Turma B." << endl;
                }
                break;
            case 6:
            	system("cls");
                cout << "A média dos alunos da Turma A: "
                << fixed << setprecision(2) << CalcularMediaTurmaA(FilaAlunos, IniFila, FimFila, PosicaoFim) << endl; 
                break;
            case 7:
            	system("cls");
                cout << "A média dos alunos da Turma B: "
				<< fixed << setprecision(2) << CalcularMediaTurmaB(FilaAlunos, IniFila, FimFila, PosicaoFim) << endl;                 break;    
            case 8:
            	system("cls");
                cout << "A maior nota geral entre as turma foi: "
                << fixed << setprecision(2) << CalcularMaiorNota(FilaAlunos, IniFila, FimFila, PosicaoFim) << endl;
                break;
            case 9:
            	system("cls");
                cout << "A menor nota geral entre as turma foi: " 
                << fixed << setprecision(2) << CalcularMenorNota(FilaAlunos, IniFila, FimFila, PosicaoFim) << endl;
                break;
            case 10:
                cout << "\nFechando!";
                break;
            default:
                cout << "\n\nOperação inválida. Digite um númeiro válido!\n";
        }
    } while (opcao != 10);
    getch();
    return 0;
}

bool Enfileirar(DADOS_ALUNO Fila[], int CodAluno, char Nome[], char Turma, float Nota, int &FimFila, int &PosicaoFim) {
    if (PosicaoFim == MAX_FILA) {
        cout << "ERRO: Fila cheia.";
        return false;
    } else {
        Fila[FimFila].CodAluno = CodAluno;
        strcpy(Fila[FimFila].Nome, Nome);
        Fila[FimFila].Turma = Turma;
        Fila[FimFila].Nota = Nota; 
        Fila[FimFila].Removido = false;
        FimFila++;
        if (FimFila == MAX_FILA)
            FimFila = 0;
        PosicaoFim++;
    }
    return true;
}

bool Exibir(DADOS_ALUNO Fila[], int IniFila, int FimFila, int PosicaoFim) {
    int ind;
    if (PosicaoFim == 0) {
        cout << "ERRO: Fila vazia";
        return false;
    }
    if (IniFila < FimFila) {
        for (ind = IniFila; ind < FimFila; ind++) {
            if (!Fila[ind].Removido) {
                cout << "Código do Aluno: " << Fila[ind].CodAluno << endl;
                cout << "Nome: " << Fila[ind].Nome << endl;
                cout << "Turma: " << Fila[ind].Turma << endl;
                cout << "Nota: " << fixed << setprecision(2) << Fila[ind].Nota << endl; 
            }
        }
    } else {
        for (ind = IniFila; ind < MAX_FILA; ind++) {
            if (!Fila[ind].Removido) {
                cout << "Código do Aluno: " << Fila[ind].CodAluno << endl;
                cout << "Nome: " << Fila[ind].Nome << endl;
                cout << "Turma: " << Fila[ind].Turma << endl;
                cout << "Nota: " << Fila[ind].Nota << endl;
            }
        }
        for (ind = 0; ind < FimFila; ind++) {
            if (!Fila[ind].Removido) {
                cout << "Código do Aluno: " << Fila[ind].CodAluno << endl;
                cout << "Nome: " << Fila[ind].Nome << endl;
                cout << "Turma: " << Fila[ind].Turma << endl;
                cout << "Nota: " << Fila[ind].Nota << endl;
            }
        }
    }
    return true;
}

bool Desenfileirar(DADOS_ALUNO Fila[], int &IniFila, int &PosicaoFim) {
    int ind;
    int PosRem;
    if (PosicaoFim == 0) {
        cout << "ERRO: Fila vazia";
        return false;
    }
    Fila[IniFila].Removido = true;
    cout << "\nElemento desenfileirado com sucesso!\n";
    IniFila++;
    if (IniFila == MAX_FILA)
        IniFila = 0;
    PosicaoFim--;
    return true;
}

bool ExibirTurmaA(DADOS_ALUNO Fila[], int IniFila, int FimFila, int PosicaoFim) {
    int ind;
    if (PosicaoFim == 0) {
        cout << "ERRO: Fila vazia.";
        return false;
    }
    cout << "\n Alunos da Turma A: \n";
    if (IniFila < FimFila) {
        for (ind = IniFila; ind < FimFila; ind++) {
            if (Fila[ind].Turma == 'A' || Fila[ind].Turma == 'a' && !Fila[ind].Removido) {
                cout << "Código do Aluno: " << Fila[ind].CodAluno << endl;
                cout << "Nome: " << Fila[ind].Nome << endl;
                cout << "Turma: " << Fila[ind].Turma << endl;
                cout << "Nota: " << fixed << setprecision(2) << Fila[ind].Nota << endl;
            }
        }
    } else {
        for (ind = 0; ind < PosicaoFim; ind++) {
            if (!Fila[ind].Removido && Fila[ind].Turma == 'A' || Fila[ind].Turma == 'a') {
                cout << "Código do Aluno: " << Fila[ind].CodAluno << endl;
                cout << "Nome: " << Fila[ind].Nome << endl;
                cout << "Turma: " << Fila[ind].Turma << endl;
                cout << "Nota: " << fixed << setprecision(2) << Fila[ind].Nota << endl;
            }
        }
    }
    return true;
}

bool ExibirTurmaB(DADOS_ALUNO Fila[], int IniFila, int FimFila, int PosicaoFim) {
    int ind;
    if (PosicaoFim == 0) {
        cout << "ERRO: Fila vazia.";
        return false;
    }
    cout << "\nAlunos da Turma B: \n";
    if (IniFila < FimFila) {
        for (ind = IniFila; ind < FimFila; ind++) {
            if (Fila[ind].Turma == 'B' || Fila[ind].Turma == 'b' && !Fila[ind].Removido) {
                cout << "Código do Aluno: " << Fila[ind].CodAluno << endl;
                cout << "Nome: " << Fila[ind].Nome << endl;
                cout << "Turma: " << Fila[ind].Turma << endl;
                cout << "Nota: " << Fila[ind].Nota << endl;
            }
        }
    } else {
        for (ind = 0; ind < PosicaoFim; ind++) {
            if (!Fila[ind].Removido && Fila[ind].Turma == 'B' || Fila[ind].Turma == 'b') {
                cout << "Código do Aluno: " << Fila[ind].CodAluno << endl;
                cout << "Nome: " << Fila[ind].Nome << endl;
                cout << "Turma: " << Fila[ind].Turma << endl;
                cout << "Nota: " << fixed << setprecision(2) << Fila[ind].Nota << endl;
            }
        }
    }
    return true;
}

float CalcularMediaTurmaA(DADOS_ALUNO Fila[], int IniFila, int FimFila, int PosicaoFim) {
    int ind;
    float soma = 0;
    int contador = 0;

    if (PosicaoFim == 0) {
        return 0; 
    }

    if (IniFila < FimFila) {
        for (ind = IniFila; ind < FimFila; ind++) {
            if (Fila[ind].Turma == 'A' || Fila[ind].Turma == 'a' && !Fila[ind].Removido) {
                soma += Fila[ind].Nota;
                contador++;
            }
        }
    } else {
        for (ind = 0; ind < PosicaoFim; ind++) {
            if (!Fila[ind].Removido && Fila[ind].Turma == 'A' || Fila[ind].Turma == 'a') {
                soma += Fila[ind].Nota;
                contador++;
            }
        }
    }

    if (contador == 0) {
        return 0; 
    }

    return soma / contador;
}

float CalcularMediaTurmaB(DADOS_ALUNO Fila[], int IniFila, int FimFila, int PosicaoFim) {
    int ind;
    float soma = 0;
    int contador = 0;

    if (PosicaoFim == 0) {
        return 0; 
    }

    if (IniFila < FimFila) {
        for (ind = IniFila; ind < FimFila; ind++) {
            if (Fila[ind].Turma == 'B' || Fila[ind].Turma == 'b' && !Fila[ind].Removido) {
                soma += Fila[ind].Nota;
                contador++;
            }
        }
    } else {
        for (ind = 0; ind < PosicaoFim; ind++) {
            if (!Fila[ind].Removido && Fila[ind].Turma == 'B' || Fila[ind].Turma == 'b') {
                soma += Fila[ind].Nota;
                contador++;
            }
        }
    }

    if (contador == 0) {
        return 0; 
    }

    return soma / contador;
}

float CalcularMaiorNota(DADOS_ALUNO Fila[], int IniFila, int FimFila, int PosicaoFim) {
    int ind;
    float maior = 0;

    if (PosicaoFim == 0) {
    	return 0; 
    }

    if (IniFila < FimFila) {
        for (ind = IniFila; ind < FimFila; ind++) {
            if (!Fila[ind].Removido && Fila[ind].Nota > maior) {
                maior = Fila[ind].Nota;
            }
        }
    } else {
        for (ind = 0; ind < PosicaoFim; ind++) {
            if (!Fila[ind].Removido && Fila[ind].Nota > maior) {
                maior = Fila[ind].Nota;
            }
        }
    }

    return maior;
}

float CalcularMenorNota(DADOS_ALUNO Fila[], int IniFila, int FimFila, int PosicaoFim) {
    int ind;
    float menor = 1000;

    if (PosicaoFim == 0) {
    	return 0; 
    }

    if (IniFila < FimFila) {
        for (ind = IniFila; ind < FimFila; ind++) {
            if (!Fila[ind].Removido && Fila[ind].Nota < menor) {
                menor = Fila[ind].Nota;
            }
        }
    } else {
        for (ind = 0; ind < PosicaoFim; ind++) {
            if (!Fila[ind].Removido && Fila[ind].Nota < menor) {
                menor = Fila[ind].Nota;
            }
        }
    }

    return menor;
}
