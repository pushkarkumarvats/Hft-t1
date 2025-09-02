add_library(hftpp_core STATIC lib.cpp lib.hpp)
target_include_directories(hftpp_core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(hftpp main.cpp)
target_link_libraries(hftpp PRIVATE hftpp_core)

# installation
install(TARGETS hftpp_core EXPORT hftppTargets ARCHIVE DESTINATION lib)
install(FILES lib.hpp DESTINATION include/hftpp)
