          <h1>New archive</h1>
					<a href="./index.html" class="newsHeading">Released version 0.2.3</a>
					<p class="newsDate">January 3, 2005</p>
					<p class="newsSummary">
					<ul>
						<li>fixed reading and outputting of timestamps, uses the new
						  function PX_timestamp2string() of pxlib &gt;= 0.4.3</li>
					</ul>
					</p>

					<a href="./index.html" class="newsHeading">Released version 0.2.2</a>
					<p class="newsDate">November 7, 2004</p>
					<p class="newsSummary">
					<ul>
						<li>no need to specify a blob file if all blobs are contained in the db file.</li>
						<li>use PX_get_data_blob() instead of PX_read_blobdata()</li>
						<li>fixed endless loop in str_buffer_printmask()</li>
						<li>sql type for time and timestamp can be both set on the command line.</li>
					</ul>
					</p>

					<a href="./index.html" class="newsHeading">Released version 0.2.1</a>
					<p class="newsDate">July 21, 2004</p>
					<p class="newsSummary">
					<ul>
						<li>new option --blobextension
						<li>removed option --include-blobs (blobs are only read if a .MB file is given)
						<li>updated man page
						<li>filename of blobs is created properly if no filename prefix is given
						<li>fields of type BCD can be read
						<li>used fixed field length of 17 for BCD type of fields
						<li>boolean values must be 0 or 1 in sqlite (not true or false)
						<li>sql output: all blobs are by default text fields. If it is a memo
						    it will contain the blob content otherwise the content will be written
						    to file and the field contains the file name.
						<li>reading of blobs is finally working
					</ul>
					</p>

					<a href="./index.html" class="newsHeading">Released version 0.2.0</a>
					<p class="newsDate">July 16, 2004</p>
					<p class="newsSummary">
					<ul>
						<li>Reading blobs finally works</li>
					</ul>
					</p>

					<a href="./index.html" class="newsHeading">Released version 0.1.12</a>
					<p class="newsDate">May 28, 2004</p>
					<p class="newsSummary">
					<ul>
						<li>added new option --set-sql-type</li>
						<li>added new option --short-insert</li>
					</ul>
					</p>

					<a href="./index.html" class="newsHeading">Released version 0.1.11</a>
					<p class="newsDate">May 18, 2004</p>
					<p class="newsSummary">
					<ul>
						<li>exit configure if sqlite support is requested by header file is not found</li>
						<li>new option skip-schema to omit sql command to create table structure</li>
						<li>output of sqlite is much more saver in terms of buffer overflows</li>
					</ul>
					</p>

					<a href="./index.html" class="newsHeading">Released version 0.1.10</a>
					<p class="newsDate">January 16, 2004</p>
					<p class="newsSummary">
					<ul>
						<li>added reading of fields of type pxfGraphic in csv mode</li>
						<li>reorganize usage information</li>
						<li>--tablename in html mode sets caption of html table</li>
						<li>allow to set info mode with --mode=info</li>
						<li>do not output option -q in usage information if sqlite is not available</li>
					</ul>
					</p>

					<a href="./index.html" class="newsHeading">Released version 0.1.9</a>
					<p class="newsDate">January 08, 2004</p>
					<p class="newsSummary">
					<ul>
						<li> mask ' and tabulator in sql and sqlite output
						<li> use ',' as the default separator for fields in csv output
						<li> Mask the enclosure char in csv output if it occurs in a field value
						<li> pxfCurrency and pxfNumber are mapped to double in sql output
						<li> fixed BCD and Date fields in sql output
						<li> columns without a name will be named 'column%d' (such columns
	  exist in primary index files)
						<li> added option --version
						<li> New option --without-head to suppress first line with field
	  names in csv output
						<li> added complete header line to csv output of primary index files
					</ul>
					</p>

					<a href="./index.html" class="newsHeading">Released version 0.1.8</a>
					<p class="newsDate">December 11, 2003</p>
					<p class="newsSummary">
					<ul>
						<li> All float values will formated with %g and not %f
						<li> sql output uses by default INSERT-statements, --use-copy
	  enforces the use of the COPY-statement which was the default
	  up to version 0.1.7
					</ul>
					</p>

					<a href="./index.html" class="newsHeading">Released version 0.1.7</a>
					<p class="newsDate">December 09, 2003</p>
					<p class="newsSummary">
					<ul>
						<li> First line of HTML output uses &lt;th&gt; instead of &lt;td&gt;&lt;b&gt;
						<li> added configure option --with-memory-debug
					</ul>
					</p>

					<a href="./index.html" class="newsHeading">Released version 0.1.6</a>
					<p class="newsDate">November 17, 2003</p>
					<p class="newsSummary">
					<ul>
						<li> fixed freeing of memory
					</ul>
					</p>

					<a href="./index.html" class="newsHeading">Released version 0.1.5</a>
					<p class="newsDate">November 11, 2003</p>
					<p class="newsSummary">
					<ul>
						<li>support for sqlite output
					</ul>
					</p>

					<a href="./index.html" class="newsHeading">Released version 0.1.4</a>
					<p class="newsDate">October 30, 2003</p>
					<p class="newsSummary">
					<ul>
						<li>support for gsf library
					</ul>
					</p>

					<a href="./index.html" class="newsHeading">Released version 0.1.3</a>
					<p class="newsDate">September 29, 2003</p>
					<p class="newsSummary">
					<ul>
						<li>output file with name "-" means stdout
						<li>csv output of .PX files got an extra column with the block number of
		    the current record for better investigation of the index file
						<li>output of first and last block number
						<li>option 'output' is now 'output-file'
						<li>fixed debug output
						<li>added output of fileUpdateTime
						<li>some smaller cleanups
						<li>Use PX_get_data_byte() instead accessing the data directly
					</ul>
					</p>

					<a href="./index.html" class="newsHeading">Released version 0.1.2</a>
					<p class="newsDate">August 21, 2003</p>
					<p class="newsSummary">
					<ul>
						<li>added option --primary-index-file to read a primary index which
	     accelerates access
						<li>debug mode: output information about the datablock where a record is stored
						<li>usage output has been to restrictive if run as pxview
						<li>options --output-deleted, --delete-table has been misinterpreted
						<li>new option --mark-deleted to mark those records which are deleted
	    the csv and html ouput will have an extra column
					</ul>
					</p>

					<a href="./index.html" class="newsHeading">Released version 0.1.1</a>
					<p class="newsDate">August 18, 2003</p>
					<p class="newsSummary">
					<ul>
						<li>html output
						<li>field selection is case insenitive
					</ul>
					</p>

					<a href="./index.html" class="newsHeading">Released version 0.1.0</a>
					<p class="newsDate">August 14, 2003</p>
					<p class="newsSummary">
					<ul>
						<li>- output modified flags 1 and 2 in verbose mode
						<li>added aliases --include-blobs and --delete-table for
	     --includeblobs and --deletetable
						<li>allow to read deleted records (new option --output-deleted)
						<li>output calculated size of a record
						<li>use own error handler
					</ul>
					</p>

					<a href="./index.html" class="newsHeading">Released version 0.0.7</a>
					<p class="newsDate">August 11, 2003</p>
					<p class="newsSummary">
					<ul>
						<li>man pages are not created if docbook-to-man is missing
						<li>program returns 1 in case of error else 0
						<li>better sql output
						<li>fixed potential segm fault
						<li>moved manpage into section 1
					</ul>
					</p>

					<a href="./index.html" class="newsHeading">Released version 0.0.6</a>
					<p class="newsDate">July 31, 2003</p>
					<p class="newsSummary">
					<ul>
						<li>output sql data only if num records &lt; 0
						<li>put field values into enclosing char only if the delimiter is in
	     the field value
						<li>added option -v to output more header information
						<li>added spec file to create rpms
						<li>don't use enclosure characters in sql output
					</ul>
					</p>

					<a href="./index.html" class="newsHeading">Released version 0.0.5</a>
					<p class="newsDate">July 23, 2003</p>
					<p class="newsSummary">
					<ul>
						<li>added support for recoding alpha fields
						<li>access to alpha fields is done with PX_get_data_alpha()
					</ul>
					</p>

					<a href="./index.html" class="newsHeading">Released version 0.0.4</a>
					<p class="newsDate">June 11, 2003</p>
					<p class="newsSummary">
					<ul>
						<li>proper handling of negative Long, Short, Double value
						<li>finaly implemented export to a given output file (option --output)
						<li>added option --deletetable
						<li>updated manual page
						<li>calling pxview as px2sql or px2csv will set the appropriate options
						<li>moved data conversion routines to pxlib
					</ul>
					</p>

					<a href="./index.html" class="newsHeading">Released version 0.0.3</a>
					<p class="newsDate">Not published</p>
					<p class="newsSummary">
					<ul>
						<li>many bugfixes
						<li>output of sql
					</ul>
					</p>

					<a href="./index.html" class="newsHeading">Released version 0.0.2</a>
					<p class="newsDate">June 03, 2003</p>
					<p class="newsSummary">
					<ul>
						<li>
					</ul>
					</p>

					<a href="./index.html" class="newsHeading">Released version 0.0.1</a>
					<p class="newsDate">April 29, 2003</p>
					<p class="newsSummary">
					<ul>
						<li>initial release
					</ul>
					</p>
