struct aluno {
    char nome[81];
    int mat;
    char endereco[121];
    char fone[21];
    float nota;
};
typedef struct aluno Aluno;

void inicializar(Aluno* p[], int tam);

void adicionar(Aluno* p[], int pos);

void listarTodos(Aluno* p[], int pos);

void encontrar(Aluno* p[], int proc, int pos);

void atualizar(Aluno* p[], int proc, int pos);

