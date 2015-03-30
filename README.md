#PolicyKit-less udisks
^ Pretty self-explanatory

##Motive
I'm running a \*kit-less Gentoo system. I needed udisks as a dependency of
[cshorler's hal-flash](https://github.com/cshorler/hal-flash), but I wasn't
willing to install PolicyKit or ConsoleKit, because I don't believe in this
systemd-like bullshit of all-in-one programs overstepping their originally
intended bounds. I hope this can be useful for other folk as a way to no longer
rely on PolicyKit.

##Result
You may use this in conjunction with
[cshorler's hal-flash](https://github.com/cshorler/hal-flash) in order to play
DRM content with Adobe's Flash (yuck) on Linux, requiring minimal dependencies.

This fork is for udisks-1.0.5 (the most current 1.x release of udisks). The
hack is quite ugly, as my only concern was completing this as quickly as
possible.  Expect limited and possibly dangerous functionality.

The only files I changed are `configure.ac` and `src/daemon.{c,h}`.
All other changes are a product of GNU autotools working its magic.

##Installation
Read udisks's `INSTALL` for instructions on how to configure, compile, and
install udisks. PolicyKit is disabled by default, but you may use the
`--enable-policykit` flag to build the package with PolicyKit. If you are using
a Gentoo system with Portage, you may use the modified ebuild located in
`usr/local/portage/sys-fs/udisks/*`

###Disclaimer
If this breaks your system, gets you fired from your job, or sets your computer
on fire, it's not my fault.
