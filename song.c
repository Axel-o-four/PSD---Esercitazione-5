#include "song.h"
#include <stdlib.h>

struct song{
  char *title;
  char *artist;
  int duration;
};

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
  return s->title;
}

char* artist(Song s){
  return s->artist;
}

int duration(Song s){
  return s->duration;
}
