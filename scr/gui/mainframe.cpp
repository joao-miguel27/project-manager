#include"mainframe.h"
#include"iostream"
#include"write_project.h"
#include"read_project.h"

pm_mainframe::pm_mainframe(wxWindow *parent) : mainframe(parent){

    list_project();

}
pm_aboutframe::pm_aboutframe(wxWindow *parent) : aboutframe(parent){}

// function that add projects to listbox
void pm_mainframe::list_project(){

    vector<project> *a = read_project();

    if(a == nullptr) return;

    this->project_listBox->Clear();

    for(auto i : *a){

        this->project_listBox->Append(i.name);

    }

}

// refresh listbox every time the window is activated
void pm_mainframe::refresh_list(wxActivateEvent& event){

    list_project();

}

void pm_mainframe::about_screen(wxCommandEvent& event){

    wxFrame *about_frame = new pm_aboutframe(NULL);
    about_frame->Show(true);
}