project(app)

add_executable(${PROJECT_NAME}
    main.cpp
)

find_package(fmt REQUIRED)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
    core::module1
    fmt::fmt
)
