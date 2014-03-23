#ifndef MOD_LINEAR
    #define MOD_LINEAR

    #ifdef SERVIDOR_LINEAR
        #define EXT_MOD_LINEAR
    #else
        #define EXT_MOD_LINEAR extern
    #endif

    #include <stdio.h>
    #include "listas.h"

    void PercursoLinear(lista1 *pini);

#endif
