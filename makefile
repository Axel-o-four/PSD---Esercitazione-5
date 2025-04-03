link: song.o item_song.o utils.o list.o playlist.o main.o
	gcc song.o item_song.o utils.o list.o playlist.o main.o -o playlist.exe

song.o:
	gcc -c song.c

item_song.o:
	gcc -c item_song.c

utils.o:
	gcc -c utils.c

list.o:
	gcc -c list.c

playlist.o:
	gcc -c playlist.c

main.o:
	gcc -c main.c

clean:
	rm -f *.o *.exe
