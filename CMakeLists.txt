cmake_minimum_required(VERSION 3.2)
project(project-manager VERSION 0.1.0)

include(CTest)
enable_testing()

set(PROJECT_NAME project-manager)
# fazer gerenciador de projetos que abre apps e  pomodoro timer
set(SOURCE
  scr/main.cpp scr/main.h
  scr/gui/res/gui.cpp scr/gui/res/gui.h
  scr/gui/mainframe.cpp scr/gui/mainframe.h
  scr/util/write_project.cpp scr/util/write_project.h
  scr/util/read_project.cpp scr/util/read_project.h
  scr/gui/add_project.cpp scr/gui/add_project.h
  )

add_executable(${PROJECT_NAME} ${SOURCE})

find_package(wxWidgets REQUIRED )#COMPONENTS gl core base xml
if(wxWidgets_FOUND)
  include(${wxWidgets_USE_FILE})
  # and for each of your dependent executable/library targets:
  target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})
endif()

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

