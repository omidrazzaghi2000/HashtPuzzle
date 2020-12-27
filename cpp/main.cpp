#include <iostream>
#include <stdio.h>
#include <board.h>
#include <traverse.h>
#include <stdlib.h>
#include <string>
#include "table.h"


#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Tile.H>


/*
Begin Prototypes
*/

// void RandomButtonCallback(Fl_Widget* widget, void* data);
// void OwnButtonCallback(Fl_Widget* , void*);
// void ExitButtonCallback(Fl_Widget* , void*);

/*
End Prototypes
*/

/*
Classes
*/
// class Arguments {
//   public:
//     int argc;
//     char** argv;
//     Arguments(int _argc, char** _argv): argc(_argc), argv(_argv) {};
// };
// class MainMenuWindow{
//     public:
//         MainMenuWindow(int argc , char **argv){
//             Fl_Window *window = new Fl_Window(250,300,"8Puzzle");
            

//             Random = new Fl_Button(75,70,100,30,"Random");
//             Random->box(_FL_ROUND_UP_BOX);
//             Random->labelsize(14);
            
//             Random->callback(RandomButtonCallback,new Arguments(argc,argv));


//             OwnTable = new Fl_Button(75,110,100,30,"Own");
//             OwnTable->box(_FL_ROUND_UP_BOX);
//             OwnTable->labelsize(14);


//             Exit = new Fl_Button(75,150,100,30,"Exit");
//             Exit->box(_FL_ROUND_UP_BOX);
//             Exit->labelsize(14);
//             Exit->callback(ExitButtonCallback);

            
//             window -> end();
//             window->show(argc,argv);
//         }
        
//     private:
//         int status = 0;
//         int w = 250;
//         int h = 300;
//         Fl_Button * Random;
//         Fl_Button * OwnTable;
//         Fl_Button * Exit;
// };

// class UserInterface : public Fl_Window {
// public:
//   UserInterface(int X, int Y, int W, int H, int argc , char **argv , Board b ,const char *L = 0);
// };

// class Box : public Fl_Box {
// protected:
//     int handle(int e) {
      
//         static int offset[2] = { 0, 0 };
//         int ret = Fl_Box::handle(e);
//         switch ( e ) {
//             case FL_PUSH:
                
//                 offset[0] = x() - Fl::event_x();    // save where user clicked for dragging
//                 offset[1] = y() - Fl::event_y();
//                 printf("Pushing x : %d y : %d \n",offset[0],offset[1]);
//                 return(1);
//             case FL_RELEASE:
//                 return(1);
//             case FL_DRAG:
//                 position(offset[0]+Fl::event_x(), offset[1]+Fl::event_y());     // handle dragging
//                 G_win->redraw();
//                 return(1);
//         }
//         return(ret);
//     }
// public:
//     Box(int X, int Y, int W, int H,Fl_Window* _G_win, const char *L=0) : Fl_Box(X,Y,W,H,L) {
//         box(FL_UP_BOX);
//         color(FL_GRAY);
//         G_win = _G_win;
//     }
// private:
//     Fl_Window* G_win;
// };

// class TableOfTiles : public Fl_Tile{
//   public:
//     TableOfTiles(Board _board,int X,int Y,int W,int H,const char*L = 0);

//   private:
//     Board board;
//     std::vector<std::vector<Fl_Box>> Tiles;
// };
/*
End Classes
*/

int main(int argc , char **argv){
    
    // MainMenuWindow(argc ,argv);
    MainWindow * main_window =(new MainWindow(632,118,315,520,"8 Puzzle Solver"));
    main_window->end();
    main_window->show(argc,argv);
    return Fl::run();

}

// void RandomButtonCallback(Fl_Widget* widget, void* data){
//     Board RandomBoard{Board(true)};
//     new UserInterface(112,135,290,355,((Arguments*)data)->argc,((Arguments*)data)->argv,RandomBoard);
    
//     std::cout << "Random\n";
// }
// void OwnButtonCallback(Fl_Widget* , void*){
//     std::cout << "Own\n";
// }
// void ExitButtonCallback(Fl_Widget* , void*){
//     std::cout << "Exit\n";
//     exit(1);
// }
// std::vector<int> getGoalBoard(char a[10]);
// void setGoalBoard(Fl_Widget* widget,void* data);
// UserInterface::UserInterface(int X, int Y, int W, int H, int argc , char **argv,Board b, const char *L)
//   : Fl_Window(X, Y, W, H, L) {
// { Fl_Button* solve = new Fl_Button(110, 50, 70, 20, "solve");
//   solve->box(FL_ROUNDED_BOX);
//   solve->shortcut(0x73);
//   solve->color((Fl_Color)40);
//   solve->labeltype(FL_SHADOW_LABEL);
//   solve->labelfont(4);
//   solve->labelcolor((Fl_Color)53);
// } // Fl_Button* solve
// { Fl_Button* insert = new Fl_Button(210, 15, 70, 20, "insert");
//   insert->box(FL_ROUNDED_BOX);
//   insert->shortcut(0xff0d);
//   insert->color((Fl_Color)40);
//   insert->labeltype(FL_SHADOW_LABEL);
//   insert->labelfont(4);
//   insert->labelcolor((Fl_Color)53);
// // Fl_Button* insert
//  Fl_Input *inputGoal = new Fl_Input(20, 10, 180, 30,"Insert Goal state: ");
  
//   insert->callback(setGoalBoard,(void*)inputGoal);

// }

//  // Fl_Input* inputText
// TableOfTiles* table = new TableOfTiles(b,25,95,240,240,"Table");
// end();
// this->show(argc,argv);
// }

// void setGoalBoard(Fl_Widget* widget,void* data){
//   std::vector<int> numbers =  getGoalBoard((char*)((Fl_Input*)data)->value());
//   Board goal {Board(numbers)};
//   printf("\u001b[42mGoal");
//   printf("\u001b[0m : \n");
//   goal.disp();
// }
// //Text input
// std::vector<int> getGoalBoard(char a[20]){

//     std::vector<int> Numbers;
//     for(int i=0;i<20; i++)
//     {
        
//         if((int)(a[i])!=32/*space*/ && (int)(a[i])!=-38){
//             //check is correct or not is it duplicate or not or it has 0 or not check or valid number entered or did not 
//             Numbers.push_back((int)*(a+i*sizeof(char))-48);
            
//         }
        

//     }
//     for(size_t i = 0 ; i < Numbers.size() ; i++){
//       //I do not know but this for is important. 😮😮😮😮      
      
//     }    
//     return Numbers;
// }

// //TableOfTile



// TableOfTiles::TableOfTiles(Board board,int X,int Y,int W,int H,const char*L):Fl_Tile(X,Y,W,H,L){
//    Fl_Tile* TableTile = new Fl_Tile(60, 230, 210, 210, "Table");
//   TableTile->box(FL_THIN_DOWN_BOX);
//   int width{70};
//   int height{70};
//   int x{30};
//   int y{20};
//   for(size_t i {0} ; i < board.getTable().size() ; i++){
//     y = y+80;
//     x = 30;
//     for (size_t j{0} ; j < board.getTable().size() ; j++){
//       int number = board.getTable().at(i).at(j);
//       if(number!=0){
//       Fl_Box* Tile1 = new Fl_Box(x,y,width,height,num2char(number));
//         Tile1->box(FL_UP_BOX);
//         Tile1->color((Fl_Color)25);
//         Tile1->labelsize(32);
//         Tile1->labelcolor((Fl_Color)57);
//       }else{
//       Fl_Box* Tile1 = new Fl_Box(x,y,width,height,"");
//         Tile1->box(FL_DOWN_BOX);
//         Tile1->color((Fl_Color)28);
//         Tile1->labelsize(32);  
//       }
//       x=x+80;
//     }
//   }
   
//   TableTile->end();
// } // Fl_Tile* TableTile





