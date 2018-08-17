
include_directories(${PROJECT_SOURCE_DIR}/zxc_json)

add_executable(print_document print_document.cc)

target_link_libraries(print_document   zxc_json)


install(TARGETS print_document DESTINATION bin )
