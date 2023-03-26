set(LIBRARY_NAME math)

file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_library(${LIBRARY_NAME} STATIC ${SRC_FILES})

target_include_directories(${LIBRARY_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/includes)

target_compile_options(${LIBRARY_NAME} PRIVATE -Wall)