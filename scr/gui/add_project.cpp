#include"mainframe.h"
#include"../util/write_project.h"
#include"add_project.h"
#include <vector>

using std::vector;

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

// {
// unsigned int list_box_pos = 0;
vector<wxString> commands;

void pm_add_project_frame::add_command(wxCommandEvent& event){

    // GetLineText(0);
    wxString command = command_textCtrl->GetLineText(0);
    commands.push_back(command);
    command_listBox->Append(command);
    // list_box_pos++;

}

// }