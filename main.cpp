#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include "variables.h"

int main(int argc, char **argv){
    Fl::visual(FL_RGB);

    auto* window = new Fl_Window(screen_width, screen_height, title);

    auto* box = new Fl_Box(screen_width/2-150,screen_height/2-50,300,100,"Some Text");

    box->labelfont(FL_BOLD+FL_ITALIC);
    box->labelsize(36);
    box->labeltype(FL_SHADOW_LABEL);

    window->end();
    window->show(argc, argv);

    return Fl::run();
}