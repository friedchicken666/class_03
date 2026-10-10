# class_03 项目编译运行说明

## 编译步骤
在项目根目录（`class_03`，存在`CMakeLists.txt`的文件夹）执行以下终端命令：

```bash
# 1. 创建构建目录，配置CMake
cmake -S . -B build

# 2. 编译构建项目
cmake --build build
