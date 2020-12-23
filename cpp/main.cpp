#include <iostream>
#include <stdio.h>
#include "board.h"
#include "traverse.h"

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>



int main(int argc , char **argv){
  Fl_Window *window = new Fl_Window(500,300,"8Puzzle");
  
  Fl_Box *boxRandom = new Fl_Box(200,40,100,30,"Random");
  boxRandom->box(_FL_ROUND_UP_BOX);
  boxRandom->labelsize(14);
  Fl_Box *boxInsert = new Fl_Box(200,80,100,30,"Insert");
  boxInsert->box(_FL_ROUND_UP_BOX);
  boxInsert->labelsize(14);
  window->end();
  window->show(argc, argv);
  return Fl::run();
}