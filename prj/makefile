FLAGS=-g -Iinc -pedantic -Wall -std=c++0x

knap: obj obj/main.o obj/goods.o obj/store.o obj/thief.o 
	g++ -pedantic -Wall -std=c++0x -o knap obj/main.o obj/goods.o obj/store.o obj/thief.o

obj:
	mkdir obj

obj/main.o: src/main.cpp inc/Goods.hh inc/Store.hh inc/Thief.hh
	g++ -c ${FLAGS} -o obj/main.o src/main.cpp

obj/goods.o: src/goods.cpp inc/Goods.hh
	g++ -c ${FLAGS} -o obj/goods.o src/goods.cpp

obj/store.o: src/store.cpp inc/Store.hh
	g++ -c ${FLAGS} -o obj/store.o src/store.cpp

obj/thief.o: src/thief.cpp inc/Thief.hh
	g++ -c ${FLAGS} -o obj/thief.o src/thief.cpp

make clear:
	rm -r obj/
	rm knap
