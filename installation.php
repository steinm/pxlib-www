<?php
	include("header.inc");
?>
          <h1>Installation</h1>
					<h2>Installation from source</h2>
					<p>Installing pxlib from source has been simplified as much as
					  possible and should be flawless on most Unix systems, expecially
						Linux on which pxlib is being developed.</p>
					<p>On a recent Linux system you will need no extra libraries
					  to compile pxlib. On other Unix systems you may need iconv
						or recorde for recoding the field data in paradox tables.
						On Linux systems iconv is part of libc6.</p>
					<p>If libgsf-1 is available it will also be used though you
					  will rarely need libgsf support. It has been added for the
						paradox gnumeric plugin which is also based on pxlib.</p>
					<p>pxlib's documentation is written in docbook and needs
					  <span class="sourcecode">docbook-to-man</span> and
						<span class="sourcecode">docbook2man</span> for building.
						If you do not have these two programs you can still build
						the library but will not have documentation.
					</p>
					<p>In order to install pxlib run the following commands:</p>
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
					<p>Debian sarge users can <span class="sourcecode">apt-get</span>
					  from the official debian repositories. For those still using
						woody you need get the Debian source package and compile it
						yourself.
					</p>

					<h2>Installation on rpm based systems</h2>
					<p>Those using an rpm based system like Fedora, SuSE, or Mandrake
					  may try the precompiled binaries or recompile from the rpm source
						package, all available in the <a href="http://sourceforge.net/project/showfiles.php?group_id=79398&package_id=81444">download section</a>.
					</p>

					<h2>Installation on MS Windows&tm;</h2>
					<p>I have heard of users being able to compile pxlib even on
					  MS Windows&trade;. Unfortunately, I've never managed to do it.
						Let me know if you know how to do it.
					<p>
<?php
	include("footer.inc");
?>
