
include_directories(${PROJECT_SOURCE_DIR}/base)
link_directories(${PROJECT_BINARY_DIR}/lib)

set(LIB_SRC 
	Action.cpp
	Game.cpp
	GameObject.cpp
	PicLoader.cpp
	Picture.cpp
	Color.cpp
	Scene.cpp
	PainterCursor.cpp
	Timer.cpp
	TimerManager.cpp
	KeyboardInputCollector.cpp
	KeyboardBuffer.cpp
	KeyboardEventDispatcher.cpp
	Drawable.cpp
	CollisionDetection.cpp
	)

add_library(libengine ${LIB_SRC})

target_link_libraries(libengine libbase)
target_link_libraries(libengine curses)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
set_target_properties(libengine PROPERTIES OUTPUT_NAME "engine")

message(STATUS ${PROJECT_SOURCE_DIR})


add_subdirectory(test)
