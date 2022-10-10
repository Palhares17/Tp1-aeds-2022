#include "../headers/tad_ListaPalavra.h"

// CRIA LISTA
void ListaVazia(TipoListaPalavra *LPalavra) {
    LPalavra->primeiro = (ponteiro) malloc(sizeof(celula));
    LPalavra->ultimo = LPalavra->primeiro;
    LPalavra->primeiro->proximo = NULL;
}

// VERIFICA SE ESTÁ FAZIA
int Vazia(TipoListaPalavra *LPalavra) { 
    return ( LPalavra->ultimo == NULL);
}

// INSERI NA LISTA
void InsereLista(TipoListaPalavra *LPalavra, char *conteudo) {
    LPalavra->ultimo->proximo = (ponteiro) malloc(sizeof(celula));
    LPalavra->ultimo = LPalavra->ultimo->proximo;
    strcpy(LPalavra->ultimo->palavra, conteudo);
    LPalavra->ultimo->proximo = NULL;
}

// REMOVE DADA A PALAVRA
int RetiraPalavra(TipoListaPalavra *LPalavra, char *conteudo){
    ponteiro aux = LPalavra->primeiro->proximo;
    ponteiro ant = LPalavra->primeiro;

    if(Vazia(LPalavra)) return 0;
    
    while(strcmp(aux->palavra, conteudo) != 0) {
        aux = aux->proximo;
        ant = ant->proximo;
    }

    ant->proximo = aux->proximo;
    
    free(aux);
    
    return 1;
}

// RETIRA DO FINAL
void removeFinal(TipoListaPalavra *LPalavra){
    ponteiro aux_ultimo, aux_penultimo;

    aux_ultimo = LPalavra->primeiro->proximo;

    while(aux_ultimo->proximo != NULL){
        aux_penultimo = aux_ultimo;
        aux_ultimo = aux_ultimo->proximo;
    }
    aux_penultimo->proximo = NULL;
}

// VERIFICA SE EXISTE A PALAVRA
void VerificaPalavra(TipoListaPalavra *LPalavra, char *conteudo) {
    ponteiro aux;
    aux = LPalavra->primeiro->proximo;
    char *alerta;
    int cont = 0;

    printf("Entrou na funcao Verifica\n");
    
    while(aux != NULL) {
        if(strcmp(aux->palavra, conteudo) == 0) {
            alerta = "A palavra existe\n";
        } 
        aux = aux->proximo;
    }

    printf("%s", alerta);
}

// QUANTIDADE DE PALAVRAS
int numPalavra(TipoListaPalavra *LPalavra) {
    ponteiro aux;
    aux = LPalavra->primeiro->proximo;
    int cont = 0;
    printf("Entrou na funcao Verifica\n");
    
    while(aux != NULL) {
        cont++;
        aux = aux->proximo;
    }

    return cont;
}

// IMPRIMI A LISTA
void ImprimeLista(TipoListaPalavra *LPalavra) {
    ponteiro aux;
    aux = LPalavra->primeiro->proximo;

    while(aux != NULL) {
        printf("%s\n", aux->palavra);
        aux = aux->proximo;
    }
}
