<?php
	include("pxlib.inc");
	include("header.inc");
?>
<?php
	if(isset($_REQUEST["manpage"])) {
		output_manpage_content($_REQUEST["manpage"]);
	} else {
?>
          <h1>Documentation</h1>
					<p>pxlib has extensive documentation including an overview document
					  and manual pages for all functions.
					</p>
					<h2>Overview</h2>
					<p>
<?php
		output_manpage("pxlib");
?>
					</p>
					<h2>Manual pages</h2>
					<p>
<?php
		output_manpage_list();
?>
					</p>
<?php
	}
?>
					</p>
<?php
	include("footer.inc");
?>
