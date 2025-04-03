#define M 20

typedef struct song *Song;

Song initSong(char* title, char* artist, int duration);
char* title(Song s);
char* artist(Song s);
int duration(Song s);
