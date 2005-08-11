					<h1>Archive</h1>
					<a href="./news.php" class="newsHeading">Released version 0.4.4</a>
					<p class="newsDate">May 25, 2005</p>
					<p class="newsSummary">
						<ul>
							<li>PX_get_data_alpha() may now return strings which are longer than the database field (e.g. when converting to a multibyte string)</li>
							<li>fixed reencoding which failed when the input string passed to iconv contains zeros</li>
							<li>codepage can be set when creating a database</li>
							<li>fixed copy and paste error in doc/pxlib.sgml</li>
							<li>added new function PX_create_blob_fp()</li>
							<li>fixed many compiler warnings and some potential errors</li>
							<li>added missing prototypes in paradox.h.in</li>
							<li>allow to turn off warnings</li>
							<li>PX_set_blob_file() works when reading and writing a file</li>
							<li>added missing man page for PX_create_blob_file()</li>
							<li>added overall man page for pxlib with many examples</li>
							<li>PX_get_value() now returns many fields from the header which makes accessing the header struct directly mostly superfluous</li>
					 </ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.4.3</a>
					<p class="newsDate">December 30, 2004</p>
					<p class="newsSummary">
						<ul>
							<li>added PX_timestamp2string() for conversion of paradox timestamps into a readable representation</li>
							<li>various fixed for writing blob files</li>
							<li>return value for bcd fields uses decimal_point from locale</li>
							<li>added spanish translations (thanks to jrodriguez@innox.com.mx)</li>
					 </ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.4.2</a>
					<p class="newsDate">never released</p>
					<p class="newsSummary">
						<ul>
							<li>fixed possible errors in header of mb files</li>
							<li>added support for type 3 blocks in mb files</li>
					 </ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.4.1</a>
					<p class="newsDate">November 08, 2004</p>
					<p class="newsSummary">
						<ul>
							<li>various updates of debian files</li>
							<li>small changes to the build process</li>
					 </ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.4.0</a>
					<p class="newsDate">November 11, 2004</p>
					<p class="newsSummary">
						<ul>
							<li>support for writing blobs</li>
							<li>some man page updates</li>
					 </ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.3.1</a>
					<p class="newsDate">October 12, 2004</p>
					<p class="newsSummary">
						<ul>
							<li>fixed segm fault in put_px_datahead() when second datablock is written</li>
							<li>free memory when pxblob_t is deleted</li>
							<li>separated code for recoding into encode.c</li>
					 </ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.3.0</a>
					<p class="newsDate">July 20, 2004</p>
					<p class="newsSummary">
						<ul>
							<li>various man page updates</li>
							<li>Blob data stored in the record itself can be read</li>
							<li>added function PX_set_blob_file(), PX_has_blob_file()</li>
							<li>added function PX_get_data_bcd(), PX_put_data_bcd(), PX_get_data_blob(), PX_get_data_graphic()</li>
					 </ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.2.11</a>
					<p class="newsDate">July 15, 2004</p>
					<p class="newsSummary">
						<ul>
							<li>PX_read_blob_data() has been completely rewritten and can now handle any type of blob data. Watch for the new prototype.</li>
					 </ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.2.10</a>
					<p class="newsDate">July 14, 2004</p>
					<p class="newsSummary">
						<ul>
							<li>creating a paradox db without records led to a corrupted file because the header was not fill with zeros to its full size.</li>
					 </ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.2.9</a>
					<p class="newsDate">May 26, 2004</p>
					<p class="newsSummary">
						<ul>
							<li>new function PX_strdup() to duplicate a string but use the memory management functions of the paradox document.</li>
					 </ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.2.8</a>
					<p class="newsDate">May 13, 2004</p>
					<p class="newsSummary">
						<ul>
							<li>new function PX_get_opaque()</li>
							<li>fixed all references to PX_open_filename which is now PX_open_file</li>
							<li>pass const char to API function if possible</li>
							<li>updated build process</li>
							<li>Better checking whether px file belongs to db file</li>
						/ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.2.7</a>
					<p class="newsDate">January 25, 2004</p>
					<p class="newsSummary">
						<ul>
							<li>added man pages for blob file handling</li>
							<li>set some more header fields. db and px files are now read correctly by the Paradox software.</li>
							<li>changed default file version to 7.0</li>
					 </ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.2.6</a>
					<p class="newsDate">December 09, 2003</p>
					<p class="newsSummary">
						<ul>
							<li>added new function PX_get_recordsize()</li>
							<li>set indexRoot and numIndexLevels in .PX files</li>
							<li>fixed segm fault when writing a primary index file</li>
							<li>fixed reading of blobs</li>
							<li>two new header fields are known (indexRoot, numIndexLevels)</li>
							<li>many more translations</li>
							<li>some more tweaking to finally store the file update time in the header without messing it up</li>
					 </ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.2.5</a>
					<p class="newsDate">8 Jan 04</p>
					<p class="newsSummary">
					<ul>
						<li> fixed man pages of PX_set_[value|parameter]. Both functions return int now.
						<li> PX_set_parameter() returns -1 on error and 0 otherwise
						<li> Issue a warning if setting a value which does not exist
						<li> better error checking when setting the number of primary keys
						<li> fixed some errors in writing primary index files
						level 2 index entries are now supported
						<li> readded time of modification when writing the header
					 </ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.2.4</a>
					<p class="newsDate">December 09, 2003</p>
					<p class="newsSummary">
						<ul>
							<li> Paradox tables can be read by the Paradox software if the
							database is stored as version 5.0
							<li> added prototypes for PX_[get|set]_[parameter|value]()
							<li> all strings passed to PX_[get|set]_[parameter|value]() are of
							type const char
							<li> PX_get_[parameter|value]() return value in passed parameter and
							return an error code instead
							<li> Implemented function PX_get_parameter()
							<li> All PX_get_data_xxx() functions return -1 on error, 0 if the
							field value is NULL and 1 otherwise.
						</ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.2.3</a>
					<p class="newsDate">December 05, 2003</p>
					<p class="newsSummary">
						<ul>
							<li> updated many error messages
							<li> fixed segm fault when PX_close() was called more than once
							<li> initial support for writing a primary index (experimental)
						</ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.2.2</a>
					<p class="newsDate">November 17, 2003</p>
					<p class="newsSummary">
						<ul>
							<li> initial multi language support
							<li> added memory profiling
							<li> free some more memory in PX_delete()
							<li> renamed internal memory management functions from px_malloc, px_realloc,
							px_free to _px_malloc, _px_realloc, _px_free
							<li> call pxdoc->free instead of px_free
							<li> fixed potential buffer overrun
							<li> PX_set_[target|input]encoding returns -2 if recoding is not supported
						</ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.2.1</a>
					<p class="newsDate">November 09, 2003</p>
					<p class="newsSummary">
						<ul>
							<li>fixed header size which was to small for databases with many fields.
						</ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.2.0</a>
					<p class="newsDate">October 30, 2003</p>
					<p class="newsSummary">
						<ul>
							<li>update to latest autoconf tools
							<li>added support for pkg-config
							<li>added new function PX_new3() which allows to also set user data which
									is passed to the error handler
							<li>added generic way to set and get parameters
							<li>added support for external read, write, tell, seek functions
						</ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.1.9</a>
					<p class="newsDate">September 29, 2003</p>
					<p class="newsSummary">
						<ul>
							<li>encoding for data, that is to be written in a record can be set
							<li>build internal primary index for faster access. This will not
									speed up searching but accessing records by record number.
							<li>fixed reading of primary index, now that I understand how it works
							<li>fixed data block handling (still not perfect, but works if records are
									stored sequentially)
							<li>fixed several errors in fileformat which where due to lack of information
							<li>provide header field 'fileUpdateTime'
							<li>access data block as linked in list and not as stored in file
							<li>new functions to manipulate record data
							<li>made many error message better understandable
							<li>initial support to write db files

						</ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.1.2</a>
					<p class="newsDate">August 21, 2003</p>
					<p class="newsSummary">
						<ul>
							<li>primary index files can be read
							<li>added recno to struct px_datablockinfo
							<li>PX_get_record returns in referenced parameter deleted whether a
									record is deleted or not
						</ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.1.1</a>
					<p class="newsDate">August 15, 2003</p>
					<p class="newsSummary">
						<ul>
							<li>fixed segm fault when calling PX_get_record()
						</ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.1.0</a>
					<p class="newsDate">August 14, 2003</p>
					<p class="newsSummary">
						<ul>
							<li>New function PX_get_record2() which has two extra parameter.
									One to enable reading of deleted records and one to return
									internal data about the data block from which the record has
									been read.
							<li>added pxh->theonumrecords which is the number of records which
									theoretically fit into all data blocks. This number can be
									much bigger that the number of records in the header. Also
									increases the max. record number to theonumrecords
									when reading a record.
							<li>DB files can contain many more records than the number of records
									in the header. The remaining records are left overs, which were
									deleted but not removed from the file. pxlib can now handle those
									files.
						</ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.0.9</a>
					<p class="newsDate">August 11, 2003</p>
					<p class="newsSummary">
						<ul>
							<li>man pages are not created if docbook-to-man is missing
							<li>fixed many endianess bugs
							<li>new function PX_is_bigendian()
							<li>new function PX_has_recode_support()
							<li>fixed compile error with older versions of gcc
							<li>fixed two potential segm faults
						</ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.0.8</a>
					<p class="newsDate">July 31, 2003</p>
					<p class="newsSummary">
						<ul>
							<li>updated documentation
							<li>recoding of data fields with iconv
						</ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.0.7</a>
					<p class="newsDate">July 23, 2003</p>
					<p class="newsSummary">
						<ul>
							<li>read more fields from the header,
							<li>added spec file to build rpms,
							<li>alpha fields are automatically recoded if required,
							<li>function to access alpha field data
						</ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.0.6</a>
					<p class="newsDate">July 18, 2003</p>
					<p class="newsSummary">
						<ul>
							<li>more documentation,
							<li>more functions to access database schema (PX_get_field(), PX_get_fields()),
							<li>much better check for errors as not passing a document or out of range values
						</ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.0.5</a>
					<p class="newsDate">July 18, 2003</p>
					<p class="newsSummary">
						<ul>
							<li>added PX_delete()
							<li>many memory leaks fixed
							<li>proper use of memory allocation functions
						</ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.0.4</a>
					<p class="newsDate">June 11, 2003</p>
					<p class="newsSummary">
						<ul>
							<li>fixed segm fault if input file does not exist
							<li>maxTableSize may now be larger than 32
							<li>add check for endianess
							<li>added data conversion functions
						</ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.0.3</a>
					<p class="newsDate">Not published</p>
					<p class="newsSummary">
						<ul>
							<li>check for zero record size and header size
							<li>added missing header files in distribution
							<li>added conversion routine from Gregorian date to serial date number
						</ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.0.2</a>
					<p class="newsDate">June 03, 2003</p>
					<p class="newsSummary">
						<ul>
							<li>support for blobs, bug fixes
						</ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.0.1</a>
					<p class="newsDate">April 29, 2003</p>
					<p class="newsSummary">
						<ul>
							<li>initial release
						</ul>
					</p>

