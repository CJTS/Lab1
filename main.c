#include <stdio.h>

#include "constroi.h"
#include "linear.h"
#include "percorre.h"

main() {
  struct lista_disc *pinicio;

  ConstroiMalha (&pinicio);
  PercorreMalha (pinicio);
  PercursoLinear (pinicio);
  
  getchar();
}