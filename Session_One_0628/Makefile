dynamic_array:
	g++ -o dynamic_array src/dynamic_array.cpp

cmd_parser: 
	g++ -o cmd_parser src/cmd_parser_example.cpp

main_app: main.o
	g++ -o main main.o

main.o: src/main.cpp
	g++ -g2 -c -o main.o src/main.cpp

clean:
	rm -f main
	rm -f *.o
	rm -f dynamic_array
	rm -f cmd_parser 
