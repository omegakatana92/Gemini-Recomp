# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file LICENSE.rst or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "C:/Users/omega/Documents/tools/gbarecomp-cli-windows-x86_64/Projects/MyGameRecomp/build-runtime/_deps/tomlplusplus-src")
  file(MAKE_DIRECTORY "C:/Users/omega/Documents/tools/gbarecomp-cli-windows-x86_64/Projects/MyGameRecomp/build-runtime/_deps/tomlplusplus-src")
endif()
file(MAKE_DIRECTORY
  "C:/Users/omega/Documents/tools/gbarecomp-cli-windows-x86_64/Projects/MyGameRecomp/build-runtime/_deps/tomlplusplus-build"
  "C:/Users/omega/Documents/tools/gbarecomp-cli-windows-x86_64/Projects/MyGameRecomp/build-runtime/_deps/tomlplusplus-subbuild/tomlplusplus-populate-prefix"
  "C:/Users/omega/Documents/tools/gbarecomp-cli-windows-x86_64/Projects/MyGameRecomp/build-runtime/_deps/tomlplusplus-subbuild/tomlplusplus-populate-prefix/tmp"
  "C:/Users/omega/Documents/tools/gbarecomp-cli-windows-x86_64/Projects/MyGameRecomp/build-runtime/_deps/tomlplusplus-subbuild/tomlplusplus-populate-prefix/src/tomlplusplus-populate-stamp"
  "C:/Users/omega/Documents/tools/gbarecomp-cli-windows-x86_64/Projects/MyGameRecomp/build-runtime/_deps/tomlplusplus-subbuild/tomlplusplus-populate-prefix/src"
  "C:/Users/omega/Documents/tools/gbarecomp-cli-windows-x86_64/Projects/MyGameRecomp/build-runtime/_deps/tomlplusplus-subbuild/tomlplusplus-populate-prefix/src/tomlplusplus-populate-stamp"
)

set(configSubDirs Debug)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/omega/Documents/tools/gbarecomp-cli-windows-x86_64/Projects/MyGameRecomp/build-runtime/_deps/tomlplusplus-subbuild/tomlplusplus-populate-prefix/src/tomlplusplus-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/omega/Documents/tools/gbarecomp-cli-windows-x86_64/Projects/MyGameRecomp/build-runtime/_deps/tomlplusplus-subbuild/tomlplusplus-populate-prefix/src/tomlplusplus-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
