<h2><a href="https://leetcode.com/problems/crawler-log-folder/">1598. Crawler Log Folder</a></h2><h3>Easy</h3><h3>Array,String,Stack</h3><hr><div><p>The Leetcode file system keeps a log each time some user performs a <em>change folder</em> operation.</p>

<p>The operations are described below:</p>

<ul>
	<li><code>"../"</code> : Move to the parent folder of the current folder. (If you are already in the main folder, <strong>remain in the same folder</strong>).</li>
	<li><code>"./"</code> : Remain in the same folder.</li>
	<li><code>"x/"</code> : Move to the child folder named <code>x</code> (This folder is <strong>guaranteed to always exist</strong>).</li>
</ul>

<p>You are given a list of strings <code>logs</code> where <code>logs[i]</code> is the operation performed by the user at the <code>i<sup>th</sup></code> step.</p>

<p>The file system starts in the main folder, then the operations in <code>logs</code> are performed.</p>

<p>Return <em>the minimum number of operations needed to go back to the main folder after the change folder operations.</em></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2020/09/09/sample_11_1957.png" style="width: 775px; height: 151px;"></p>

<pre><strong>Input:</strong> logs = ["d1/","d2/","../","d21/","./"]
<strong>Output:</strong> 2
<strong>Explanation: </strong>Use this change folder operation "../" 2 times and go back to the main folder.
</pre>

<p><strong>Example 2:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2020/09/09/sample_22_1957.png" style="width: 600px; height: 270px;"></p>

<pre><strong>Input:</strong> logs = ["d1/","d2/","./","d3/","../","d31/"]
<strong>Output:</strong> 3
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> logs = ["d1/","../","../","../"]
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= logs.length &lt;= 10<sup>3</sup></code></li>
	<li><code>2 &lt;= logs[i].length &lt;= 10</code></li>
	<li><code>logs[i]</code> contains lowercase English letters, digits, <code>'.'</code>, and <code>'/'</code>.</li>
	<li><code>logs[i]</code> follows the format described in the statement.</li>
	<li>Folder names consist of lowercase English letters and digits.</li>
</ul>
</div><hr><h3>Submissions</h3><table class=""><colgroup><col><col><col><col><col></colgroup><thead class="ant-table-thead"><tr><th class="time-column__1guG"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Time Submitted</span><span class="ant-table-column-sorter"></span></div></span></th><th class="status-column__3SUg"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Status</span><span class="ant-table-column-sorter"></span></div></span></th><th class="runtime-column__1ka_"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Runtime</span><span class="ant-table-column-sorter"></span></div></span></th><th class="memory-column__1dxp"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Memory</span><span class="ant-table-column-sorter"></span></div></span></th><th class="lang-column__tR-8"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Language</span><span class="ant-table-column-sorter"></span></div></span></th></tr></thead><tbody class="ant-table-tbody"><tr class="ant-table-row ant-table-row-level-0" data-row-key="775901120"><td class="time-column__1guG">08/17/2022 14:18</td><td class="status-column__3SUg"><a href="/submissions/detail/775901120/" target="_blank" class="ac__35gz" data-submission-id="775901120">Accepted</a></td><td class="runtime-column__1ka_">14 ms</td><td class="memory-column__1dxp">10.4 MB</td><td class="lang-column__tR-8">cpp</td></tr></tbody></table>