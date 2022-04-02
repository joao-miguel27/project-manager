#include "main.h"
#include "gui/mainframe.h"
#include "gui/add_project.h"

IMPLEMENT_APP(project_manager)

bool project_manager::OnInit()
{
    wxFrame* mainframe = new pm_mainframe(NULL);
    mainframe->Show(true);

    return true;
}