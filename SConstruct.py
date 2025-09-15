
import os
import sys

env = SConscript("godot-cpp/SConstruct")

BUILD_DIR = "build"

VariantDir(BUILD_DIR, "src", duplicate=0)

env.Append(CPPPATH=["include/"])

sources = []
for root, dirs, files in os.walk("src"):
    for f in files:
        if f.endswith(".cpp"):
            rel_path = os.path.relpath(os.path.join(root, f), "src")
            sources.append(os.path.join(BUILD_DIR, rel_path))

target_name = "demoproject/bin/myextension{}{}".format(env["suffix"], env["SHLIBSUFFIX"])

library = env.SharedLibrary(target=target_name, source=sources)

Default(library)
