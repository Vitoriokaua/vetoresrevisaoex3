#include <iostream>

using namespace std;


/* Deseja-se publicar o n�mero de acertos um aluno em uma prova. A prova tem quantas questoes? , 
cada uma com cinco alternativas identificadas por A, B, C, D e E. Para isso s�o dados:
o cart�o gabarito;
o cart�o de respostas do aluno, contendo suas respostas para cada quest�o.
Informe quantas quest�es o aluno acertou, de acordo com o gabarito.

*/


void gabaritoProfessor(char* v, int tam) {
	for (int i = 0; i < tam; i++){
		cout << "informe o gabarito professor (A,B,C,D,E): ";
		cin >> v[i];
}
	cout << endl;
}



void gabaritoAluno(char* v, int tam) {
	for (int i = 0; i < tam; i++)
	{
		cout << "informe o gabarito aluno  (A,B,C,D,E):  ";
		cin >> v[i];

	}
}

	int comparar(char * g, char * n, int tam) {
		int cont = 0;
		for (int i = 0; i < tam; i++){
	
			if (g[i] == n[i])
				cont += 1;

		}

		return cont;
	}






	int main() {
		
		int tam;
		cout << "informe o tamanho: ";
		cin >> tam;
		char* gbprof = new char[tam];
		char*  gbaluno = new char[tam];

		 gabaritoProfessor(gbprof, tam);
		 gabaritoAluno(gbaluno, tam);


		int contador= comparar(gbprof, gbaluno, tam);

		cout << "o aluno acertou " << contador << " questoes ";
		


	}