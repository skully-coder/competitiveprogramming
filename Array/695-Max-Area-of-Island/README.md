<h2><a href="https://leetcode.com/problems/max-area-of-island/">695. Max Area of Island</a></h2><h3>Medium</h3><h3>Array,Depth-First Search,Breadth-First Search,Union Find,Matrix</h3><hr><div><p>You are given an <code>m x n</code> binary matrix <code>grid</code>. An island is a group of <code>1</code>'s (representing land) connected <strong>4-directionally</strong> (horizontal or vertical.) You may assume all four edges of the grid are surrounded by water.</p>

<p>The <strong>area</strong> of an island is the number of cells with a value <code>1</code> in the island.</p>

<p>Return <em>the maximum <strong>area</strong> of an island in </em><code>grid</code>. If there is no island, return <code>0</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/01/maxarea1-grid.jpg" style="width: 500px; height: 310px;">
<pre><strong>Input:</strong> grid = [[0,0,1,0,0,0,0,1,0,0,0,0,0],[0,0,0,0,0,0,0,1,1,1,0,0,0],[0,1,1,0,1,0,0,0,0,0,0,0,0],[0,1,0,0,1,1,0,0,1,0,1,0,0],[0,1,0,0,1,1,0,0,1,1,1,0,0],[0,0,0,0,0,0,0,0,0,0,1,0,0],[0,0,0,0,0,0,0,1,1,1,0,0,0],[0,0,0,0,0,0,0,1,1,0,0,0,0]]
<strong>Output:</strong> 6
<strong>Explanation:</strong> The answer is not 11, because the island must be connected 4-directionally.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> grid = [[0,0,0,0,0,0,0,0]]
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>m == grid.length</code></li>
	<li><code>n == grid[i].length</code></li>
	<li><code>1 &lt;= m, n &lt;= 50</code></li>
	<li><code>grid[i][j]</code> is either <code>0</code> or <code>1</code>.</li>
</ul>
</div><hr><h3>Submissions</h3><table class=""><colgroup><col><col><col><col><col></colgroup><thead class="ant-table-thead"><tr><th class="time-column__1guG"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Time Submitted</span><span class="ant-table-column-sorter"></span></div></span></th><th class="status-column__3SUg"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Status</span><span class="ant-table-column-sorter"></span></div></span></th><th class="runtime-column__1ka_"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Runtime</span><span class="ant-table-column-sorter"></span></div></span></th><th class="memory-column__1dxp"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Memory</span><span class="ant-table-column-sorter"></span></div></span></th><th class="lang-column__tR-8"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Language</span><span class="ant-table-column-sorter"></span></div></span></th></tr></thead><tbody class="ant-table-tbody"><tr class="ant-table-row ant-table-row-level-0" data-row-key="747559275"><td class="time-column__1guG">07/15/2022 12:08</td><td class="status-column__3SUg"><a href="/submissions/detail/747559275/" target="_blank" class="ac__35gz" data-submission-id="747559275">Accepted</a></td><td class="runtime-column__1ka_">3 ms</td><td class="memory-column__1dxp">42.6 MB</td><td class="lang-column__tR-8">java</td></tr><tr class="ant-table-row ant-table-row-level-0" data-row-key="747558130"><td class="time-column__1guG">07/15/2022 12:06</td><td class="status-column__3SUg"><a href="/submissions/detail/747558130/" target="_blank" class="ac__35gz" data-submission-id="747558130">Accepted</a></td><td class="runtime-column__1ka_">4 ms</td><td class="memory-column__1dxp">47.7 MB</td><td class="lang-column__tR-8">java</td></tr><tr class="ant-table-row ant-table-row-level-0" data-row-key="747557861"><td class="time-column__1guG">07/15/2022 12:06</td><td class="status-column__3SUg"><a href="/submissions/detail/747557861/" target="_blank" class="ac__35gz" data-submission-id="747557861">Accepted</a></td><td class="runtime-column__1ka_">5 ms</td><td class="memory-column__1dxp">48.1 MB</td><td class="lang-column__tR-8">java</td></tr><tr class="ant-table-row ant-table-row-level-0" data-row-key="747557297"><td class="time-column__1guG">07/15/2022 12:05</td><td class="status-column__3SUg"><a href="/submissions/detail/747557297/" target="_blank" class="ac__35gz" data-submission-id="747557297">Accepted</a></td><td class="runtime-column__1ka_">4 ms</td><td class="memory-column__1dxp">48.3 MB</td><td class="lang-column__tR-8">java</td></tr></tbody></table>