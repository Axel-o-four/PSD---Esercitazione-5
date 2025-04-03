#include "list.h"
#include "playlist.h"
#include <stdlib.h>
#include <stdio.h>

struct playlist{
  char *name;
  List songs;
};

Playlist createPlaylist(char *name){
  Playlist pl;
  pl=(Playlist)malloc(sizeof(struct playlist));
  pl->name=name;
  pl->songs=newList();
  return pl;
}

void addSong(Playlist pl, Song s){
  addHead(pl->songs, s);
}

void removeSong(Playlist pl, char *title){
  Song s;
  s=initSong(title, "", 0);
  removeListItem(pl->songs, s);
}

void sortPlaylist(Playlist pl){
  sortList(pl->songs);
}

void printPlaylist(Playlist pl){
  printf("Stampa della playlist %s\n", pl->name);
  printList(pl->songs);
}
