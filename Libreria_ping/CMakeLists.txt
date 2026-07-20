cmake_minimum_required(VERSION 3.10)
project(PingLib VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Cerca le dipendenze
find_package(CURL REQUIRED)

# Definisci la Libreria Statica
add_library(ping_lib STATIC src/ping.cpp)
target_include_directories(ping_lib PUBLIC include)
target_link_libraries(ping_lib PUBLIC CURL::libcurl)

# Installazione
install(TARGETS ping_lib DESTINATION lib)
install(FILES include/ping.hpp DESTINATION include)

# Configurazione Packaging (CPack)
set(CPACK_PACKAGE_NAME "libping")
set(CPACK_PACKAGE_VERSION "1.0.0")
set(CPACK_PACKAGE_VENDOR "Developer")
set(CPACK_PACKAGE_CONTACT "vre2407@gmail.com")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Developer")

if(APPLE)
    set(CPACK_GENERATOR "DragNDrop")
elseif(UNIX AND NOT APPLE)
    set(CPACK_GENERATOR "DEB")
    set(CPACK_DEBIAN_PACKAGE_DEPENDS "libcurl4")
endif()

include(CPack)