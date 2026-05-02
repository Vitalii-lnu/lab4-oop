CC = g++
CFLAGS = -Wall -Wextra
Target = Build/program

OBJ = main.o attack.o physical.o magic.o fire.o fireball.o

$(Target): $(OBJ)
	@mkdir -p Build
	$(CC) $(CFLAGS) -static -o $(Target) $(OBJ)


%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

main.o: main.cpp attack.h physical.h magic.h fire.h fireball.h
	$(CC) $(CFLAGS) -c main.cpp

attack.o: attack.h
physical.o: physical.h
magic.o: magic.h
fire.o: fire.h
fireball.o: fireball.h


clean:
	rm -f *.o $(Target)

clean_o:
	rm -f *.o

