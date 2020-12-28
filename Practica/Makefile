SRC = src/
BIN = bin/
INC = inc/

todo: mergesort heapsort avl

mergesort: 
	echo "Compilando mergesort"
	g++ -g -Wall -o $(BIN)mergesort -I$(INC) $(SRC)mergesort.cpp
heapsort:
	echo "Compilando heapsort"
	g++ -g -Wall -o $(BIN)heapsort -I$(INC) $(SRC)heapsort.cpp
avl:
	echo "Compilando avl"
	g++ -g -Wall -o $(BIN)avl -I$(INC) $(SRC)avl.cpp

clean:
	rm $(BIN)*	