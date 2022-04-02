#include"mainframe.h"
#include"../util/write_project.h"

pm_mainframe::pm_mainframe(wxWindow* parent) : mainframe(parent){}
pm_aboutframe::pm_aboutframe(wxWindow* parent) : aboutframe(parent){}

void pm_mainframe::about_screen(wxCommandEvent& event){

    wxFrame* about_frame = new pm_aboutframe(NULL);
    about_frame->Show(true);
}