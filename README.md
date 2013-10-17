# ofxGstStandaloneVideo

Standalone Gstreamer-based video player and grabber for use on Windows. This player provides signifiancant performance boosts over the standard Quicktime ofVideoPlayer on windows, especially with hi-res e.g. 4k video. Originally created by https://github.com/soyoungshin.

"A copy of of_v0071_vs2010_release\libs\openFrameworks\video\ofGst* under a different namespace, so Gstreamer can be used under Windows without modifying OF Core.

There are minor changes to allow textures to be used, and bug fixes for Windows. note:changes are untested on Linux / Mac."[sic]

This version has been updated to be compatible with openFrameworks 0.8 and Visual Studio 2012. I've also added a few more helpful setup instructions in this readme.


## Dependencies
The player requires the ossbuild version of gstreamer and gstreamer SDK to be installed. The SDK installs a number of environment variables which are used in the project's includes directories.

1. [openframeworks 0.8](http://www.openframeworks.cc/download/)
2. [ossbuild GStreamer WinBuilds v0.10.7 Beta 4](https://code.google.com/p/ossbuild/downloads/list)
3. [ossbuild GStreamer WinBuilds SDK v0.10.7 Beta 4](https://code.google.com/p/ossbuild/downloads/list). Uncheck the .NET and python libraries when installing to avoid having to install additional dependencies.

## Creating a new gstreamer project
A new project requires several includes directories, library directories and linker dependencies. The example project in this repo contains all of these so either copy that or copy the dependencies out of it into an exisiting project. The project dependencies make use of windows environment variables that are set by the OSSbuild version of the gstreamer SDK.
