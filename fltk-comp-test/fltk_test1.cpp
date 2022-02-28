/*************************************************
# fltk-test1.cpp,
# project: full-comp-test
Just wanted to try compiling & linking the
FLTK library. Got main() and #includes from an
example in the FLTK 1.3.5 documentation.

edit: i just checked codeblocks's fltk template
      (non-FLUID) is the same as this example
      from the docset; barring the order of
      some statements and a couple variables.

authored by brianc2788@gmail.com
*************************************************/
#include <stdio.h>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>

int main(int argc,char* argv[]){
	Fl_Window* window = new Fl_Window(340,180);
	Fl_Box* box = new Fl_Box(20,40,300,100,"Hi, FLTK!\nbrianc2788");

	box->box(FL_UP_BOX);
	box->labelfont(FL_BOLD+FL_ITALIC);
	box->labelsize(36);
	box->labeltype(FL_SHADOW_LABEL);

	window->end();
	window->show(argc,argv);
	return Fl::run();
}
