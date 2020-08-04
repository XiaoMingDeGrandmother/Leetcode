CMAKE_MINIMUM_REQUIRED(VERSION 2.8)    #cmake 最低版本要求，低于2.6构建过程会被终止。
PROJECT(test)                          #定义工程名称
MESSAGE(STATUS "Project: SERVER")      #打印相关消息消息
SET(CMAKE_BUILE_TYPE DEBUG)            #指定编译类型
INCLUDE_DIRECTORIES(include)           #头文件目录
 
AUX_SOURCE_DIRECTORY(src DIR_SRCS)     #source directory，源文件目录

SET(TEST_MATH ${DIR_SRCS})

ADD_EXECUTABLE(${PROJECT_NAME} ${TEST_MATH})  #add executable file，添加要编译的可执行文件

TARGET_LINK_LIBRARIES(${PROJECT_NAME} m)      #add link library，添加可执行文件所需要的库，比如我们用到了libm.so（命名规则：lib+name+.so），就添加该库的名称
