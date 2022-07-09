<h2><a href="https://leetcode.com/problems/jump-game-vi/">1696. Jump Game VI</a></h2><h3>Medium</h3><h3>Array,Dynamic Programming,Queue,Sliding Window,Heap (Priority Queue),Monotonic Queue</h3><hr><div><p>You are given a <strong>0-indexed</strong> integer array <code>nums</code> and an integer <code>k</code>.</p>

<p>You are initially standing at index <code>0</code>. In one move, you can jump at most <code>k</code> steps forward without going outside the boundaries of the array. That is, you can jump from index <code>i</code> to any index in the range <code>[i + 1, min(n - 1, i + k)]</code> <strong>inclusive</strong>.</p>

<p>You want to reach the last index of the array (index <code>n - 1</code>). Your <strong>score</strong> is the <strong>sum</strong> of all <code>nums[j]</code> for each index <code>j</code> you visited in the array.</p>

<p>Return <em>the <strong>maximum score</strong> you can get</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [<u>1</u>,<u>-1</u>,-2,<u>4</u>,-7,<u>3</u>], k = 2
<strong>Output:</strong> 7
<strong>Explanation:</strong> You can choose your jumps forming the subsequence [1,-1,4,3] (underlined above). The sum is 7.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [<u>10</u>,-5,-2,<u>4</u>,0,<u>3</u>], k = 3
<strong>Output:</strong> 17
<strong>Explanation:</strong> You can choose your jumps forming the subsequence [10,4,3] (underlined above). The sum is 17.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> nums = [1,-5,-20,4,-1,3,-6,-3], k = 2
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length, k &lt;= 10<sup>5</sup></code></li>
	<li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
</ul>
</div><hr><h3>Submissions</h3><table class=""><colgroup><col><col><col><col><col></colgroup><thead class="ant-table-thead"><tr><th class="time-column__1guG"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Time Submitted</span><span class="ant-table-column-sorter"></span></div></span></th><th class="status-column__3SUg"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Status</span><span class="ant-table-column-sorter"></span></div></span></th><th class="runtime-column__1ka_"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Runtime</span><span class="ant-table-column-sorter"></span></div></span></th><th class="memory-column__1dxp"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Memory</span><span class="ant-table-column-sorter"></span></div></span></th><th class="lang-column__tR-8"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Language</span><span class="ant-table-column-sorter"></span></div></span></th></tr></thead><tbody class="ant-table-tbody"><tr class="ant-table-row ant-table-row-level-0" data-row-key="742645955"><td class="time-column__1guG">07/09/2022 21:16</td><td class="status-column__3SUg"><a href="/submissions/detail/742645955/" target="_blank" class="ac__35gz" data-submission-id="742645955">Accepted</a></td><td class="runtime-column__1ka_">481 ms</td><td class="memory-column__1dxp">90.7 MB</td><td class="lang-column__tR-8">cpp</td></tr><tr class="ant-table-row ant-table-row-level-0" data-row-key="742644723"><td class="time-column__1guG">07/09/2022 21:15</td><td class="status-column__3SUg"><a href="/submissions/detail/742644723/" target="_blank" class="error__B-Nx" data-submission-id="742644723">Wrong Answer</a></td><td class="runtime-column__1ka_">N/A</td><td class="memory-column__1dxp">N/A</td><td class="lang-column__tR-8">cpp</td></tr></tbody></table>