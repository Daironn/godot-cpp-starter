# Godot C++ Starter

This repository provides a ready-to-use setup for developing Godot 4 games with C++ using VS Code.
It includes a minimal demo project and build configuration, so you can quickly start extending Godot with native C++ code.

## Requirements

### Godot 4.x (minimum version: 4.1)
### Python and SCons installed (build system)
### C++ compiler (LLVM, clangd)
### VS Code (recommended)

## Building the project

To compile the C++ extension, run:

```scons```


For better IDE support, generate a compilation database with:

```scons compiledb=yes```


You can also speed up the build by using multiple threads:

```scons  compiledb=yes -jN```
(where N is the number of threads you want to use).


## Setting up the extension

After compilation, you need to create a MyNode.gdextension file inside `demoproject/bin` with the following content:
```
[configuration]
entry_symbol = "myextension_library_init"
compatibility_minimum = "4.1"

[libraries]
windows.debug.x86_64 = "res://bin/myextension.windows.template_debug.x86_64.dll"
windows.release.x86_64 = "res://bin/myextension.windows.template_debug.x86_64.dll"
```

## Running the demo

1) Open Godot 4.
2) Load the demo project located at: `demoproject/project.godot`
3) Run the project – your compiled C++ extension will be loaded automatically.
