# C++ Template

A personal C++ project template using the `CMake` meta build system with [cmake-presets](https://cmake.org/cmake/help/latest/manual/cmake-presets.7.html), and [Conan2](https://conan.io/) package manager. Building the project and installing dependencies can be done with a single command.

## Build (Template)

1. Install CMake, Ninja, and Conan2

Assuming you're using the Windows platform and the [Scoop](https://scoop.sh/) package manager:

```
scoop install cmake ninja
```

To install Conan, it is recommended to use `pip`:

```
pip install conan
```

2. Run build command

```
cmake --workflow --preset windows
```

This will automatically install the necessary dependencies and configure the build.
