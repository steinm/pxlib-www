<?php
$manpagedir = "manpages";

function output_manpage_content($funcname) {
	global $manpagedir;
	$filename = $manpagedir."/".$funcname.".html";
	if(file_exists($filename)) {
		$content = file_get_contents($filename);
		$start = strpos($content, "<H1");
		if($start !== false) {
			$content = substr($content, $start, -16);
			$pattern = "/([a-zA-Z_]*)\(([0-9])\)/";
			$replacement = "<a href=\"http://localhost:8088/TestDir/pxlib/documentation.php?manpage=\$1\">\$1(\$2)</a>";
			$content = preg_replace($pattern, $replacement, $content);
			echo $content."\n";
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
