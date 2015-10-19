#include<stdio.h>
#include<math.h>

#define WIDTH  79
#define HEIGHT 24

void clear (char screen[][HEIGHT]) {
	int	i, j;

	for (i=0; i<WIDTH; i++) 
		for (j=0; j<HEIGHT; j++) 
			screen[i][j] = ' ';
}

void print (char screen[][HEIGHT]) {
	int	i, j;

	for (j=0; j<HEIGHT; j++) {
		for (i=0; i<WIDTH; i++) 
			putchar (screen[i][j]);
		putchar ('\n');
	}
}
int safei (int a) {
	if (a >= WIDTH) return WIDTH-1;
	if (a < 0) return 0;
}

int safej (int a) {
	if (a >= HEIGHT) return HEIGHT-1;
	if (a < 0) return 0;
}

void circle (char screen[][HEIGHT], int i, int j, int radius) {
	float	x, y;
	int	di, dj;

	for (x=0.0; x<=1.0; x+=0.01) {
		y = sqrt (1.0 - x*x);
		di = (int) (x * radius * 1.7);
		dj = (int) (y * radius);
		screen[safei(i + di)][safej(j + dj)] = '*';
		screen[safei(i + di)][safej(j - dj)] = '*';
		screen[safei(i - di)][safej(j + dj)] = '*';
		screen[safei(i - di)][safej(j - dj)] = '*';
	}
}

int main () {
	char	screen[WIDTH][HEIGHT];

	clear (screen);
	circle (screen, 40, 12, 10);
	circle (screen, 40, 10, 4);
	circle (screen, 2, 5, 10);
	circle (screen, 40, 12, 10);
	print (screen);
	return 0;
}	

