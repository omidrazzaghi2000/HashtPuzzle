#include <iostream>
#include <stdio.h>
#include "board.h"
#include "traverse.h"
#include <stdlib.h>

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>


void RandomButtonCallback(Fl_Widget* widget, void*){
    
    std::cout << "Random\n";
}
void OwnButtonCallback(Fl_Widget* , void*){
    std::cout << "Own\n";
}
void ExitButtonCallback(Fl_Widget* , void*){
    std::cout << "Exit\n";
    exit(1);
}
Fl_Window* mainMenu(){
  Fl_Window *window = new Fl_Window(250,300,"8Puzzle");
    //RandomButton
    Fl_Button *boxRandom = new Fl_Button(75,70,100,30,"Random");
        
        boxRandom->box(_FL_ROUND_UP_BOX);
        boxRandom->labelsize(14);

        //callback
        boxRandom->callback(RandomButtonCallback);
        
    
    
    Fl_Button *boxInsert = new Fl_Button(75,110,100,30,"Own");
    boxInsert->box(_FL_ROUND_UP_BOX);
    boxInsert->labelsize(14);


    Fl_Button *boxExit = new Fl_Button(75,150,100,30,"Exit");
    boxExit->box(_FL_ROUND_UP_BOX);
    boxExit->labelsize(14);
    boxExit->callback(ExitButtonCallback);

  window->end();
  return window;
}

int main(int argc , char **argv){
    
    mainMenu()->show(argc, argv);
    return Fl::run();
}