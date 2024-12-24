//Écris un programme qui ouvre un fichier texte et affiche son contenu ligne par ligne.
#include<stdio.h>
#include<stdlib.h>

void ouv_aff_fnct(const char* nom_fichier){
  FILE *file=fopen(no_fichier,"r");
  if(!file){
printf("erreur");
    return NULL;
  }
  char ligne[256];
  while(fgets(ligne,sizeof(ligne),file){
    printf("%s",ligne);
  }
  fclose(file);
}
int main(){
  char nom_fichier[100];
  printf("donner le nom de fichier");
  scanf("%s",nom_fichier);
  ouv_aff_fnct(nom_fichier);
  return 0;
}
