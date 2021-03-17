# Install script for directory: /home/jzn/hal/HAL/HAL/src/hydrophone_processor_pkg

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/jzn/hal/HAL/HAL/src/hydrophone_processor_pkg/install/hydrophone_processor_pkg")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hydrophone_processor_pkg/environment" TYPE FILE FILES "/home/jzn/hal/HAL/HAL/src/hydrophone_processor_pkg/build/hydrophone_processor_pkg/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hydrophone_processor_pkg/environment" TYPE FILE FILES "/home/jzn/hal/HAL/HAL/src/hydrophone_processor_pkg/build/hydrophone_processor_pkg/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/hydrophone_processor_pkg" TYPE DIRECTORY FILES "/home/jzn/hal/HAL/HAL/src/hydrophone_processor_pkg/hydrophone_processor_pkg/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
        "/home/jzn/hal/HAL/HAL/src/hydrophone_processor_pkg/install/hydrophone_processor_pkg/lib/python3.8/site-packages/hydrophone_processor_pkg"
      )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/hydrophone_processor_pkg" TYPE PROGRAM FILES
    "/home/jzn/hal/HAL/HAL/src/hydrophone_processor_pkg/scripts/hydrophone_processor_aclient.py"
    "/home/jzn/hal/HAL/HAL/src/hydrophone_processor_pkg/scripts/hydrophone_processor_aserver.py"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/jzn/hal/HAL/HAL/src/hydrophone_processor_pkg/build/hydrophone_processor_pkg/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/hydrophone_processor_pkg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/jzn/hal/HAL/HAL/src/hydrophone_processor_pkg/build/hydrophone_processor_pkg/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/hydrophone_processor_pkg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hydrophone_processor_pkg/environment" TYPE FILE FILES "/home/jzn/ros2_foxy/ros2-linux/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hydrophone_processor_pkg/environment" TYPE FILE FILES "/home/jzn/hal/HAL/HAL/src/hydrophone_processor_pkg/build/hydrophone_processor_pkg/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hydrophone_processor_pkg/environment" TYPE FILE FILES "/home/jzn/ros2_foxy/ros2-linux/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hydrophone_processor_pkg/environment" TYPE FILE FILES "/home/jzn/hal/HAL/HAL/src/hydrophone_processor_pkg/build/hydrophone_processor_pkg/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hydrophone_processor_pkg" TYPE FILE FILES "/home/jzn/hal/HAL/HAL/src/hydrophone_processor_pkg/build/hydrophone_processor_pkg/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hydrophone_processor_pkg" TYPE FILE FILES "/home/jzn/hal/HAL/HAL/src/hydrophone_processor_pkg/build/hydrophone_processor_pkg/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hydrophone_processor_pkg" TYPE FILE FILES "/home/jzn/hal/HAL/HAL/src/hydrophone_processor_pkg/build/hydrophone_processor_pkg/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hydrophone_processor_pkg" TYPE FILE FILES "/home/jzn/hal/HAL/HAL/src/hydrophone_processor_pkg/build/hydrophone_processor_pkg/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hydrophone_processor_pkg" TYPE FILE FILES "/home/jzn/hal/HAL/HAL/src/hydrophone_processor_pkg/build/hydrophone_processor_pkg/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/jzn/hal/HAL/HAL/src/hydrophone_processor_pkg/build/hydrophone_processor_pkg/ament_cmake_index/share/ament_index/resource_index/packages/hydrophone_processor_pkg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hydrophone_processor_pkg/cmake" TYPE FILE FILES
    "/home/jzn/hal/HAL/HAL/src/hydrophone_processor_pkg/build/hydrophone_processor_pkg/ament_cmake_core/hydrophone_processor_pkgConfig.cmake"
    "/home/jzn/hal/HAL/HAL/src/hydrophone_processor_pkg/build/hydrophone_processor_pkg/ament_cmake_core/hydrophone_processor_pkgConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hydrophone_processor_pkg" TYPE FILE FILES "/home/jzn/hal/HAL/HAL/src/hydrophone_processor_pkg/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/jzn/hal/HAL/HAL/src/hydrophone_processor_pkg/build/hydrophone_processor_pkg/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
