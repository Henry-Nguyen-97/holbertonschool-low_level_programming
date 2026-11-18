#include <stdio.h>
#include <stdlib.h>

typedef struct cat_s {
	char c;
	char d;
} cat_t;

typedef struct dog_s {
	int i;
	char c;
} dog_t;

typedef struct bird_s {
	int i;
	int j;
} bird_t;

typedef struct mouse_s {
	char c;
	int i;
} mouse_t;

typedef struct snake_s {
	char c;
	double d;
} snake_t;

int main() {
	// Declare a cat, a dog, a bird, a mouse
	cat_t cat;
	dog_t dog;
	bird_t bird;
	mouse_t mouse;

	// Initialize them
	cat.c = 'c';
	cat.d = 'd';
	dog.i = 1;
	dog.c = 'c';
	bird.i = 2;
	bird.j = 3;
	mouse.c = 'c';
	mouse.i = 4;
	
	// Display the address of the struct, and the fields inside them


	return (0);
}
