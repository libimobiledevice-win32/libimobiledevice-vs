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
vcpkg\vcpkg install libiconv:x64-windows zlib:x64-windows openssl:x64-windows dirent:x64-windows getopt:x64-windows curl:x64-windows libzip:x64-windows libxml2:x64-windows libusb:x64-windows libusb-win32:x64-windows pthreads:x64-windows readline:x64-windows pcre:x64-windows
```

To get the libmobiledevice source code
```
git clone https://github.com/libimobiledevice-win32/libimobiledevice-vs
cd libimobiledevice-vs
```

then run:
```
get-source.cmd
```

You can now open the `libimobiledevice-vs.sln` solution and start compiling libimobiledevice.

if you compile with visual studio 2017, some probleam as: pls refer wiki
* The following VS instances are excluded because the English language pack is unavailable.
* Error MSB8020 The build tools for v142 (Platform Toolset = 'v142') cannot be found.




## Consulting, Training and Support

This repository is maintained by [Quamotion](http://quamotion.mobi). Quamotion develops test software for iOS and Android applications, based on the WebDriver protocol.

Quamotion offers various technologies related to automating iOS devices using computers running Windows or Linux.

This includes:
* The ability to remotely control iOS devices
* Extensions to libimobiledevice with support for the Instruments protocol
* Running Xcode UI Tests and Facebook WebDriverAgent tests

In certain  cases, Quamotion also offers professional services - such as consulting, training and support - related to imobiledivice-net and libimobiledevice.

Contact us at [info@quamotion.mobi](mailto:info@quamotion.mobi) for more information.
