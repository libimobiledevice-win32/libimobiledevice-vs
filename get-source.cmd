git clone --single-branch --branch msvc/master https://github.com/libimobiledevice-win32/libplist
git clone --single-branch --branch msvc/master https://github.com/libimobiledevice-win32/libusbmuxd
git clone --single-branch --branch msvc/master https://github.com/libimobiledevice-win32/libimobiledevice
git clone --single-branch --branch msvc/master https://github.com/libimobiledevice-win32/libideviceactivation
git clone --single-branch --branch msvc/master https://github.com/libimobiledevice-win32/ideviceinstaller
git clone --single-branch --branch msvc/master https://github.com/libimobiledevice-win32/libirecovery
git clone --single-branch --branch msvc/master https://github.com/libimobiledevice-win32/idevicerestore
git clone --single-branch --branch master-msvc https://github.com/libimobiledevice-win32/usbmuxd
git clone --single-branch --branch msvc/master https://github.com/libimobiledevice-win32/ios-webkit-debug-proxy
git clone --single-branch --branch msvc/master https://github.com/stijnvdb88/ifuse
git clone --single-branch --branch master https://github.com/dokan-dev/dokany

echo "libplist revision:"
git -C libplist rev-parse HEAD

echo "libusbmxud revision:"
git -C libusbmuxd rev-parse HEAD

echo "libimobiledevice revision:"
git -C libimobiledevice rev-parse HEAD

echo "libideviceactivation revision:"
git -C libideviceactivation rev-parse HEAD

echo "ideviceinstaller revision:"
git -C ideviceinstaller rev-parse HEAD

echo "libirecovery revision:"
git -C libirecovery rev-parse HEAD

echo "idevicerestore revision:"
git -C idevicerestore rev-parse HEAD

echo "usbmuxd revision:"
git -C usbmuxd rev-parse HEAD

echo "ios-webkit-debug-proxy revision:"
git -C ios-webkit-debug-proxy rev-parse HEAD