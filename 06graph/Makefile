help:
	@echo "make help"
	@echo "make all"
ADT_graph.o:ADT_graph.c
	g++ -c ADT_graph.c
ADT_llist.o:ADT_llist.c
	g++ -c ADT_llist.c
main.o:main.c
	g++ -c main.c
all:ADT_llist.o ADT_graph.o main.o
	g++ -o graph ADT_llist.o ADT_graph.o main.o
run:all
	./graph
clean:
	rm -rf *.o graph