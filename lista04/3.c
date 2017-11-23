#include <stdlib.h>
#include <stdio.h>

typedef struct aluno {
  char nome[100];
  unsigned int ra;
  float p1, p2, p3, media;
} ALUNO;

void calc_media(ALUNO *al) {
  al->media = (al->p1 + al->p2 + al->p3)/3;
}

int main() {
  ALUNO alunos[50];
  FILE * lista;
  lista = fopen("lista_alunos.txt", "r");
  for(int i = 0; i < 50; i++) {
    fscanf(lista, "%s %d %f %f %f", alunos[i].nome, &(alunos[i].ra), &(alunos[i].p1), &(alunos[i].p2), &(alunos[i].p3));
    calc_media(&alunos[i]);
  }
  FILE * medias;
  medias = fopen("media_alunos.txt", "w");
  for(int i = 0; i < 50; i++) {
    fprintf(medias, "%s %d %.2f %.2f %.2f %.2f\n", alunos[i].nome, alunos[i].ra, alunos[i].p1, alunos[i].p2, alunos[i].p3, alunos[i].media);
  }
  return 0;
}