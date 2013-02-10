winlirc-hauppauge
=================

A WinLIRC plugin for Hauppauge IR remotes & receivers

Requirements
------------
- Hauppauge IR-Receiver
- A matching Hauppauge IR-Remote
- The original Hauppauge IR-Tool ("IR32.exe") with its library "irremote.dll"
- WinLIRC

Download
--------
Get the compiled binary from
[here](https://github.com/pborsutzki/winlirc-hauppauge/raw/master/compiled%20binaries/winlirc-hauppauge-ir.dll).

Get the source via git:

    $ git clone https://github.com/pborsutzki/winlirc-hauppauge.git

How does it work?
-----------------
The plugin uses a Windows 32-bit library which is delivered with the original ir-tool from Hauppauge.
The librarys name is "irremote.dll" and it is usually located within the WinTV install directory.
This plugin calls functions within this library which connects to the receiver and decodes the ir-signals.
The plugin then polls the received key codes from the library and forwards them to WinLIRC.

Which remotes and receivers are supported?
------------------------------------------
Tested with HVR-5500 HD and the
[remote](https://github.com/pborsutzki/winlirc-hauppauge/blob/master/compatible%20remotes/hvr_5500_rc6_remote.jpg)
contained in the package.

As far as I can tell, all Hauppauge remotes & receivers that are delivered with the ir-tool and its library should work,
assuming that the library-signature is the same and the way it has to be used.

The easiest way to figure out whether it is working, is trying your receiver & remote out yourself,
with WinLIRC and this plugin :)

WinLIRC, why not LIRC?
----------------------
As described before, the plugin uses a Windows library for its functionality,
and there is no Linux library I am aware of that does the job the same way.

Compiling the source
--------------------
- Clone the project
- Fire up Microsoft Visual Studio 2012 (or port it to your version)
- Fetch the header file "LIRCDefines.h" from the WinLIRC source and copy it into the plugins source directory
- Build it
- Copy built library to the WinLIRC plugin directory
- Have fun!

License
-------
The plugin is released under the standard bsd-license. You can find a copy in
[License.txt](https://github.com/pborsutzki/winlirc-hauppauge/blob/master/License.txt).
