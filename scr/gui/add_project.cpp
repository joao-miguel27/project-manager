#include"mainframe.h"
#include"../util/write_project.h"
#include"add_project.h"
#include <iostream>

using std::vector; using std::string;

pm_add_project_frame::pm_add_project_frame(wxWindow *parent) : add_projectframe(parent){}

wxString name;
wxString description;
vector<wxString> commands;

void pm_mainframe::add_project(wxCommandEvent& event){

    wxFrame *add_project_frame = new pm_add_project_frame(NULL);
    add_project_frame->Show(true);

}

void pm_add_project_frame::add_project_name(wxCommandEvent& event){

    name = add_name_textCtrl->GetLineText(0);


}

void pm_add_project_frame::add_description(wxCommandEvent& event){

    description = Description_textCtrl->GetLineText(0);


}

void pm_add_project_frame::add_command(wxCommandEvent& event){

    
    wxString command = command_textCtrl->GetLineText(0);
    commands.push_back(command);
    command_textCtrl->SelectAll();
    command_listBox->Append(command);
    // for(auto i=proj->commands.begin(); i != proj->commands.end(); i++){std::cout<<"a  "<<*i<<std::endl;}

}

void pm_add_project_frame::item_clicked(wxCommandEvent& event){

    int selec = command_listBox->GetSelection();
    wxString selec_string = command_listBox->GetString(selec);
    
    command_listBox->Deselect(selec);
    command_listBox->Delete(selec);

    for(auto i=commands.begin(); i != commands.end(); i++){
        if(*i == selec_string){
            commands.erase(i);
            break;
        }
        else
            continue;
    }
    // for(auto i=proj->commands.begin(); i != proj->commands.end(); i++){std::cout<<"a  "<<*i<<std::endl;}
}

void pm_add_project_frame::create_project(wxCommandEvent& event){

    write_project(name, description, commands);

    add_projectframe::~add_projectframe();

}