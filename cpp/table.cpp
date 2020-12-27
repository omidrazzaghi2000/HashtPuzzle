// generated by Fast Light User Interface Designer (fluid) version 1.0305

#include "table.h"

#include <FL/Fl_Image.H>

//------------Prototypes-------------------
const char * num2char(int number);
void makeTable(Fl_Tile * main_tile,Board board, std::vector<Fl_Box*> & tiles);
int getLevelNumber(char* num_char);
//call_backs:
  static void solveCallback(Fl_Widget * Fl_Widget,void* data);
//-----------------------------------------

static const unsigned char idata_icon_next[] =
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,127,127,8,113,113,113,
9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,117,117,117,13,70,70,70,105,18,18,18,155,109,109,109,70,
191,191,191,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,95,95,95,48,4,4,4,214,0,0,0,252,4,4,4,227,103,103,103,99,159,
159,159,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,153,153,153,10,89,89,89,71,0,0,0,112,
0,0,0,114,0,0,0,114,33,33,33,152,2,2,2,240,0,0,0,255,0,0,0,255,4,4,4,227,79,
79,79,100,182,182,182,7,0,0,0,0,0,0,0,0,0,0,0,0,92,92,92,69,11,11,11,214,0,0,0,
248,0,0,0,249,0,0,0,249,0,0,0,250,0,0,0,254,0,0,0,255,0,0,0,255,0,0,0,254,5,5,5,
226,110,110,110,99,191,191,191,8,0,0,0,0,0,0,0,0,78,78,78,94,0,0,0,254,0,0,0,
255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,
254,4,4,4,229,88,88,88,101,182,182,182,7,0,0,0,0,77,77,77,95,0,0,0,255,0,0,0,
255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,
255,0,0,0,254,4,4,4,228,85,85,85,92,170,170,170,3,77,77,77,95,0,0,0,255,0,0,0,
255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,
255,0,0,0,255,0,0,0,252,6,6,6,163,76,76,76,10,77,77,77,95,0,0,0,255,0,0,0,255,0,
0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,
0,0,0,253,10,10,10,217,82,82,82,93,102,102,102,5,78,78,78,94,0,0,0,254,0,0,0,
255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,
253,10,10,10,218,82,82,82,99,156,156,156,13,0,0,0,0,100,100,100,56,7,7,7,194,0,
0,0,207,0,0,0,207,0,0,0,207,4,4,4,227,0,0,0,253,0,0,0,255,0,0,0,255,0,0,0,253,
10,10,10,214,92,92,92,99,156,156,156,13,0,0,0,0,0,0,0,0,170,170,170,3,81,81,81,
22,63,63,63,28,63,63,63,28,63,63,63,28,59,59,59,82,2,2,2,234,0,0,0,255,0,0,0,
253,10,10,10,216,97,97,97,97,176,176,176,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,65,65,65,35,2,2,2,212,0,0,0,249,9,9,9,214,87,87,
87,96,162,162,162,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,145,145,145,7,89,89,89,91,26,26,26,143,79,79,79,67,185,185,185,
11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,170,170,170,3,127,127,127,8,127,127,127,2,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0};
static Fl_Image *image_icon_next() {
  static Fl_Image *image = new Fl_RGB_Image(idata_icon_next, 15, 15, 4, 0);
  return image;
}

static const unsigned char idata_icon_back[] =
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,127,127,8,102,102,102,
10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,170,170,170,3,113,113,113,45,59,59,59,124,22,22,22,148,154,154,
154,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
127,127,127,2,125,125,125,53,32,32,32,175,0,0,0,244,0,0,0,248,16,16,16,124,127,
127,127,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,1,
142,142,142,52,35,35,35,172,1,1,1,247,0,0,0,255,0,0,0,252,23,23,23,172,87,87,87,
35,63,63,63,28,63,63,63,28,66,66,66,27,137,137,137,13,0,0,0,0,0,0,0,0,170,170,
170,3,147,147,147,50,23,23,23,174,1,1,1,245,0,0,0,255,0,0,0,255,0,0,0,254,3,3,3,
243,4,4,4,215,0,0,0,210,0,0,0,210,0,0,0,209,46,46,46,144,0,0,0,0,170,170,170,3,
140,140,140,49,24,24,24,174,1,1,1,245,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,
0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,23,23,23,206,0,0,0,0,115,115,
115,42,29,29,29,173,1,1,1,246,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,
0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,23,23,23,207,0,0,0,0,23,23,
23,77,1,1,1,237,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,
0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,23,23,23,207,0,0,0,0,167,167,
167,29,34,34,34,172,0,0,0,250,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,
0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,23,23,23,207,0,0,0,0,0,0,0,
0,163,163,163,39,30,30,30,176,0,0,0,250,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,
255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,22,22,22,205,0,0,0,0,0,0,
0,0,0,0,0,0,194,194,194,38,30,30,30,176,0,0,0,251,0,0,0,255,0,0,0,255,0,0,0,
255,0,0,0,252,0,0,0,249,0,0,0,249,0,0,0,249,4,4,4,236,55,55,55,146,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,161,161,161,38,33,33,33,173,0,0,0,250,0,0,0,255,0,0,0,252,
18,18,18,194,21,21,21,108,7,7,7,101,7,7,7,101,16,16,16,91,139,139,139,31,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,161,161,161,38,29,29,29,174,0,0,0,245,2,2,2,
243,19,19,19,128,153,153,153,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,136,136,136,28,63,63,63,112,25,25,25,140,127,
127,127,42,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,127,127,2,127,127,127,8,255,255,255,1,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static Fl_Image *image_icon_back() {
  static Fl_Image *image = new Fl_RGB_Image(idata_icon_back, 15, 15, 4, 0);
  return image;
}

Fl_Menu_Item MainWindow::menu_method_choices[] = {
 {"Depth First Search", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"Breadth First Search", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {0,0,0,0,0,0,0,0,0}
};
Fl_Menu_Item* MainWindow::DFS = MainWindow::menu_method_choices + 0;
Fl_Menu_Item* MainWindow::BFS = MainWindow::menu_method_choices + 1;
MainWindow::MainWindow(int X, int Y, int W, int H, const char *L)
  : Fl_Window(X, Y, W, H, L) {
this->box(FL_ENGRAVED_BOX);
this->color((Fl_Color)64);
this->labelfont(1);
this->labelcolor(FL_BACKGROUND2_COLOR);
{ solve = new Fl_Button(220, 175, 70, 25, "solve");
  solve->box(FL_GTK_UP_BOX);
  solve->shortcut(0x73);
  solve->color((Fl_Color)73);
  solve->labelfont(1);
  solve->labelcolor(FL_YELLOW);
  solve->callback(solveCallback,this);
} // Fl_Button* solve
{ goal_input = new Fl_Input(110, 90, 180, 30, "Insert Goal : ");
  goal_input->labelfont(1);
  goal_input->labelcolor(FL_YELLOW);
  goal_input->textsize(12);
} // Fl_Input* goal_input
{ main_tile = new Fl_Tile(60, 230, 210, 210, "Table");
  main_tile->box(FL_THIN_UP_BOX);
  main_tile->color((Fl_Color)123);
  main_tile->labelfont(1);
  main_tile->labelcolor(FL_YELLOW);
  makeTable(main_tile,board,tiles);

 
  main_tile->end();
} // Fl_Tile* o
{ user_input_table = new Fl_Input(110, 50, 180, 30, "Insert Start : ");
  user_input_table->labelfont(1);
  user_input_table->labelcolor(FL_YELLOW);
  user_input_table->textsize(12);
} // Fl_Input* user_input_table
{ level_output_box = new Fl_Value_Output(210, 445, 60, 25, "Level");
  level_output_box->box(FL_PLASTIC_DOWN_BOX);
  level_output_box->color((Fl_Color)74);
  level_output_box->labelfont(1);
  level_output_box->labelcolor(FL_YELLOW);
  level_output_box->textfont(1);
  level_output_box->textsize(19);
  level_output_box->textcolor(FL_GRAY0);
} // Fl_Value_Output* level_output_box
{ next_button = new Fl_Button(90, 445, 25, 25);
  next_button->box(FL_GTK_UP_BOX);
  next_button->color((Fl_Color)82);
  next_button->image( image_icon_next() );
} // Fl_Button* next_button
{ previous_button = new Fl_Button(60, 445, 25, 25);
  previous_button->box(FL_GTK_UP_BOX);
  previous_button->color((Fl_Color)82);
  previous_button->image( image_icon_back() );
} // Fl_Button* previous_button
{ progress_bar = new Fl_Progress(60, 480, 210, 10);
  progress_bar->box(FL_ROUNDED_BOX);
  progress_bar->color((Fl_Color)17);
  progress_bar->selection_color(FL_DARK_GREEN);
  progress_bar->labelfont(1);
  progress_bar->labelcolor(FL_GREEN);
} // Fl_Progress* progress_bar
{ method_choices = new Fl_Choice(110, 130, 180, 25, "Method : ");
  method_choices->box(FL_PLASTIC_DOWN_BOX);
  method_choices->down_box(FL_BORDER_BOX);
  method_choices->color((Fl_Color)64);
  method_choices->selection_color(FL_FOREGROUND_COLOR);
  method_choices->labelfont(1);
  method_choices->labelcolor(FL_YELLOW);
  method_choices->textfont(15);
  method_choices->menu(menu_method_choices);
} // Fl_Choice* method_choices
{ number_of_level_input = new Fl_Input(140, 170, 65, 30, "Number of level : ");
  number_of_level_input->box(FL_GTK_DOWN_BOX);
  number_of_level_input->labelfont(1);
  number_of_level_input->labelcolor(FL_YELLOW);
  number_of_level_input->textsize(12);
} // Fl_Input* number_of_level_input
end();
}


const char * num2char(int number){
  switch (number)
  {
  case 1:
    return "1";
  case 2:
    return "2";  
  case 3:
    return "3";
  case 4:
    return "4";
  case 5:
    return "5";
  case 6:
    return "6";
  case 7:
    return "7";
  case 8:
    return "8";
  default:
    return "0";
  }
} 

//--------------HelperFunctions-----------------
std::vector<int> getBoard(char a[20]){

    std::vector<int> Numbers;
    for(int i=0;i<20; i++)
    {
        
        if((int)(a[i])!=32/*space*/ && (int)(a[i])!=-38){
            //check is correct or not is it duplicate or not or it has 0 or not check or valid number entered or did not 
            Numbers.push_back((int)*(a+i*sizeof(char))-48);
            
        }
        

    }
    for(size_t i = 0 ; i < Numbers.size() ; i++){
      //I do not know but this for is important. 😮😮😮😮      
      
    }    
    return Numbers;
}


void makeTable(Fl_Tile * main_tile,Board board , std::vector<Fl_Box*> & tiles){
  int width{70};
  int height{70};
  int x{30};
  int y{160};
  tiles.erase(tiles.begin(),tiles.end());
    for(size_t i {0} ; i < board.getTable().size() ; i++){
    y = y+70;
    x = 60;
    for (size_t j{0} ; j < board.getTable().size() ; j++){
      int number = board.getTable().at(i).at(j);
      Fl_Box* Tile = new Fl_Box(x,y,width,height,num2char(number));
        Tile->box(FL_GTK_UP_BOX);
        Tile->color((Fl_Color)73);
        Tile->selection_color((Fl_Color)48);
        Tile->labelfont(1);
        Tile->labelsize(32);
        Tile->labelcolor(FL_YELLOW);
      if(number==0){
        Tile->clear_visible();
      }
      main_tile->add(Tile);
      tiles.push_back(Tile);
      x=x+70;
    }
  }
}

int getLevelNumber(char* num_char){
  std::string num_string(num_char);
  return std::stoi(num_string);
}

//----------------------------------------------

//-----------------CallBacks--------------------
static void solveCallback(Fl_Widget * Fl_Widget,void* data){
  //start and goal board
  Board start;
  Board goal;
  if(((MainWindow*)data)->goal_input->size()!=0){
      std::vector<int> numbers =  getBoard((char*)((MainWindow*)data)->goal_input->value());
      goal=Board(numbers);
      printf("\u001b[44mGoal saved");
      printf("\u001b[0m : \n");
  }else{
      std::vector<int> numbers = {1,2,3,4,5,6,7,8,0};
      goal=Board(numbers);
      printf("\u001b[44mGoal is default");
      printf("\u001b[0m\n");
  }
  if(((MainWindow*)data)->user_input_table->size()==0){
      start = ((MainWindow*)data)->board;
  }else{
      start = getBoard((char*)((char*)((MainWindow*)data)->user_input_table->value()));
      
      ((MainWindow*)data)->main_tile->clear();
      
      makeTable(((MainWindow*)data)->main_tile,start,((MainWindow*)data)->tiles);
      
      ((MainWindow*)data)->redraw();
      
  }

  //set methods and get levels
  if(((MainWindow*)data)->number_of_level_input->size()!=0){
    int level_number {getLevelNumber((char*)((MainWindow*)data)->number_of_level_input->value())};
    switch (((MainWindow*)data)->method_choices->value())
    {
    case 0:
      /*DFS*/
      
      
      break;
    case 1:
      /*BFS*/

      break;
    default:
      break;
    }
  }else{
    
    ((MainWindow*)data)->number_of_level_input->take_focus();
    

    printf("\u001b[41mPlease enter level number ");
    printf("\u001b[0m\n");
  }
  

}

