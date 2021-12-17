#include <gb/gb.h>

#include "../res/smile_sprite.h"

#include <stdio.h>

int main(){

    printf("Hello World!");

    SPRITES_8x16;       //sets the sprite size to 8x16 pixels 

    set_sprite_data(0, 0, smileSprite);
    set_sprite_tile(0, 0);      //tells sprite 0 to display sprite 0 since loading 8x16 tiles this will make sprite 0 show tile 0 and tile 1
    move_sprite(0, 75, 75);
    
    set_sprite_tile(1, 2);      //displays tile 2 and 3
    move_sprite(1, 75+8, 75);   //offsets the postions of the second tile by 8 pixles so they are not overlapped

    SHOW_SPRITES;

    while(1){
        set_sprite_tile(0, 4);
        set_sprite_tile(1, 6);
        delay(500);
        set_sprite_tile(0, 0);
        set_sprite_tile(1, 2);
        delay(500);
    }

    return 0;
}