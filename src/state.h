#ifndef STATE_H
#define STATE_H

typedef struct State{
	char current_char;
	struct State *(*transition)(struct State *);
}State;

#endif

