#include "ADT_graph.h"
#include <stdio.h>

/*int main(void)
{
	GRAPH* g1 = create_graph();
	g_insert_vertex(g1,10);
	g_insert_vertex(g1,20);
	g_insert_vertex(g1,30);
	g_insert_vertex(g1,40);
	g_insert_vertex(g1,50);

	g_insert_arc(g1,10,20);
	g_insert_arc(g1,10,30);

	print_all(g1->vertex_list,g1->vertex_list->front);
	VERTEX* arc = (VERTEX*)(g1->vertex_list->front->data_ptr);
	print_all(arc->arc_list,arc->arc_list->front);
	return 0;
}*/


int main(void)
{
	int i;
	GRAPH* graph = create_graph();

	int vertex[6] = {'A','B','C','D','E','F'};
	//VERTEX INSERTION
	for(i=0; i<6; i++){
		if(!g_insert_vertex(graph,vertex[i]))
			printf(" fail insertion %c \n",(char)vertex[i]);
		else
			printf("graph vertex insertion ok: %c \n",(char)vertex[i]);
	}

	printf("\nGraph's Vertex:\n");
	print_vertex_all(graph);
	printf("\n");

	if(!g_insert_vertex(graph,'C'))
		printf("graph vertex_insert failed: %c already exist\n",'C');
	else
		printf("graph vertex insertion ok: %c\n",'C');

	//ARC insertion
	if(!g_insert_arc(graph, 'A','B'))
		printf("graph arc insertion failed: %c -> %c\n",'A','B');
	else
		printf("graph arc insertion ok: %c -> %c\n",'A','B');

	if(!g_insert_arc(graph,'A','B'))
		printf("graph arc insertion failed: %c -> %c\n",'A','B');
	else
		printf("graph arc insertion ok: %c -> %c\n",'A','B');

	if(!g_insert_arc(graph,'B','A'))
		printf("graph arc insertion failed: %c -> %c\n",'B','A');
	if(!g_insert_arc(graph,'B','C'))
		printf("graph arc insertion failed: %c -> %c\n",'B','C');
	if(!g_insert_arc(graph,'C','B'))
		printf("graph arc insertion failed: %c -> %c\n",'C','B');
	if(!g_insert_arc(graph,'D','C'))
		printf("graph arc insertion failed: %c -> %c\n",'D','C');
	if(!g_insert_arc(graph,'E','B'))
		printf("graph arc insertion failed: %c -> %c\n",'E','B');
	if(!g_insert_arc(graph,'F','C'))
		printf("graph arc insertion failed: %c -> %c\n",'F','C');
	if(!g_insert_arc(graph,'F','E'))
		printf("graph arc insertion failed: %c -> %c\n",'F','E');

	//print ARC in graph
	printf("\nGraph's Arc:\n");
	print_arc_all(graph);
	printf("\n");

	//delete VERTEX 'B'
	if(!g_delete_vertex(graph,'B'))
		printf("graph vertex delete ok: %c\n",'B');
	else
		printf("graph vertex delete ok: %c\n",'B');

	printf("\nGraph's Arc:\n");
	print_arc_all(graph);
	printf("\n");
	return 0;

}