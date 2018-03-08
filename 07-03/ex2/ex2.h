typedef struct pesquisa Pesquisa;

Pesquisa* criar(char *sexo, int idade, int filhos, float salario);
void acessar(Pesquisa *pesquisa, char *sexo, int *idade, int *filhos, float *salario);
void liberar(Pesquisa *pesquisa);
