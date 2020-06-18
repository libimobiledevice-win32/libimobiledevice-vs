#!/bin/bash

# Patch the so dependencies for all executables in the out directory 
# Redirect from libimobiledevice.so.6 to libimobiledevice.so,
# and change the out folder in the rpath to ${ORIGIN}
# (this will be the setup in our target environment)
#
# For more info, see:
# https://github.com/NixOS/patchelf
# http://man7.org/linux/man-pages/man8/ld.so.8.html

patchelf=patchelf-0.9/src/patchelf

for f in $INSTALLDIR/{bin/*,lib/*.so}; do
    chmod +w $f
   
	$patchelf --set-rpath '${ORIGIN}' $f

	for l in libplist-2.0 libusbmuxd libimobiledevice-1.0 libideviceactivation-1.0 libirecovery-1.0; do
		# Skip the first line of the otool output, this is just the header
		solibs=`$patchelf --print-needed $f | grep "$l"`
		for solib in $solibs; do
		    echo Patching $solib in $f

		    $patchelf --replace-needed $solib $l.so $f
		done
   done

   readelf -d $f
done
