#include <stdio.h>

#define MATRIX_SIZE 10

/*
 * facing, 0:N, 1:E, 2:S, 3:W
 */

int pos_x = 0, pos_y = 0, facing = 0;

void turn_right() {
    facing ++;
    facing %= 4;
}

void turn_left() {
    // TODO: you turn
}

int is_facing_wall() {
    // TODO: you turn, 1 is true, 0 is false
    return 0;
}

void move() {
    if(!is_facing_wall()) {
        if(facing == 0) {
            pos_y++;
        } else if (facing == 1) {
            pos_x++;
        } else if (facing == 2) {
            pos_y--;
        } else if (facing == 3) {
            pos_x--;
        }
    }
}

void move_until_wall() {
    // TODO: your turn
}

char readable_facing_direction(int d) {
    char directions[] = "NESW";
    return directions[d];
}

void print_current_status() {
    printf("(%d, %d, %c)\n", pos_x, pos_y, readable_facing_direction(facing));
}

int main() {

    print_current_status();

    turn_right();
    print_current_status();

    move();
    print_current_status();

    // TODO: let the robot walk through the wall matrix

    return 0;
}
