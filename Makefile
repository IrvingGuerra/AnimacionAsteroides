PROJECT = animacion

NUMBER_ASTEROIDS = 5

all: $(PROJECT)

animacion: animacion.o Asteroide.o gfx.o
	g++ gfx.o animacion.o Asteroide.o -o animacion -I/usr/X11R6/include -L/usr/X11R6/lib -lX11 -lm
animacion.o: animacion.cpp Asteroide.o gfx.o
	g++ -std=c++11 animacion.cpp -c
Asteroide.o: Asteroide.cpp gfx.o Asteroide.h
	g++ Asteroide.cpp -c
gfx.o: gfx.c gfx.h
	gcc gfx.c -c -I/usr/X11R6/include

.PHONY: clean

clean:
	rm -f *.o
	rm -f $(PROJECT)

run:
	./$(PROJECT) $(NUMBER_ASTEROIDS)