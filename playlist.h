#include "song.h"

typedef struct playlist *Playlist;

Playlist createPlaylist(char *name);
void addSong(Playlist pl, Song s);
void removeSong(Playlist pl, char *title);
void sortPlaylist(Playlist pl);
void printPlaylist(Playlist pl);
