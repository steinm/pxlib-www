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
					<p>pxview has a detailed
					  manual page explaining all the options.
					</p>
					<h2>Manual page</h2>
					<p>
<?php
		output_manpage("pxview");
?>
					</p>
<?php
	}
?>
<?php
	include("footer.inc");
?>
