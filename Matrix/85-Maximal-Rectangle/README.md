<h2><a href="https://leetcode.com/problems/maximal-rectangle/">85. Maximal Rectangle</a></h2><h3>Hard</h3><h3>Array,Dynamic Programming,Stack,Matrix,Monotonic Stack</h3><hr><div><p>Given a <code>rows x cols</code>&nbsp;binary <code>matrix</code> filled with <code>0</code>'s and <code>1</code>'s, find the largest rectangle containing only <code>1</code>'s and return <em>its area</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/14/maximal.jpg" style="width: 402px; height: 322px;">
<pre><strong>Input:</strong> matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]
<strong>Output:</strong> 6
<strong>Explanation:</strong> The maximal rectangle is shown in the above picture.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> matrix = [["0"]]
<strong>Output:</strong> 0
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> matrix = [["1"]]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>rows == matrix.length</code></li>
	<li><code>cols == matrix[i].length</code></li>
	<li><code>1 &lt;= row, cols &lt;= 200</code></li>
	<li><code>matrix[i][j]</code> is <code>'0'</code> or <code>'1'</code>.</li>
</ul>
</div><hr><h3>Submissions</h3><table class=""><colgroup><col><col><col><col><col></colgroup><thead class="ant-table-thead"><tr><th class="time-column__1guG"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Time Submitted</span><span class="ant-table-column-sorter"></span></div></span></th><th class="status-column__3SUg"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Status</span><span class="ant-table-column-sorter"></span></div></span></th><th class="runtime-column__1ka_"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Runtime</span><span class="ant-table-column-sorter"></span></div></span></th><th class="memory-column__1dxp"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Memory</span><span class="ant-table-column-sorter"></span></div></span></th><th class="lang-column__tR-8"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Language</span><span class="ant-table-column-sorter"></span></div></span></th></tr></thead><tbody class="ant-table-tbody"><tr class="ant-table-row ant-table-row-level-0" data-row-key="765140614"><td class="time-column__1guG">08/04/2022 21:01</td><td class="status-column__3SUg"><a href="/submissions/detail/765140614/" target="_blank" class="ac__35gz" data-submission-id="765140614">Accepted</a></td><td class="runtime-column__1ka_">57 ms</td><td class="memory-column__1dxp">13.1 MB</td><td class="lang-column__tR-8">cpp</td></tr><tr class="ant-table-row ant-table-row-level-0" data-row-key="765140342"><td class="time-column__1guG">08/04/2022 21:01</td><td class="status-column__3SUg"><a href="/submissions/detail/765140342/" target="_blank" class="ac__35gz" data-submission-id="765140342">Accepted</a></td><td class="runtime-column__1ka_">294 ms</td><td class="memory-column__1dxp">13.2 MB</td><td class="lang-column__tR-8">cpp</td></tr></tbody></table>