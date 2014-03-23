#ifndef MOD_LINEAR
#define MOD_LINEAR

#ifdef SERVIDOR_LINEAR
#define EXT_MOD_LINEAR
#else
#define EXT_MOD_LINEAR extern
#endif

EXT_MOD_LINEAR void PercursoLinear(lista1 *pini);

#endif