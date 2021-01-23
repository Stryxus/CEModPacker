[![Total alerts](https://img.shields.io/lgtm/alerts/g/Stryxus/Blaze.svg?logo=lgtm&logoWidth=18)](https://lgtm.com/projects/g/Stryxus/Blaze/alerts/)
[![Total alerts](https://img.shields.io/lgtm/alerts/g/Stryxus/Blaze.svg?logo=lgtm&logoWidth=18)](https://lgtm.com/projects/g/Stryxus/Blaze/alerts/)
# CEModPacker
The Modpack creation and installation app for Bethesda's Creation Engine games.
## Contributing
Everyone is welcome to contribute if interested. Follow the requirements and instructions below!
#### Code Style
There is no set code style, everyone can contribute in their own prefered ways as long as it isnt complicated enough that it isnt universally understood across all contributors.

Memory management is dealt with by coding freely, then afterwards doing a 'memory management pass' to deal with all the leaks and optimizations and so forth.
#### Requirements & Instructions
- Windows 10 1909 or later.
- Visual Studio 2019 16.8.
- C++ with Cmake, Clang.
- .NET 5 SDK.
- [Download curl 7.74 x64](https://curl.se/windows/) & extract the 'include' & 'lib' folders into 'CEModPacker/curl/include' & 'CEModPacker/curl/lib' & 'CEModPacker/curl/bin/libcurl-x64.dll'.
- [Download OpenSSL 1.1.1i x64](https://curl.se/windows/) & extract the 'libssl-1_1-x64.dll' & 'libcrypto-1_1-x64.dll' files into the 'CEModPacker/curl/bin' folder.
