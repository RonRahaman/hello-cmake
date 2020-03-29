project(step_03 C)

add_library(tick src/tick.c)
target_include_directories(tick PUBLIC include)

add_executable(time_5 src/time_5.c)
target_link_libraries(time_5 PUBLIC tick)

add_executable(time_any src/time_any.c)
target_link_libraries(time_any PUBLIC tick)
