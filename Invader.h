#ifndef INVADER_H__ //ifnotdefined: single file inclusion (include only once, even if repeted)
#define INVADER_H__

enum InvaderType{TYPE1,TYPE2,TYPE3}; //enumetation: it's an integer, there are three types, set to 0,1,2

#define SPRITEWIDTH 30
#define SPRITEHEIGHT 30
#define COLS 11 //colons of invaders
#define ROWS 5
#define GAP 10 //gap between the invaders
//if changed the game changes

typedef struct //structure:define your data types-->Invader
{
  SDL_Rect pos; //another structure (rectangular)
  int active; //alive or not
  int frame;
  enum InvaderType type;
}Invader;


#endif
