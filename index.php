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
						</ul>
					</p>
<?php
	include("footer.inc");
?>
