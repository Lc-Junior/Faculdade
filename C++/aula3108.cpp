#include <iostream>
#include <conio.h>
#include <string.h>
#include <locale.h>
#define MAX_FILA 5 // Tamanho Máximo da Fila

using namespace std;
struct DADOS_ALUNO{
	int CodAluno;
	char Nome[100];
	int Turma;
};

bool Enfileirar(DADOS_ALUNO Fila[], int CodAluno, char Nome[], int Turma, int &FimFila);
bool ExibirPrimeiro(DADOS_ALUNO Fila[], int IniFila, int FimFila);
bool Desenfileirar(DADOS_ALUNO Fila[], int &PosicaoFim);
main(){
	setlocale(LC_ALL, "");
	int valor = 0;
	struct DADOS_ALUNO FilaAlunos[MAX_FILA];
	int IniFila = 0;
	int FimFila = 0;
	bool Ret; int CodAluno, Turma;
	char Nome[100];
	
	do{
		
		cout << "====================MENU====================" << endl;
		cout << "Digite 1 para Criar um aluno" << endl;
		cout << "Digite 2 para Excluir os alunos cadastrados" << endl;
		cout << "Digite 3 para Exibir o primeiro aluno" << endl;
		cout << "Digite 4 para sair" << endl;
		cout << "============================================" << endl;
		cin >> valor;
	
	switch(valor)
	{
		case 1:
			cout << "\nInserção:" << endl;
			cout << "Digite o código do aluno: ";
			cin >> CodAluno;
			cout << "Digite o nome do aluno: ";
			cin >> Nome;
			cout << "Digite a turma do aluno: ";
			cin >> Turma;
			
			Ret = Enfileirar(FilaAlunos, CodAluno, Nome, Turma, FimFila);
			if(Ret == true){
				cout << "A Inserção foi efetuda com sucesso!" << endl;
			}
			break;
			
		case 2:
			Ret = Desenfileirar(FilaAlunos, FimFila);
			if(Ret == false){
				cout << "Não foi possível Desenfileirar a fila.\n" << endl;
		}
			else{
				cout << "Primeiro da fila desenfileirado com sucesso!" << endl;
		}
			break;
		
		case 3: 
			Ret = ExibirPrimeiro(FilaAlunos, IniFila, FimFila);
			if (Ret == false){
				cout << "Não foi possível exibir a fila." << endl;
		}
			break;
		
		case 4:
			break;
		
		default:
			cout << "Operação inválida. Digite um númeiro válido!";
	}

	cout << "\n\n\n";
}
	while(valor != 4);
}

bool Enfileirar(DADOS_ALUNO Fila[], int CodAluno, char Nome[], int Turma, int &FimFila){
	if (FimFila == MAX_FILA){
		cout << "ERRO: Fila Cheia.";
		return false;
	}
	else{
		Fila[FimFila].CodAluno = CodAluno;
		strcpy(Fila[FimFila].Nome, Nome);
		Fila[FimFila].Turma = Turma;
		FimFila++;
	}
	return true;
}

bool ExibirPrimeiro(DADOS_ALUNO Fila[], int IniFila, int FimFila){
	if (FimFila == 0){
		cout << "ERRO: Fila vazia.";
		return false;
	}
	cout << "\nCódigo do aluno: " << Fila[IniFila].CodAluno << endl;
	cout << "Nome: " << Fila[IniFila].Nome << endl;
	cout << "Turma: " << Fila[IniFila].Turma << endl;
	return true;
}

bool Desenfileirar(DADOS_ALUNO Fila[], int &PosicaoFim){
	int ind;
	int PosRem;
	if(PosicaoFim == 0){
		cout << "ERRO: Lista Vazia.";
		return false;
	}
	for(ind=0;ind<PosicaoFim;ind++){
		Fila[ind] = Fila[ind+1];
	}
	PosicaoFim--;
	return true;
}

