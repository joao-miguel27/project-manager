#include"write_project.h"

void write_project(wxString name, wxString description, vector<wxString> commands){

    wxXmlDocument projects_file;
    wxString projectsFile = wxStandardPaths::Get().GetUserDataDir() + 
                          wxFileName::GetPathSeparator() + 
                          wxT("projects.xml");
    
    if(!wxFileName::FileExists(projectsFile)){
          
        wxFileName::Mkdir(wxStandardPaths::Get().GetUserDataDir()
        , wxS_DIR_DEFAULT, wxPATH_MKDIR_FULL);

        projects_file.SetRoot(new wxXmlNode(wxXML_ELEMENT_NODE, wxT("projects")));

        projects_file.Save(projectsFile);
    }

    projects_file.Load(projectsFile);

    wxXmlNode* name_node = new wxXmlNode(projects_file.GetRoot(), wxXML_ELEMENT_NODE, name);

    wxXmlNode* description_node = new wxXmlNode(name_node, wxXML_ELEMENT_NODE
                                                , wxT("description"));
                                    
    new wxXmlNode(description_node, wxXML_TEXT_NODE, wxT("description"), description);

    wxXmlNode* commands_node = new wxXmlNode(name_node, wxXML_ELEMENT_NODE, wxT("commands"));

    for(const wxString& i : commands){

        wxXmlNode* command_node = new wxXmlNode(commands_node, wxXML_ELEMENT_NODE, wxT("command"));

        new wxXmlNode(command_node, wxXML_TEXT_NODE, wxT("command"), i);

    }            
    // new wxXmlNode(commands_node, wxXML_TEXT_NODE, wxT("commands"), project->commands);    

    projects_file.Save(projectsFile);

    }
