#ifndef MOD_CONSTROI
    #define MOD_CONSTROI

    #ifdef SERVIDOR_CONSTROI
        #define EXT_MOD_CONSTROI
    #else
        #define EXT_MOD_CONSTROI extern
    #endif

    #include <stdio.h>
    #include <stdlib.h>
    #include "listas.h"

    EXT_MOD_CONSTROI void ConstroiMalha(lista1 **epinicio);

#endif
