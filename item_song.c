#include "item.h"
#include "song.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Item inputItem(){
  char *title, *artist;
  int duration;

  title=(char *)malloc(M*sizeof(char));
  artist=(char *)malloc(M*sizeof(char));
  if(title==NULL || artist==NULL){
    return NULL;
  }

  printf("\nInserisci il titolo: ");
  fgets(title, M, stdin);
  title[strcspn(title, "\n")]='\0';
  printf("\nInserisci l'artista: ");
  fgets(artist, M, stdin);
  artit[strcspn(title, "\n")]='\0';
  printf("\nInserisci la durata (secondi): ");
  scanf("%d", &duration);

  return (Item)initSong(title, artist, duration);
}

void outputItem(Item song){
  printf("%s\n%s\n%d", song->title, song->artist, song->duration);
}

int cmpItem(Item song1, Item song2){
  return strcmp(song1->title, song2->title);
}
