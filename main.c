#include "main.h"

int main() {
  struct lista_disc *pinicio;

  ConstroiMalha (&pinicio);
  PercorreMalha (pinicio);
  PercursoLinear (pinicio);

  getchar();
  return 0;
}
