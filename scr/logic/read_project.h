#ifndef read_project_H
#define read_project_H

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

vector<project> *read_project();


#endif