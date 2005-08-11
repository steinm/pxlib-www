          <h1>Latest News</h1>
					<a href="./news.php" class="newsHeading">Released version 0.2.5</a>
					<p class="newsDate">August 9, 2005</p>
					<p class="newsSummary">
					<ul>
						<li>output some more information about blobs in debug mode</li>
						<li>Output password checksum if file is encrypted</li>
						<li>output format of timestamp, date, time can be set with program option. The default has been changed to the sql format.</li>
					</ul>
					</p>

  				<a href="./news.php" class="newsHeading">New web site</a>
					<p class="newsDate">02 Feb 05</p>
					<p class="newsSummary">
					  After a long time the web site has been overhauled with much
						more information about pxview.
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.2.4</a>
					<p class="newsDate">January 24, 2005</p>
					<p class="newsSummary">
					<ul>
						<li>check return value of PX_get_data_alpha() and output an error message if needed</li>
						<li>mask special chars in memoblobs (sql output)</li>
						<li>use delimeter char for fields if they contain a line break (csv output)</li>
						<li>surrounds field data of memoblobs by enclosure char (csv output)</li>
						<li>primary key fields are treated as unique(field1, field2, field3, ...) and not unique(field1), unique(field2), ...</li>
						<li>fixed various memory leaks</li>
						<li>fixed many compiler warnings</li>
						<li>configure checks for PX_timestamp2string() to ensure pxlib >= 0.4.3 is present</li>
						<li>use functions like PX_get_num_fields() and PX_get_value() instead of directly accessing the file header structure</li>
						<li>create html version of manual pages on request</li>
					</ul>
					</p>

