<?php
	include("header.inc");
?>
   <h2>Mailing list</h2>
	 <p>pxlib has its own mailing list at &lt;pxlib-devel at lists.sourceforge.net&gt;.
	 If you have questions or comments, that would be the best place to
	 get answers and start discussions.

	 <p>Alternatively, you can send in a comment to the developer mailing
	 list through the form below.

	 <form action="mail.php">
	 <table>
	  <tr><td>Subject</td><td><input type="text" size=40 name="subject"></td><tr>
	  <tr><td>Your email</td><td><input type="text" size=25 name="email"></td><tr>
	  <tr><td>Text</td><td><textarea name="text" cols=40 rows=8></textarea><td></tr>
		<tr><td></td><td><input type="submit" value="Send"></td></tr>
	 </table>
	 </form>
<?php
	include("footer.inc");
?>
