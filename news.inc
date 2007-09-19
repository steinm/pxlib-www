          <h1>Latest News</h1>
					<a href="./news.php" class="newsHeading">Released version 0.6.2</a>
					<p class="newsDate">September 19, 2007</p>
					<p class="newsSummary">This one fixes a long lasting bug on 64 bit
					  architectures. It also is compilable in a mingw environment
						and Visual C++ with the help of cmake.
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.6.1</a>
					<p class="newsDate">March 29, 2006</p>
					<p class="newsSummary">There were some bugs related to the changes
					  of the last release. This version fixes them. Besides that the
						following has changed:
						<ul>
							<li>Much better support for secondary indexes</li>
							<li>PX_insert_record() and PX_update_record() treat null
							  values propperly</li>
							<li>PX_delete_record() now updates the internal index
							  without corrupting  it.</li>
							<li>Various man page updates.</li>
							<li>Auto increment fields of type pxfAutoInc.</li>
							<li>Fixed some compile errors and warnings.</li>
							<li>Fixed various small bugs and memory leaks.</li>
					 </ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.6.0</a>
					<p class="newsDate">February 6, 2006</p>
					<p class="newsSummary">This version includes some major changes to the
					  api while retaining compatible to older versions. If you use the
						new functions expect bugs but also a much simplier record handling.
						<ul>
							<li>Databases can be read and written after opening with PX_open_xxx()</li>
							<li>Use a cache for reading encrypted blobs</li>
              <li>Added new functions PX_delete_record(), PX_update_record(), PX_insert_record(), PX_retrieve_record()</li>
							<li>reading and writing encrypted blob files is more efficient.</li>
              <li>No more than 64 blobs will be stored in blocks of type 3</li>
							<li>Fixed various small bugs and memory leaks.</li>
					 </ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.5.1</a>
					<p class="newsDate">August 11, 2005</p>
					<p class="newsSummary">
						<ul>
							<li>fixed bug when reading header of blob (Thanks to Giovanni Giacobbi)</li>
							<li>fixes bug when reading blobs of a certain size from an encrypted .mb file.</li>
							<li>reading and writing encrypted blob files is more efficient.</li>
					 </ul>
					</p>

					<a href="./news.php" class="newsHeading">Released version 0.5.0</a>
					<p class="newsDate">July 14, 2005</p>
					<p class="newsSummary">
						<ul>
							<li>support for encrypted databases and blob files</li>
					 </ul>
					</p>

  				<a href="./news.php" class="newsHeading">New web site</a>
					<p class="newsDate">02 Feb 05</p>
					<p class="newsSummary">
					  After a long time the web site has been overhauled with much
						more information about pxlib.
					</p>


