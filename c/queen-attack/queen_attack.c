#include "queen_attack.h"

bool is_on_board(position_t position){
    if(position.row > 7 || position.column > 7){
        return false;
    }

    return true;
}

bool is_same_position(position_t position1, position_t position2){
    if(position1.row == position2.row && position1.column == position2.column ){
    return true;
    }

    return false;
}

bool is_on_same_row(position_t position1, position_t position2){
    if(position1.row == position2.row){
        return true;
    }

    return false;
}

bool is_on_same_column(position_t position1, position_t position2){
     if(position1.column == position2.column){
        return true;
    }

    return false;
}


bool is_on_same_diagonal(position_t position1, position_t position2) {
    // Get absolute differences between rows and columns
    int row_diff = abs(position1.row - position2.row);
    int col_diff = abs(position1.column - position2.column);
    
    // If the differences are equal, they're on the same diagonal
    return row_diff == col_diff;
}

attack_status_t can_attack(position_t queen_1, position_t queen_2){
    // queens out of the board
    // queen on the same positions
    // anser with INVALID_POSITION
    if(!is_on_board(queen_1) || !is_on_board(queen_2) || is_same_position(queen_1, queen_2)){
        return INVALID_POSITION;
    }

    
    // check if the queen are on the same row
    // check if the queen are on the same column
    // same diagonale
    bool _is_on_same_diagonal = is_on_same_diagonal(queen_1, queen_2);
    bool _is_on_same_row = is_on_same_row(queen_1, queen_2);
    bool _is_on_same_column = is_on_same_column(queen_1, queen_2);

    if(_is_on_same_diagonal || _is_on_same_row || _is_on_same_column){
        return CAN_ATTACK;
    }

    return CAN_NOT_ATTACK;
}