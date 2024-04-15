add_library(SharedCodeLib
    STATIC
        SharedCode.cpp
)

target_include_directories(SharedCodeLib
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)
