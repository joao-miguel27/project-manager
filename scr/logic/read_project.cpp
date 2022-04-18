#include"read_project.h"
#include"iostream"

using std::vector;

vector<project> *read_project(){

    wxXmlDocument projects_file;
    wxString projects_path = wxStandardPaths::Get().GetUserDataDir() + 
                          wxFileName::GetPathSeparator() + 
                          "projects.xml";
    
    if(!projects_file.Load(projects_path)) return nullptr;

    if(!projects_file.GetRoot()->GetName().IsSameAs("projects")) return nullptr;

    vector<project> *projects = new vector<project>;
    
    wxXmlNode *node = projects_file.GetRoot()->GetChildren();

    while(node){
        project proj;
        proj.name = node->GetName();
        wxXmlNode *subnode = node->GetChildren();

        while(subnode){

            if(subnode->GetName() == "commands"){

                wxXmlNode *command_node = subnode->GetChildren();
                while(command_node){

                    proj.commands.push_back(command_node->GetChildren()->GetContent());
                    command_node = command_node->GetNext();

                }

            } 
            
            else if(subnode->GetName() == "description"){

                proj.description = subnode->GetChildren()->GetContent();

            }
                
            subnode = subnode->GetNext();

        }
        projects->push_back(proj);

        node = node->GetNext();

    }

    return projects;
  
}