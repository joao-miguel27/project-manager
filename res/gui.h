///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/button.h>
#include <wx/listbox.h>
#include <wx/sizer.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class mainframe
///////////////////////////////////////////////////////////////////////////////
class mainframe : public wxFrame
{
	private:

	protected:
		wxMenuBar* menubar;
		wxMenu* help_menu;
		wxButton* button_add_project;
		wxListBox* project_listBox;

		// Virtual event handlers, override them in your derived class
		virtual void about_screen( wxCommandEvent& event ) { event.Skip(); }
		virtual void add_project( wxCommandEvent& event ) { event.Skip(); }


	public:

		mainframe( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Project Manager"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 499,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~mainframe();

};

///////////////////////////////////////////////////////////////////////////////
/// Class aboutframe
///////////////////////////////////////////////////////////////////////////////
class aboutframe : public wxFrame
{
	private:

	protected:
		wxStaticText* Title_text;
		wxStaticText* description;

	public:

		aboutframe( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("About"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxCAPTION|wxCLOSE_BOX|wxFRAME_FLOAT_ON_PARENT|wxFRAME_NO_TASKBAR|wxTAB_TRAVERSAL );

		~aboutframe();

};

///////////////////////////////////////////////////////////////////////////////
/// Class add_projectframe
///////////////////////////////////////////////////////////////////////////////
class add_projectframe : public wxFrame
{
	private:

	protected:
		wxStaticText* add_name_staticText;
		wxTextCtrl* add_name_textCtrl;
		wxStaticText* Description_staticText;
		wxTextCtrl* Description_textCtrl;
		wxStaticText* command_staticText;
		wxTextCtrl* command_textCtrl;
		wxListBox* command_listBox;
		wxButton* create_project_button;

		// Virtual event handlers, override them in your derived class
		virtual void add_project_name( wxCommandEvent& event ) { event.Skip(); }
		virtual void add_description( wxCommandEvent& event ) { event.Skip(); }
		virtual void add_command( wxCommandEvent& event ) { event.Skip(); }
		virtual void item_clicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void create_project( wxCommandEvent& event ) { event.Skip(); }


	public:

		add_projectframe( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Add Project"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxCAPTION|wxFRAME_FLOAT_ON_PARENT|wxFRAME_NO_TASKBAR|wxFRAME_TOOL_WINDOW|wxSTAY_ON_TOP|wxTAB_TRAVERSAL );

		~add_projectframe();

};

