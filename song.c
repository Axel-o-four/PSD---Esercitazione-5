#include "song.h"
#include <stdlib.h>

#define M 20

struct song{
  char *title;
  char *artist;
  int duration;
}

Song initSong(char* title, char* artist, int duration){
  Song s=(Song)malloc(sizeof(struct song));
  if(s==NULL){
    return NULL;
  }

  s->title=title;
  s->artist=artist;
  s->duration=duration;
  return s;
}

char* title(Song s){
  printf("%s", s->title);
}

char* artist(Song s){
  printf("%s", s->artist);
}

int duration(Song s){
  printf("%d", s->duration);
}
