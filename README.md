# abs Repo

Welcome to the Official abs Source Repository! The most recent compiled version of abs is hosted on my package repo called Valen and
can be found at https:github.com/keyaedisa/valen_repo!

abs is a terminual utility I wrote in bash meant to not only automate the build
process of any archiso profile it is provided, but to also make it an
interative process.

v2.0 is a complete rewrite from v1.0. abs is now much more fleshed out and is
ready to be used by other users both new or experienced!

# Are you an Arch Distro maintainer?

Tired of your clunky and not so powerful build scripts? Are you annoyed
with the hassle of having to constantly tweak your scripts or what ever the
case may be? Reach out to me and we discuss the possibility of creating  an
option in abs meant specifically for the build of your iso! A simplified,
automated, and intelligent build process can be made for you!

Instructions on how to install can be found at the bottom of this readme!

# XeroLinux

https://xerolinux.xyz

I am proud to say that XeroLinux is abs's first example of this!
XeroLinux is a reliably stable arch distro known for being eye candy!
Formerly built with Arco's build scripts, it is now built with an abs option
created just for Xero! No more dealing with cumbersome build scripts. Simply run
'abs xero' in your terminal and the abs' interactive build menu begins!
Starting with intelligently checking if you are already in the latest xero_iso
cloned git repo ready to build, or if you need to clone the repo so you can get
started! This functioniality and more provided by abs!

# Features

- abs is capable of updating your archiso profile interactively! updating your archiso profiles
  profiledef.sh!
- abs can also update your dev-rel in your airootfs/etc/ directory!
- Easily and seamlessly build Vanilla Arch ISO's whether releng or baseline!
- Easily and seamlessly build either KDE or Gnome Editions of XeroLinux!
- Easily and seamlessly build your own custom Arch ISO's!

abs also runs several tests behind the scenes to ensure that your iso's build
process can run smoothly!

Some of these checks include:
- Ensuring you have a functioning internet connection.
- Making sure archiso is up to date
- Making sure sudo permissions are not used innappropriately
- Checking if you are in the correct directory
- Asking if you would like to bundle Valen Repo with your new ISO
- This and so much more!

# Feature Request

Have a feature you want to request? Reach out to me and I will see if I can get
it on a priority list depending on it's ease of implementation of and
usefulness!

I am also more than open to building in direct support for other distributions!

# Yes that's right!

abs CAN be used for your iso!

If you don't have build scripts of your own do not fret, abs was made for you!

If you have build scripts you dislike do not fret, abs was made for you!

At last abs is production ready.

# How to use abs

abs can be ran with no options and it will list available options for you to
choose!

Or once you're familiar with abs you can simply pass it the option you want when first starting it!

abs is ever evolving and now supports building both KDE and Gnome Versions of XeroLinux out of the box!
abs doesn't stop there however as it can even build the latest Arch Monthly ISO's whether releng or baseline!
abs has doubled its available options in the recent 3.0 update!

To get started with abs either install latest release, or copy the command below
to add Valen Repository to your pacman.conf so that you can install abs with
pacman and automatically recieve latest updates!

Good Luck and have fun!


# How to install

Go to https://github.com/keyaedisa/valen_repo to download the latest release or copy and paste the below script into your terminal to automatically add Valen Repo to your pacman.conf so that you can recieve automatic updates!
```
sudo bash -c "$(curl -fsSL https://raw.githubusercontent.com/keyaedisa/valen_repo/trunk/install/addRepo2PacmanConf.sh)"
```
This method is preferred as it means you will always get latest updates as they are pushed, where as releases will be updated typically only on major updates!
We also use keys to ensure security for the end user! This will only work however if using the provided script!
Once install script is ran, simply run 'sudo pacman -S abs' to download the latest abs!
