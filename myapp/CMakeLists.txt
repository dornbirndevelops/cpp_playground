add_executable(myapp)

target_sources(myapp
    PRIVATE
        src/main.cpp
)

target_link_libraries(myapp
    PRIVATE
        mylib
)
