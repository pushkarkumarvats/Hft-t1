add_executable(test_hftpp test_main.cpp)
target_link_libraries(test_hftpp PRIVATE hftpp_core)

add_test(NAME hftpp_unit_tests COMMAND test_hftpp)
