<?php
	include("header.inc");
	$mailto = "steinm@pb.steinmann.cx";
	$extraheader = "from: pslib-dev@codigolivre.org.br\nbcc:steinm@steinmann.cx";

	if(!empty($text) && !empty($subject)) {
?>
  <h2>Thank you ...</h2>
	<p>for taking the time to comment on pxlib. If you have a question
	  we will try to contact you as soon as possible.
<?php
		if($email)
			$extraheader .= "\nReply-To: ".$email.", uwe@steinmann.cx";
		$mailtext = "This mail was send through the web form of pxlib's home page.\n";
		if(!empty($email)) {
			$mailtext .= "Replies to this mail will be send to the uwe@steinmann.cx\nand the submitter of this comment.\n\n";
		}
		$mailtext .= stripslashes($text);
		mail($mailto, "[pxlib web form] ".stripslashes($subject), $mailtext, $extraheader);
	} else {
?>
  <h2>Error</h2>
	<p>You must at least type in a subject and your comment.
<?php
	}
?>
<?php
	include("footer.inc");
?>
