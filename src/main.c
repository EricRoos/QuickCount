#include<stdio.h>
#include<stdlib.h>
#include "state.h"
#include "transitions.h"

int main(){
	State s = {'a',&incrementTransition};	
	State * newState = s.transition(&s);
	while(newState != 0){
		printf("%c\r\n",newState->current_char);
		State * tmp = s.transition(newState);
		free(newState);
		newState = tmp;
	}

	return 0;
}
