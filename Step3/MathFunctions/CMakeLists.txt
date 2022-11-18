add_library(MathFunctions mysqrt.cxx)

# TODO 1: State that anybody linking to MathFunctions needs to include the
# current source directory, while MathFunctions itself doesn't.
# Hint: Use target_include_directories with the INTERFACE keyword
#Remember that CMAKE_CURRENT_SOURCE_DIR is the path to the source directory currently being processed
#有这句话之后,引用这个库的CMakeLists.txt 不需要指定外部库的头文件的搜索目录
target_include_directories(MathFunctions INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})