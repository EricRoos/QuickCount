#ifndef TRANSITIONS_H
#define TRANSITIONS_H
#include "state.h"
#include<stdlib.h>

State * incrementTransition(State * s){
	if(((int)s->current_char)+1 < 125){
		State * newState = (State*)malloc(sizeof(State));
		newState->current_char = s->current_char + 1;
		return newState;
	}
	return 0;
}

#endif
