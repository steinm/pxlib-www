<?php
	include("header.inc");
?>
          <h1>Installation</h1>
					<h2>Installation from source</h2>
					<p>Installing pxview from source has been simplified as much as
					  possible and should be flawless on most Unix systems, expecially
						Linux on which pxlib is being developed.</p>
					<p>On a recent Linux system you will need no extra libraries
					  execpt for pxlib to compile pxview.
					</p>
					<p>If libsqlite is available it will also be used for conversion
					  int sqlite format.
					</p>
					<p>pxview's documentation is written in docbook and needs
					  <span class="sourcecode">docbook-to-man</span> and
						<span class="sourcecode">docbook2man</span> for building.
						If you do not have these two programs you can still build
						the program but will not have documentation.
					</p>
					<p>In order to install pxview run the following commands:</p>
					<p class="sourcecode">
					  ./configure<br />
						make<br />
						make install<br />
					</p>
					<p>Installation will be by default into
					  <span class="sourcecode">/usr/local</span>. Run
						<span class="sourcecode">./configure --help</span> for a list
						of available configuration options.
					</p>

					<h2>Installation on debian</h2>
					<p>Debian sarge users can get a source package and binary
					  packages for i386 and powerpc in the download section.
					</p>

					<h2>Installation on rpm based system</h2>
					<p>Those using an rpm based system like Fedora, SuSE, or Mandrake
					  may try the precompiled binaries or recompile from the rpm source
						package, all available in the download section.
					</p>

					<h2>Installation on MS Windows</h2>
					<p>I have heard of users being able to compile pxlib even on
					  MS Windows. Unfortunately, I've never managed to do it.
						Let me know if you know how to do it.
					<p>
<?php
	include("footer.inc");
?>
