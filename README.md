# debugpy11

This is a minimal application for testing VScode/debugpy debugging of Python application embedded in C++ with pybind11.

To build (all builds win64 only)

- clone
- open ```src\app1\app1\app1.vcxproj``` and build in debug.
- update submodules
- open ```cpython\PCBuild\pcbuild.sln``` in VS2022. Retarget to vs20200. Build in win64, Release
- copy```cpython\PCBuild\amd64\python39.dll``` to ```src\app1\x64\Debug```

Usage:

- start ```app1.exe```
- it prompts ```file :```. Answer with a python file name relative to ```src\app1\app1```. App1 executes the python file its embedded interpreter.
