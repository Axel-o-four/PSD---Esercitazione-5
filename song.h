typedef struct song *Song;

Song initSong(char* title, char* artist, int duration);
char* title(song);
char* artist(song);
int duration(song);
