#include "list.h"
#include "playlist.h"

struct playlist{
  char *name;
  List songs;
}

Playlist createPlaylist(char *name){
  Playlist pl;
  pl=(Playlist)malloc(sizeof(struct playlist));
  pl->name=(char *)malloc(20*sizeof(char));
  pl->name=name;
  pl->songs=newList();
  return pl;
}

void addSong(Playlist pl, Song s){
  addHead(pl->songs, s);
}

void removeSong(Playlist pl, char *title){
  searchListItem()
}

void sortPlaylist(Playlist pl){
  sortList(pl->songs);
}

void printPlaylist(Playlist pl){

}
