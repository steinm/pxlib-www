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
					<p>For those who find the number of options of pxview
					  to confusing, there is also an extra command for each
						of the four conversion method. The manual pages document
						only those options which are available for the requested
						conversion.
					</p>
					<p>
<?php
		output_manpage("px2csv");
		output_manpage("px2html");
		output_manpage("px2sql");
		output_manpage("px2sqlite");
?>
					</p>
<?php
	}
?>
<?php
	include("footer.inc");
?>
