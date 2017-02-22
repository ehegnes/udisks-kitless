# PolicyKit-less udisks
^ Pretty self-explanatory

## Motive
I'm running a \*kit-less Gentoo system. I needed `udisks` as a dependency, but
I wasn't willing to install PolicyKit or ConsoleKit, because I don't believe in
this `systemd`-like bullshit of all-in-one programs overstepping their
originally intended bounds. I hope this can be useful for other folk as a way
to no longer rely on PolicyKit.

## Result
You may use this in conjunction with packages such as
[cshorler's hal-flash](https://github.com/cshorler/hal-flash) in order to play
DRM content with Adobe's Flash (yuck) on Linux, requiring minimal dependencies.

This fork is for `udisks-2.1.8` (the most current `2.x` stable `udisks` release
in Gentoo's Portage tree [as of writing]). The hack is quite ugly and simply tricks
`udisks` into thinking it's properly authenticated if compiled without
PolicyKit (using a bunch of `#ifdef`'s). Expect limited, broken,  and possibly
dangerous functionality.

The only files I changed are the following:
```
configure.ac
src/udisksdaemon.{c,h}
src/udisksdaemontypes.h
src/udisksdaemonutil.c
```

## Installation
Read `udisks`'s `INSTALL` for instructions on how to configure, compile, and
install `udisks`. PolicyKit is disabled by default, but you may use the
`--enable-policykit` flag to build the package with PolicyKit. If you are using
a Gentoo system with Portage, you may use the modified ebuild located in
`usr/local/portage/sys-fs/udisks/udisks-2.1.8.ebuild`. The `policykit` USE flag
will automatically handle toggling the appropriate compilation flag.

### Disclaimer
If this breaks your system, gets you fired from your job, or sets your computer
on fire, it's not my fault.
