#ifndef add_project_H
#define add_project_H

#include"gui.h"

class pm_add_project_frame : public add_projectframe{

    protected:

        void add_project_name(wxCommandEvent& event);
	    void add_description(wxCommandEvent& event);
	    void add_command(wxCommandEvent& event);
	    void create_project(wxCommandEvent& event);
        void item_clicked(wxCommandEvent& event);

    public:
        pm_add_project_frame(wxWindow *parent);

};


#endif