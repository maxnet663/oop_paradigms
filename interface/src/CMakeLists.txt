add_executable(shape_interface main.cpp)

    target_include_directories(shape_interface PUBLIC ${MY_INCLUDE_DIR})

    add_library(my_lib ${MY_INCLUDE_DIR}/shape.h shape.cpp
            ${MY_INCLUDE_DIR}/circle.h circle.cpp
            ${MY_INCLUDE_DIR}/triangle.h triangle.cpp
            ${MY_INCLUDE_DIR}/rectangle.h rectangle.cpp
            )

    target_include_directories(my_lib PUBLIC ${MY_INCLUDE_DIR})

    target_link_libraries(shape_interface PRIVATE my_lib)