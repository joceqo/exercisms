#ifndef QUEEN_ATTACK_H
#define QUEEN_ATTACK_H

#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>

typedef enum { CAN_NOT_ATTACK, CAN_ATTACK, INVALID_POSITION } attack_status_t;

typedef struct {
   uint8_t row;
   uint8_t column;
} position_t;

bool is_on_board(position_t position);
bool is_same_position(position_t position1, position_t position2);
bool is_on_same_row(position_t position1, position_t position2);
bool is_on_same_column(position_t position1, position_t position2);
bool is_on_same_diagonal(position_t position1, position_t position2);
attack_status_t can_attack(position_t queen_1, position_t queen_2);

#endif
