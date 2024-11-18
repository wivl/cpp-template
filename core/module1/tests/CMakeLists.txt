project(tests)

add_executable(${PROJECT_NAME}
    tests.cpp
)

find_package(Gtest REQUIRED)


target_link_libraries(${PROJECT_NAME}
    PRIVATE
        core::module1
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})

# add_test(NAME core_test COMMAND ${PROJECT_NAME})

