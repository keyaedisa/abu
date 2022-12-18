# This is an example PKGBUILD file. Use this as a start to creating your own,
# and remove these comments. For more information, see 'man PKGBUILD'.
# NOTE: Please fill out the license field for your package! If it is unknown,
# then please put 'unknown'.

# Maintainer: Your Name <keyaedisa>
pkgname="abs"
pkgver=3.3
pkgrel=2
epoch=
pkgdesc="Command line utility to automate the building of an arch iso using a user provided profile! Also the official way to build XeroLinux and XeroLinux Gnome Edition! abs can even be used to build current Vanilla Arch ISO's! Both Releng and Baseline!"
arch=('x86_64' 'xi686')
url="https://github.com/keyaedisa/abs"
#license=('')
#groups=()
depends=("git"
		"gawk"
		"sed"
		"archiso"
		"bash")
makedepends=('git')
#checkdepends=()
#optdepends=()
provides=('abs')
#conflicts=('')
#replaces=('')
#backup=()
#options=()
install=abs.install
#changelog=
source=("gc"::"git+https://github.com/keyaedisa/abs.git")
#noextract=()
#md5sums=()
sha256sums=('SKIP')

package() {
	cd "${srcdir}"/$pkgname-${pkgver}
	mkdir -p "${pkgdir}/usr/local/bin/"
	cp "${srcdir}/gc/abs" "${pkgdir}/usr/local/bin/abs"
	mkdir -p "${pkgdir}/etc/abs/"
	cp -rf "${srcdir}/gc/misc/" "${pkgdir}/etc/abs/"
	cp -rf "${srcdir}/gc/options/" "${pkgdir}/etc/abs/"
	cp "${srcdir}/gc/options/.options" "${pkgdir}/etc/abs/"
	
	if [[ ${pkgname} == "abs" ]]; then
pkgrel=2
 	elif [[ ${pkgname} == "absd" ]]; then
pkgrel=2
 	else
		echo "hey bb"
 	fi
	rm -r "../gc"
	rm -r "${srcdir}"
}


