#include <iostream>
#include <stdio.h>
#include "board.h"
#include "traverse.h"
#include <stdlib.h>

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>


/*
Begin Prototypes
*/

void RandomButtonCallback(Fl_Widget* widget, void* data);
void OwnButtonCallback(Fl_Widget* , void*);
void ExitButtonCallback(Fl_Widget* , void*);

/*
End Prototypes
*/

/*
Classes
*/
class Arguments {
  public:
    int argc;
    char** argv;
    Arguments(int _argc, char** _argv): argc(_argc), argv(_argv) {};
};
class MainMenuWindow{
    public:
        MainMenuWindow(int argc , char **argv){
            Fl_Window *window = new Fl_Window(250,300,"8Puzzle");
            

            Random = new Fl_Button(75,70,100,30,"Random");
            Random->box(_FL_ROUND_UP_BOX);
            Random->labelsize(14);
            
            Random->callback(RandomButtonCallback,new Arguments(argc,argv));


            OwnTable = new Fl_Button(75,110,100,30,"Own");
            OwnTable->box(_FL_ROUND_UP_BOX);
            OwnTable->labelsize(14);


            Exit = new Fl_Button(75,150,100,30,"Exit");
            Exit->box(_FL_ROUND_UP_BOX);
            Exit->labelsize(14);
            Exit->callback(ExitButtonCallback);

            
            window -> end();
            window->show(argc,argv);
        }
        
    private:
        int status = 0;
        int w = 250;
        int h = 300;
        Fl_Button * Random;
        Fl_Button * OwnTable;
        Fl_Button * Exit;
};

/*
End Classes
*/

int main(int argc , char **argv){
    MainMenuWindow(argc ,argv);
    return Fl::run();
}



void RandomButtonCallback(Fl_Widget* widget, void* data){
    MainMenuWindow(((Arguments*)data)->argc,((Arguments*)data)->argv);
    std::cout << "Random\n";
}
void OwnButtonCallback(Fl_Widget* , void*){
    std::cout << "Own\n";
}
void ExitButtonCallback(Fl_Widget* , void*){
    std::cout << "Exit\n";
    exit(1);
}





