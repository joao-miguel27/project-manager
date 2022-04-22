#include"mainframe.h"
#include"iostream"
#include"write_project.h"
#include"read_project.h"

pm_mainframe::pm_mainframe(wxWindow *parent) : mainframe(parent){}
pm_aboutframe::pm_aboutframe(wxWindow *parent) : aboutframe(parent){}

void pm_mainframe::about_screen(wxCommandEvent& event){

    // vector<project> *a = read_project();

    // for(auto i : *a){

    //     std::cout<< "project:" <<"\n";
    //     std::cout<<"\t"<< i.name <<"\n";
    //     std::cout<<"\t"<< i.description <<"\n";
    //     for(auto command : i.commands){
    //     std::cout<<"\t"<<command<<"\n";
    //     }
    //     std::cout<<"end"<<std::endl;

    // }
    wxFrame *about_frame = new pm_aboutframe(NULL);
    about_frame->Show(true);
}