# Visual Studio solution & projects for libimobiledevice

[![Build Status](https://dev.azure.com/libimobiledevice-win32/imobiledevice-net/_apis/build/status/libimobiledevice-win32.libimobiledevice-vs%20(1)?branchName=master)](https://dev.azure.com/libimobiledevice-win32/imobiledevice-net/_build/latest?definitionId=12&branchName=master)

The libimobiledevice project consists of multiple libraries - such as libplist, libusbmuxd
and libimobiledevice.

Each library lives in its own repository, and references the other libraries. By default,
these projects are referenced as Vcpkg packages. This provides great isolation for each library.

This setup can be cumersome when you're making changes that touch multiple libraries at once,
because you need to make a change, update the dependency, and try again.

This repository contains a Visual Studio solution and projects which allow you to build
all of libimobiledevice at once, using Visual Studio.

## Getting started

You'll need [vcpkg](https://github.com/microsoft/vcpkg) to install dependencies (such as libcurl)
and a couple of repositories to configure your development environment.

To install vcpkg and the dependencies, run:

```
git clone https://github.com/microsoft/vcpkg
vcpkg\bootstrap-vcpkg.bat
vcpkg\vcpkg integrate install
vcpkg\vcpkg install libiconv:%BUILD_ARCH%-windows zlib:%BUILD_ARCH%-windows openssl:%BUILD_ARCH%-windows dirent:%BUILD_ARCH%-windows getopt:%BUILD_ARCH%-windows curl:%BUILD_ARCH%-windows libzip:%BUILD_ARCH%-windows
```

To get the libmobiledevice source code, run:

```
get-source.cmd
```

You can now open the `libimobiledevice-vs.sln` solution and start compiling libimobiledevice.

## Consulting, Training and Support

This repository is maintained by [Quamotion](http://quamotion.mobi). Quamotion develops test software for iOS and Android applications, based on the WebDriver protocol.

Quamotion offers various technologies related to automating iOS devices using computers running Windows or Linux.

This includes:
* The ability to remotely control iOS devices
* Extensions to libimobiledevice with support for the Instruments protocol
* Running Xcode UI Tests and Facebook WebDriverAgent tests

In certain  cases, Quamotion also offers professional services - such as consulting, training and support - related to imobiledivice-net and libimobiledevice.

Contact us at [info@quamotion.mobi](mailto:info@quamotion.mobi) for more information.