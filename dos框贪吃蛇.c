#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SNAKE_MAX_LENGTH 20
#define SNAKE_HEAD 'H'
#define SNAKE_BODY 'X'
#define BLANK_CELL ' '
#define SNAKE_FOOD '$'
#define WALL_CELL '*'
#define HEAD snakeLength-1

void snakeMove(int, int);
void put_money();
void output();
void gameover();
int random();

int snakeX[SNAKE_MAX_LENGTH] = {1, 2, 3, 4, 5};
int snakeY[SNAKE_MAX_LENGTH] = {1, 1, 1, 1, 1};
int snakeLength = 5;
int over = 0;
char map[13][13] =  {"************",
                  	 "*XXXXH     *",
                   	 "*          *",
	                 "*          *",
                     "*          *",
	                 "*          *",
	                 "*          *",
       	             "*          *",
	                 "*          *",
	                 "*          *",
	                 "*          *",
     	             "************"};

int main() {
	srand(time(NULL));
	put_money();
	output();
	char did;
	while (1) {
		did = getch();
		switch (did) {
		    case 'w' : snakeMove(0, -1);
                          break;
		    case 'a' : snakeMove(-1, 0);
                          break;
	        case 'd' : snakeMove(1, 0);
                          break;
	        case 's' : snakeMove(0, 1);
		}
		if(over)		break;
		else	        output();
	}
	getchar();
	return 0;
}

void snakeMove(int x, int y) {
	int i, X, Y;
	X = snakeX[HEAD] + x;
	Y = snakeY[HEAD] + y;
	if (map[Y][X] == '$') {
		map[Y][X] = 'H';
		map[ snakeY[HEAD] ][ snakeX[HEAD] ] = 'X';
		snakeLength++;
		snakeX[HEAD] = X;
		snakeY[HEAD] = Y;
		put_money();
	}
	else if ( ( map[Y][X] == 'X' || map[Y][X] == '*' ) && ( X != snakeX[0] && Y != snakeY[0] ) )
		gameover();
    else {
		map[Y][X] = 'H';
		map[ snakeY[HEAD] ][ snakeX[HEAD] ] = 'X';
		map[ snakeY[0] ][ snakeX[0] ] = ' ';
		for (i = 1; i <= snakeLength - 1; i++) {
            snakeX[i-1] = snakeX[i];
            snakeY[i-1] = snakeY[i];
        }
        snakeX[HEAD] = X;
        snakeY[HEAD] = Y;
	}
}

void put_money() {
	int monx, mony;
	while (1) {
		monx = random();
		mony = random();
		if (map[mony][monx] != 'X' && map[mony][monx] != 'H')
		           break;
	}
	map[mony][monx] = '$';
}

void output() {
	system("cls");
	int i;
	for (i = 0; i < 12; i++) {
		printf("%s\n", map[i]);
	}
}

void gameover() {
	system("cls");
	printf("GAME OVER\n");
	over = 1;
}

int random() {
	int i, k, range, min, max;
	double j;
	min = 1;
	max = 10;
	range = max - min;
	i = rand();
	j = ((double)i/(double)RAND_MAX);
	i = (int)(j * (double)range);
	i += min;
	return i;
}
