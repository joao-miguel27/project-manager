#ifndef write_project_H
#define write_project_H

#include <wx/stdpaths.h>
#include <wx/xml/xml.h>
#include <wx/filename.h>
#include <vector>

using std::vector;


struct project{
    wxString name;

    wxString description;

    vector<wxString> commands;
};

void write_project(project project);


#endif