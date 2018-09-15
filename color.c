#include <stdio.h>

int main(){
	
	int r, g, b, i=1;
	
	printf("\n\e[0m\e[38;2;255;0;0m0-255\033[A\r");
	printf("\e[48;2;255;0;0m\e[38;2;0;0;0mRED:\e[0m\e[38;2;255;0;0m ");
	scanf("%d", &r);
	printf("\033[A\33[2K\n\e[0m\e[38;2;0;255;0m0-255\033[A\r");
	printf("\e[48;2;0;255;0m\e[38;2;0;0;0mGREEN:\e[0m\e[38;2;0;255;0m ");
	scanf("%d", &g);
	printf("\033[A\33[2K\n\e[0m\e[38;2;0;0;255m0-255\033[A\r");
	printf("\e[48;2;0;0;255m\e[38;2;0;0;0mBLUE:\e[0m\e[38;2;0;0;255m ");
	scanf("%d", &b);
	printf("\033[A\33[2K");
	
	if( r > 255 ){ r = 255; }
	if( r < 0 ){ r = 0; }
	
	if( g > 255 ){ g = 255; }
	if( g < 0 ){ g = 0; }
	
	if( b > 255 ){ b = 255; }
	if( b < 0 ){ b = 0; }
	while( i <= 10 ){
		printf("\e[48;2;%d;%d;%dm                    \n", r,g,b);
		i++;
	}
	printf("\e[0m");
	return 0;
}
