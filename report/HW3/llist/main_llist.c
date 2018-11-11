#include "ADT_llist.h"
#include "BST_TREE.h"
#include <stdio.h>
#include <stdlib.h>

#define sample_NUM 10000000

int compare1(void* x, void* y){

	return *((int*)x) - *((int*)y);
}

void print1(void* x){

	int* xp = (int*)x;
	printf(" - int data %d\n",*xp);
}

int main(){

	FILE* fin = fopen("sample.txt","r");
	int* N = (int*)malloc(sizeof(int)*sample_NUM);
	int* M = (int*)malloc(sizeof(int)*sample_NUM);

	int i, iter, cmp_result;
	int search_num = sample_NUM-1;
	T_NODE* srearch;

	LLIST* new_llist = create_list(compare1,print1);
	BST_TREE* new_bst = create_tree();

	for(i=0;i<sample_NUM;i++){

			*M = sample_NUM -1;
			fscanf(fin,"%d",N);
			add_node(new_llist,0,M);
		//	BST_insert(new_bst,*N);
			N++;
			M++;
	}
	iter = find_data(new_llist, &search_num);
	printf("iter num = %d \n", iter);

	fclose(fin);
	return 0;

}