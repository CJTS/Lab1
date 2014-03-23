#ifndef MOD_PERCORRE
    #define MOD_PERCORRE

    #ifdef SERVIDOR_PERCORRE
        #define EXT_MOD_PERCORRE
    #else
        #define EXT_MOD_PERCORRE extern
    #endif

    #include <stdio.h>
    #include "listas.h"

    void PercorreMalha(lista1 *pini);

#endif
