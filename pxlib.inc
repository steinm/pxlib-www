<?php
$manpagedir = "manpages";

function output_manpage_content($funcname) {
	global $manpagedir;
	$filename = $manpagedir."/".$funcname.".html";
	if(file_exists($filename)) {
		$content = file_get_contents($filename);
		$start = strpos($content, "<H1");
		if($start !== false) {
			echo substr($content, $start, -16);
		}
	} else {
		echo "Manual page for ".$funcname." not found!\n";
	}
}

function output_manpage($funcname) {
	global $manpagedir;
	$filename = $manpagedir."/".$funcname.".html";
	if(file_exists($filename)) {
		$filecreation = date("Y-m-d", filemtime($filename));
		echo "<A HREF=\"documentation.php?manpage=".$funcname."\">".$funcname."</A> (".$filecreation.")<BR>\n";
	} else {
		echo "Manual page for ".$funcname." not found!\n";
	}
}

function output_manpage_list() {
	global $manpagedir;
	if($handle = opendir($manpagedir)) {

		while (false !== ($file = readdir($handle))) {
			if(substr($file, 0, 2) == "PX") {
				output_manpage(substr($file, 0, -5));
			}
		}

		closedir($handle);
	}
}
?>
