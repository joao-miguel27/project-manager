#include"mainframe.h"
#include"../util/write_project.h"
#include"add_project.h"

pm_add_project_frame::pm_add_project_frame(wxWindow* parent) : add_projectframe(parent){}

void pm_mainframe::add_project(wxCommandEvent& event){

    project proj;
    wxFrame* add_project_frame = new pm_add_project_frame(NULL);
    add_project_frame->Show(true);
    // proj.name = "top";
    // proj.description = "tgmeroy";
    // proj.commands = {"fwt", "tgrewy"};

    // write_project(proj);
}