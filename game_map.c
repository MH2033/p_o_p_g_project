#include <stdio.h>
int obstac[100][100],dot[100][100],X[100][100],Y[100][100],x_p_x,x_p_y,x,y;
char game_map[101][101];
extern int bigdot[100][100];
void game_map_making(void){
    int i,j;
    for (i = 0; i <= x; i++) {
        for (j = 0; j <= y; j++) {
            if (dot[i][j] == 1) {
                game_map[i][j] = '.';
            }else if(X[i][j] == 1){
                game_map[i][j] = 'X';
                x_p_x = i;
                x_p_y = j;
            }else if(Y[i][j] == 1){
                game_map[i][j] = 'Y';
            } else if (obstac[i][j] == 1) {
                game_map[i][j] = 'B';
            } else if(bigdot[i][j] == 1) {
                game_map[i][j] = 'F';
            }else if (i == 0 || j == 0 || i == x || j == y) {
                game_map[i][j] = '!';
            } else {
                game_map[i][j] = ' ';
            }
        }
    }
}