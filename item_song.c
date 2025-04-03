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

  printf("Inserisci il titolo: ");
  fgets(title, M, stdin);
  title[strcspn(title, "\n")]='\0';
  printf("Inserisci l'artista: ");
  fgets(artist, M, stdin);
  artist[strcspn(artist, "\n")]='\0';
  printf("Inserisci la durata (secondi): ");
  scanf("%d", &duration);
  while (getchar()!='\n');

  return (Item)initSong(title, artist, duration);
}

void outputItem(Item s){
  //Song song;
  //song=(Song)s;
  printf("%s\n%s\n%d\n\n", title(s), artist(s), duration(s));
}

int cmpItem(Item s1, Item s2){
  //Song song1, song2;
  //song1=(Song)s1;
  //song2=(Song)s2;
  return strcmp(title(s1), title(s2));
}
