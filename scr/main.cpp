#include "main.h"
#include <wx/intl.h>
#include "mainframe.h"
#include "add_project.h"

IMPLEMENT_APP(project_manager)

bool project_manager::OnInit()
{
    wxFrame *mainframe = new pm_mainframe(NULL);
    mainframe->Show(true);

    return true;
}