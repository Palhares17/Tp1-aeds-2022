#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct TCelula *ponteiro;
typedef struct TCelula {
    char palavra[20];
    ponteiro proximo; // struct celula *ponteiro 
} celula;

typedef struct TipoListaPalavra{
    ponteiro primeiro;
    ponteiro ultimo;
} TipoListaPalavra;

void ListaVazia(TipoListaPalavra *LPalavra);
int Vazia(TipoListaPalavra *LPalavra);
void InsereLista(TipoListaPalavra *LPalavra, char *conteudo);
int RetiraPalavra(TipoListaPalavra *LPalavra, char *conteudo);
void removeFinal(TipoListaPalavra *LPalavra);
void VerificaPalavra(TipoListaPalavra *LPalavra, char *conteudo);
int numPalavra(TipoListaPalavra *LPalavra);
void ImprimeLista(TipoListaPalavra *LPalavra);

