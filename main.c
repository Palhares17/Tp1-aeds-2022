// #include "headers/tad_Palavra.h"
#include "headers/tad_ListaPalavra.h"

int main() {
    // Palavra item;
    TipoListaPalavra LPalavra;
    // char palavra[20];
    // strcpy(palavra, "escola");
    // // char *palavra = "escola";

    // palavraVazia(&item);
    // preenchePalavra(&item, palavra);
    // print(&item); 


    int i;
    char *p = "palavra";
    
    ListaVazia(&LPalavra);
    
    for(i=0; i<5; i++) {
        InsereLista(&LPalavra, (p+i));
    }
    
    int code;
    printf("tirar palavra:");
    scanf("%d", &code);
    char *selecionada = "lavra";

    ImprimeLista(&LPalavra);
    
    if(code == 1) {
        RetiraPalavra(&LPalavra, selecionada);
    } else if(code == 2) {
        removeFinal(&LPalavra);
    } else if(code == 3) {
        VerificaPalavra(&LPalavra, selecionada);
    } else if(code == 4) {
        printf("\n\nTem %d palavras\n\n", numPalavra(&LPalavra));
    } 
    
    ImprimeLista(&LPalavra);
    
    return 0;
}