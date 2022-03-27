///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui.h"

///////////////////////////////////////////////////////////////////////////

mainframe::mainframe( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	menubar = new wxMenuBar( 0 );
	help_menu = new wxMenu();
	wxMenuItem* about_menuItem;
	about_menuItem = new wxMenuItem( help_menu, wxID_ANY, wxString( _("About") ) , wxEmptyString, wxITEM_NORMAL );
	help_menu->Append( about_menuItem );

	menubar->Append( help_menu, _("Help") );

	this->SetMenuBar( menubar );

	wxBoxSizer* vsizer;
	vsizer = new wxBoxSizer( wxVERTICAL );

	button_add_project = new wxButton( this, wxID_ANY, _("Add Project"), wxDefaultPosition, wxDefaultSize, 0 );

	button_add_project->SetDefault();

	button_add_project->SetBitmapPosition( wxLEFT );
	vsizer->Add( button_add_project, 0, wxALL, 5 );


	this->SetSizer( vsizer );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	help_menu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( mainframe::about_screen ), this, about_menuItem->GetId());
	button_add_project->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( mainframe::add_project ), NULL, this );
}

mainframe::~mainframe()
{
}

aboutframe::aboutframe( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* Sizer;
	Sizer = new wxBoxSizer( wxVERTICAL );

	Title_text = new wxStaticText( this, wxID_ANY, _("Project Manager"), wxDefaultPosition, wxSize( -1,40 ), wxALIGN_CENTER_HORIZONTAL );
	Title_text->Wrap( -1 );
	Title_text->SetFont( wxFont( 15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_ITALIC, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	Sizer->Add( Title_text, 0, wxALL|wxEXPAND, 5 );

	description = new wxStaticText( this, wxID_ANY, _("Description: An educative project"), wxDefaultPosition, wxDefaultSize, 0 );
	description->Wrap( -1 );
	Sizer->Add( description, 0, wxALL|wxEXPAND, 5 );


	this->SetSizer( Sizer );
	this->Layout();
	Sizer->Fit( this );

	this->Centre( wxBOTH );
}

aboutframe::~aboutframe()
{
}

add_projectframe::add_projectframe( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* addproject_Sizer;
	addproject_Sizer = new wxBoxSizer( wxVERTICAL );

	add_project_staticText = new wxStaticText( this, wxID_ANY, _("Project Name"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL );
	add_project_staticText->Wrap( -1 );
	add_project_staticText->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_SLANT, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	addproject_Sizer->Add( add_project_staticText, 0, wxALL|wxEXPAND, 5 );

	add_project_textCtrl1 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	addproject_Sizer->Add( add_project_textCtrl1, 0, wxALL|wxEXPAND, 5 );


	addproject_Sizer->Add( 250, 5, 0, wxEXPAND, 5 );

	Description_staticText = new wxStaticText( this, wxID_ANY, _("Description"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL );
	Description_staticText->Wrap( -1 );
	Description_staticText->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_SLANT, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	addproject_Sizer->Add( Description_staticText, 0, wxALL|wxEXPAND, 5 );

	Description_textCtrl = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE );
	addproject_Sizer->Add( Description_textCtrl, 0, wxALL|wxEXPAND, 5 );


	addproject_Sizer->Add( 0, 0, 100, wxEXPAND, 5 );

	command_staticText = new wxStaticText( this, wxID_ANY, _("Commands"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL );
	command_staticText->Wrap( -1 );
	command_staticText->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_SLANT, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	addproject_Sizer->Add( command_staticText, 0, wxALL|wxEXPAND, 5 );

	command_textCtrl = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	addproject_Sizer->Add( command_textCtrl, 0, wxALL|wxEXPAND, 5 );

	m_listBox1 = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	addproject_Sizer->Add( m_listBox1, 0, wxALL|wxEXPAND, 5 );


	addproject_Sizer->Add( 0, 0, 1, wxEXPAND, 5 );

	create_project_button = new wxButton( this, wxID_ANY, _("Create Project"), wxDefaultPosition, wxDefaultSize, 0 );
	addproject_Sizer->Add( create_project_button, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( addproject_Sizer );
	this->Layout();
	addproject_Sizer->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	add_project_textCtrl1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( add_projectframe::add_project_name ), NULL, this );
	Description_textCtrl->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( add_projectframe::add_description ), NULL, this );
	command_textCtrl->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( add_projectframe::add_command ), NULL, this );
	create_project_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( add_projectframe::create_project ), NULL, this );
}

add_projectframe::~add_projectframe()
{
}