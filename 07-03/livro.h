typedef struct livro Livro;

Livro* criar(char *titulo, int ano, int pag, float pre);
void acessar(Livro *livro, char *titulo, int *pag, int *ano, float *pre);
void liberar(Livro *livro);
