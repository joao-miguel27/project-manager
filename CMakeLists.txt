cmake_minimum_required(VERSION 3.2)
project(project-manager VERSION 0.1.0)

include(CTest)
enable_testing()

set(PROJECT_NAME project-manager)
# fazer gerenciador de projetos que abre apps e  pomodoro timer
set(SOURCE
  scr/main.cpp scr/main.h
  scr/gui/mainframe.cpp scr/gui/mainframe.h
  scr/logic/write_project.cpp scr/logic/write_project.h
  scr/logic/read_project.cpp scr/logic/read_project.h
  scr/gui/add_project.cpp scr/gui/add_project.h
  )

set(RES
  res/gui.cpp res/gui.h
)

add_executable(${PROJECT_NAME} ${RES} ${SOURCE})

target_include_directories(${PROJECT_NAME} PRIVATE res)
target_include_directories(${PROJECT_NAME} PRIVATE scr/gui)
target_include_directories(${PROJECT_NAME} PRIVATE scr/logic)

# find_package(wxWidgets REQUIRED)#COMPONENTS gl core base xml
# if(wxWidgets_FOUND)
#   include(${wxWidgets_USE_FILE})
#   # and for each of your dependent executable/library targets:
#   target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})
# else()
  target_link_libraries(${PROJECT_NAME} "`wx-config-gtk3 --libs`")
  add_definitions(`wx-config-gtk3 --cxxflags`)
# endif()

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

