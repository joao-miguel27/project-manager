#ifndef mainframe_H
#define mainframe_H

#include<gui.h>

class pm_mainframe : public mainframe{

	private:

	protected:
        void add_project( wxCommandEvent& event);
        void about_screen( wxCommandEvent& event );

	public:

        void list_project();
        void refresh_list( wxActivateEvent& event );
		pm_mainframe(wxWindow *parent);

};

class pm_aboutframe : public aboutframe{

    private:

	protected:

    public:

        pm_aboutframe(wxWindow *parent);

};


#endif