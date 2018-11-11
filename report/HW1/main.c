// ADT Stack
#include <stdio.h>
#include "ADT_stack.h"
#include "chart.h"

#define REVERSE 0 // reverse

int main() {

	// new type definition
	typedef struct {
		char name[20];
		int score;
	} STD;

	// prepare 5 data
	STD student[5] = {
		{"James", 95},
		{"Yoosoo", 87},
		{"Paul", 93},
		{"Peter", 76},
		{"Park", 100}
	};

#ifndef REVERSE
	generate_chart_header();
	//                    me                my boss            my score
	generate_chart_node(student[0].name, student[0].name, student[0].score); 
	generate_chart_node(student[1].name, student[0].name, student[1].score); 
	generate_chart_node(student[2].name, student[1].name, student[2].score); 
	generate_chart_node(student[3].name, student[2].name, student[3].score); 
	generate_chart_node(student[4].name, student[3].name, student[4].score); 
	generate_chart_footer();
#else



    // your code here.
    // partial codes are listed in homework introduction file (ppt file)
    // please refer to it.
	STACK* stack_ptr;
	stack_ptr=create_stack();


	int i;
	for(i=0;i<5;i++){
	if(!push(stack_ptr,&student[i])){
		printf("oops");return-1;
	}

	}

	STD* boss=NULL;
	STD* std;
	generate_chart_header();

		while(stack_ptr -> count!=0){
		
		if(boss==NULL){
			std=(STD*)(pop(stack_ptr));
			boss=std;
			
			
		}
		else{
			boss=std;
		
			std=(STD*)(pop(stack_ptr));
			
		}	
		
		generate_chart_node(std->name, boss->name, std->score);
		 
	}
	generate_chart_footer();

#endif

	
    return 0;
}

