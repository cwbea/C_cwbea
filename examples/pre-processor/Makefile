


all : 
	gcc -fPIC -c ./source/add.c
	gcc -fPIC -c ./source/subtract.c
	gcc -fPIC -c ./source/menu.c
	gcc -fPIC -c ./source/calc.c
	mv ./add.o ./object/
	mv ./subtract.o ./object/
	mv ./menu.o ./object/
	mv ./calc.o ./object/
	gcc -shared -o ./library/libcwbea.so ./object/add.o ./object/subtract.o ./object/menu.o
	gcc ./object/calc.o ./library/libcwbea.so -o ./binary/calc

clean :
	rm ./object/*.o
	rm ./binary/calc
	rm ./library/libcwbea.so

run :
	./binary/calc
