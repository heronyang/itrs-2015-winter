#include <stdio.h>

#define MATRIX_SIZE 10

#define IS_END 1
#define IS_NOT_END 0

/*
 * facing, 0:N, 1:E, 2:S, 3:W
 */

int pos_x = 0, pos_y = 0, facing = 0;

char readable_facing_direction(int d) {
    char directions[] = "NESW";
    return directions[d];
}

void print_current_status() {
    printf("(%d, %d, %c)\n", pos_x, pos_y, readable_facing_direction(facing));
}

void turn_right() {
    facing ++;
    facing %= 4;
}

void turn_left() {
    turn_right();
    turn_right();
    turn_right();
}

int is_facing_wall() {
    if( facing == 0 && pos_y == MATRIX_SIZE - 1) {
        return 1;
    } else if( facing == 1 && pos_x == MATRIX_SIZE - 1) {
        return 1;
    } else if( facing == 2 && pos_y == 0) {
        return 1;
    } else if( facing == 3 && pos_x == 0) {
        return 1;
    }
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
    print_current_status();
}

void move_until_wall() {
    while(!is_facing_wall()) {
        move();
    }
}

int turn_next_row_right() {
    turn_left();
    if(is_facing_wall()) {
        return IS_END;
    }
    move();
    turn_left();

    return IS_NOT_END;
}

int turn_next_row_left() {
    turn_right();
    if(is_facing_wall()) {
        return IS_END;
    }
    move();
    turn_right();

    return IS_NOT_END;
}

int move_one_whole_row_right() {
    move_until_wall();
    if(turn_next_row_right() == IS_END) {
        return IS_END;
    }
    return IS_NOT_END;
}

int move_one_whole_row_left() {
    move_until_wall();
    if(turn_next_row_left() == IS_END) {
        return IS_END;
    }
    return IS_NOT_END;
}

int main() {

    print_current_status();

    turn_right();

    while(1) {
        if(move_one_whole_row_right() == IS_END) {
            break;
        }
        if(move_one_whole_row_left() == IS_END) {
            break;
        }
    }

    return 0;
}
