
Debian
====================
This directory contains files used to package najafbitd/najafbit-qt
for Debian-based Linux systems. If you compile najafbitd/najafbit-qt yourself, there are some useful files here.

## najafbit: URI support ##


najafbit-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install najafbit-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your najafbit-qt binary to `/usr/bin`
and the `../../share/pixmaps/najafbit128.png` to `/usr/share/pixmaps`

najafbit-qt.protocol (KDE)

