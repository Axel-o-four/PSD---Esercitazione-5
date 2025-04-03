#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "playlist.h"
#include "song.h"
#include "item.h"

int main(){
  char *nome, *eliminazione;
  int n, del;
  nome=(char *)malloc((strlen("Rock")+1)*sizeof(char));
  eliminazione=(char *)malloc(M*sizeof(char));
  strcpy(nome, "Rock");
  printf("Realizzazione della playlist %s. Quanti pezzi si vuole inserire: ", nome);
  scanf("%d", &n);
  while (getchar()!='\n');
  Playlist rock;
  Song s;
  rock=createPlaylist(nome);
  for(int i=0; i<n; i++){
    s=inputItem();
    addSong(rock, s);
    printPlaylist(rock);
    if(i>=2){
      printf("Si vuole eliminare qualche brano? (1 si, 0 no)");
      scanf("%d", &del);
      if(del!=0){
        printf("Inserire il titolo della canzone da eliminare: ");
        scanf("%s", eliminazione);
        while (getchar()!='\n');
        eliminazione[strcspn(eliminazione, "\n")]='\0';
        removeSong(rock, eliminazione);
        i--;
        printPlaylist(rock);
      }
    }
  }
  sortPlaylist(rock);
  printPlaylist(rock);
  return 0;
}
