<h2><a href="https://leetcode.com/problems/paint-house-iii/">1473. Paint House III</a></h2><h3>Hard</h3><h3>Array,Dynamic Programming</h3><hr><div><p>There is a row of <code>m</code> houses in a small city, each house must be painted with one of the <code>n</code> colors (labeled from <code>1</code> to <code>n</code>), some houses that have been painted last summer should not be painted again.</p>

<p>A neighborhood is a maximal group of continuous houses that are painted with the same color.</p>

<ul>
	<li>For example: <code>houses = [1,2,2,3,3,2,1,1]</code> contains <code>5</code> neighborhoods <code>[{1}, {2,2}, {3,3}, {2}, {1,1}]</code>.</li>
</ul>

<p>Given an array <code>houses</code>, an <code>m x n</code> matrix <code>cost</code> and an integer <code>target</code> where:</p>

<ul>
	<li><code>houses[i]</code>: is the color of the house <code>i</code>, and <code>0</code> if the house is not painted yet.</li>
	<li><code>cost[i][j]</code>: is the cost of paint the house <code>i</code> with the color <code>j + 1</code>.</li>
</ul>

<p>Return <em>the minimum cost of painting all the remaining houses in such a way that there are exactly</em> <code>target</code> <em>neighborhoods</em>. If it is not possible, return <code>-1</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> houses = [0,0,0,0,0], cost = [[1,10],[10,1],[10,1],[1,10],[5,1]], m = 5, n = 2, target = 3
<strong>Output:</strong> 9
<strong>Explanation:</strong> Paint houses of this way [1,2,2,1,1]
This array contains target = 3 neighborhoods, [{1}, {2,2}, {1,1}].
Cost of paint all houses (1 + 1 + 1 + 1 + 5) = 9.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> houses = [0,2,1,2,0], cost = [[1,10],[10,1],[10,1],[1,10],[5,1]], m = 5, n = 2, target = 3
<strong>Output:</strong> 11
<strong>Explanation:</strong> Some houses are already painted, Paint the houses of this way [2,2,1,2,2]
This array contains target = 3 neighborhoods, [{2,2}, {1}, {2,2}]. 
Cost of paint the first and last house (10 + 1) = 11.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> houses = [3,1,2,3], cost = [[1,1,1],[1,1,1],[1,1,1],[1,1,1]], m = 4, n = 3, target = 3
<strong>Output:</strong> -1
<strong>Explanation:</strong> Houses are already painted with a total of 4 neighborhoods [{3},{1},{2},{3}] different of target = 3.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>m == houses.length == cost.length</code></li>
	<li><code>n == cost[i].length</code></li>
	<li><code>1 &lt;= m &lt;= 100</code></li>
	<li><code>1 &lt;= n &lt;= 20</code></li>
	<li><code>1 &lt;= target &lt;= m</code></li>
	<li><code>0 &lt;= houses[i] &lt;= n</code></li>
	<li><code>1 &lt;= cost[i][j] &lt;= 10<sup>4</sup></code></li>
</ul>
</div><hr><h3>Submissions</h3><table class=""><colgroup><col><col><col><col><col></colgroup><thead class="ant-table-thead"><tr><th class="time-column__1guG"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Time Submitted</span><span class="ant-table-column-sorter"></span></div></span></th><th class="status-column__3SUg"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Status</span><span class="ant-table-column-sorter"></span></div></span></th><th class="runtime-column__1ka_"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Runtime</span><span class="ant-table-column-sorter"></span></div></span></th><th class="memory-column__1dxp"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Memory</span><span class="ant-table-column-sorter"></span></div></span></th><th class="lang-column__tR-8"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Language</span><span class="ant-table-column-sorter"></span></div></span></th></tr></thead><tbody class="ant-table-tbody"><tr class="ant-table-row ant-table-row-level-0" data-row-key="741509086"><td class="time-column__1guG">07/08/2022 10:36</td><td class="status-column__3SUg"><a href="/submissions/detail/741509086/" target="_blank" class="ac__35gz" data-submission-id="741509086">Accepted</a></td><td class="runtime-column__1ka_">82 ms</td><td class="memory-column__1dxp">10.6 MB</td><td class="lang-column__tR-8">cpp</td></tr><tr class="ant-table-row ant-table-row-level-0" data-row-key="741508884"><td class="time-column__1guG">07/08/2022 10:35</td><td class="status-column__3SUg"><a href="/submissions/detail/741508884/" target="_blank" class="ac__35gz" data-submission-id="741508884">Accepted</a></td><td class="runtime-column__1ka_">112 ms</td><td class="memory-column__1dxp">10.8 MB</td><td class="lang-column__tR-8">cpp</td></tr></tbody></table>