<?php
	include("header.inc");
?>
          <h1>Welcome!</h1>
          <p>pxlib is a simply and still small C library to read and
						write Paradox DB files. It supports all versions starting from 3.0.
						It currently has a very limited set of functions like to open a DB
						file, read its header and read every single record.  It can read
						and write blob data. The write support is still a bit
						experimental.
					</p>
					<h2>Features</h2>
					<p>
						<ul>
  						<li>Reading/writing Paradox DB files</li>
							<li>Reading/writing of primary index files (.PX)</li>
							<li>Recoding of character fields</li>
							<li>Reading/writing blobs (.MB files)</li>
							<li>Reading/writing encrypted files, even without knowing the password</li>
						</ul>
					</p>
					<h2>Software that uses pxlib</h2>
					<p>
						There are currently two larger open source projects using pxlib:
						<ul>
							<li>gnumeric,</li>
							<li>knoda (hk_classes).</li>
						</ul>
					</p>
					<p>
						The <a href="www.gnumeric.org">gnumeric</a> plugin is written by
						the author of pxlib itself and
						is currently able to read paradox databases which do not contain
						any blobs. Write support will be available in gnumeric 1.7.0 if
						the <a href="http://bugzilla.gnome.org/show_bug.cgi?id=329771">patch in the bug database</a> will make it into the code in time.
					</p>
					<p>
						<a href="http://www.knoda.org">knoda</a> uses pxlib through its
						database abstraction classes
						<a href="http://hk­classes.sourceforge.net">hk_classes</a>.
						Recent versions have also added support for
						writing and modifying paradox databases.
					</p>
<?php
	include("footer.inc");
?>
