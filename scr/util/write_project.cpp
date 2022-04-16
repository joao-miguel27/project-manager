#include"write_project.h"

void write_project(wxString name, wxString description, vector<wxString> commands){

    wxXmlDocument projects_file;
    wxString projects_path = wxStandardPaths::Get().GetUserDataDir() + 
                          wxFileName::GetPathSeparator() + 
                          "projects.xml";
    
    if(!wxFileName::FileExists(projects_path)){
          
        wxFileName::Mkdir(wxStandardPaths::Get().GetUserDataDir(), wxS_DIR_DEFAULT, wxPATH_MKDIR_FULL);

        projects_file.SetRoot(new wxXmlNode(wxXML_ELEMENT_NODE, "projects"));

        projects_file.Save(projects_path);
    }

    projects_file.Load(projects_path);

    wxXmlNode *name_node = new wxXmlNode(projects_file.GetRoot(), wxXML_ELEMENT_NODE, name);

    wxXmlNode *description_node = new wxXmlNode(name_node, wxXML_ELEMENT_NODE
                                                , "description");
                                    
    new wxXmlNode(description_node, wxXML_TEXT_NODE, "description", description);

    wxXmlNode *commands_node = new wxXmlNode(name_node, wxXML_ELEMENT_NODE, "commands");

    for(const wxString& i : commands){

        wxXmlNode *command_node = new wxXmlNode(commands_node, wxXML_ELEMENT_NODE, "command");

        new wxXmlNode(command_node, wxXML_TEXT_NODE, "command", i);

    }            

    projects_file.Save(projects_path);

}
