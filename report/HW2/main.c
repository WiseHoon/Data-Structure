#include "ADT_llist.h"

#define SORT 0 //sort

#define D_SIZE 8

int compare1(void* x, void* y) {
    return *((int*)x) - *((int*)y);
}

void print1(void* x)
{
    double* xp = (double*)x;
    printf(" - double data %f\n", *xp);
}

typedef struct point{
    double x;
    double y;
} POINT;

void sort_list(LLIST* list, void* data);

int main() {
    FILE* fnode = fopen("node.in", "w");
    FILE* flink = fopen("link.in", "w");

    LLIST* list = create_list(compare1, print1);
    int i;

    POINT path[D_SIZE] = {
        {35.885663, 128.6142},
        {35.888741, 128.609344},
        {35.887057, 128.610213},
        {35.886988, 128.611832},
        {35.890204, 128.609753},
        {35.892413, 128.609242},
        {35.891764, 128.609924},
        {35.887085, 128.609089},
    };

#ifndef SORT

    for(i = 0; i < D_SIZE; i++) {
        fprintf(fnode, "%lf %lf\n", path[i].x, path[i].y);
    }
    for(i = 0; i < D_SIZE-1; i++) {
        fprintf(flink, "%lf %lf %lf %lf\n", path[i].x, path[i].y, path[i+1].x, path[i+1].y);
    }

#else

    for(i=0;i< D_SIZE;i++){
    	if(!add_node(list,list->count,&path[i])){
    		printf("data insertion fatiled on list!\n");
    	}
    	else{
    		printf("data insertion ok on list!\n");
    	}
	}	for(i=0;i<(list->count);i++){
		printf("%f %f\n",(*((POINT*)get_data(list,i))).x,(*(POINT*)get_data(list,i)).y);
	}
	
    sort_list(list, path);
  
	//for(i=0;i<(list->count);i++){
	//	printf("%f %f\n",path[i].x,path[i].y);
	//}
	printf("\n");
	for(i=0;i<(list->count);i++){
		printf("%f %f\n",(*((POINT*)get_data(list,i))).x,(*(POINT*)get_data(list,i)).y);
	}
	for(i = 0; i <(list->count); i++) {
        fprintf(fnode, "%lf %lf\n", (*((POINT*)get_data(list,i))).x,(*(POINT*)get_data(list,i)).y);
    }
    for(i = 0; i <(list->count)-1; i++) {
        fprintf(flink, "%lf %lf %lf %lf\n",(*((POINT*)get_data(list,i))).x,(*(POINT*)get_data(list,i)).y,(*((POINT*)get_data(list,i+1))).x,(*(POINT*)get_data(list,i+1)).y);
    }

#endif

   return 0;
}



void sort_list(LLIST* list, void* data) {
	int i,j;
	void* stand;
	void* walk;
	void* tmp;

	POINT* path = (POINT*)data;
	for(i=0;i<(list->count)-1;i++){
		for(j=i+1;j<(list->count);j++){
			
			stand = get_data(list,i);
			walk = get_data(list,j);
			
			if(((POINT*)stand)->x >((POINT*)walk) ->x){
				tmp=stand;
				stand=walk;
				walk=tmp;
				del_node(list,i);
				add_node(list,i,stand);
				del_node(list,j);
				add_node(list,j,walk);
			
			}	
			
		}
		
	
	}
	/*for(i=D_SIZE-1;i>-1;i--){
	if(!del_node(list,i)){	printf("data insertion fatiled on list!\n");
    	}
    	else{
    		printf("data deletion ok on list!\n");
    	}
	}
	for(i=0;i<D_SIZE;i++){
	
	if(!add_node(list,i,&path[i])){	printf("data insertion fatiled on list!\n");
    	}
    	else{
    		printf("data insertion ok on list!\n");
    	}
	}*/
}
