<h2><a href="https://leetcode.com/problems/get-maximum-in-generated-array/">1646. Get Maximum in Generated Array</a></h2><h3>Easy</h3><h3>Array,Dynamic Programming,Simulation</h3><hr><div><p>You are given an integer <code>n</code>. A <strong>0-indexed</strong> integer array <code>nums</code> of length <code>n + 1</code> is generated in the following way:</p>

<ul>
	<li><code>nums[0] = 0</code></li>
	<li><code>nums[1] = 1</code></li>
	<li><code>nums[2 * i] = nums[i]</code> when <code>2 &lt;= 2 * i &lt;= n</code></li>
	<li><code>nums[2 * i + 1] = nums[i] + nums[i + 1]</code> when <code>2 &lt;= 2 * i + 1 &lt;= n</code></li>
</ul>

<p>Return<strong> </strong><em>the <strong>maximum</strong> integer in the array </em><code>nums</code>​​​.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> n = 7
<strong>Output:</strong> 3
<strong>Explanation:</strong> According to the given rules:
  nums[0] = 0
  nums[1] = 1
  nums[(1 * 2) = 2] = nums[1] = 1
  nums[(1 * 2) + 1 = 3] = nums[1] + nums[2] = 1 + 1 = 2
  nums[(2 * 2) = 4] = nums[2] = 1
  nums[(2 * 2) + 1 = 5] = nums[2] + nums[3] = 1 + 2 = 3
  nums[(3 * 2) = 6] = nums[3] = 2
  nums[(3 * 2) + 1 = 7] = nums[3] + nums[4] = 2 + 1 = 3
Hence, nums = [0,1,1,2,1,3,2,3], and the maximum is max(0,1,1,2,1,3,2,3) = 3.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> n = 2
<strong>Output:</strong> 1
<strong>Explanation:</strong> According to the given rules, nums = [0,1,1]. The maximum is max(0,1,1) = 1.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> n = 3
<strong>Output:</strong> 2
<strong>Explanation:</strong> According to the given rules, nums = [0,1,1,2]. The maximum is max(0,1,1,2) = 2.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= n &lt;= 100</code></li>
</ul>
</div><hr><h3>Submissions</h3><table class=""><colgroup><col><col><col><col><col></colgroup><thead class="ant-table-thead"><tr><th class="time-column__1guG"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Time Submitted</span><span class="ant-table-column-sorter"></span></div></span></th><th class="status-column__3SUg"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Status</span><span class="ant-table-column-sorter"></span></div></span></th><th class="runtime-column__1ka_"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Runtime</span><span class="ant-table-column-sorter"></span></div></span></th><th class="memory-column__1dxp"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Memory</span><span class="ant-table-column-sorter"></span></div></span></th><th class="lang-column__tR-8"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Language</span><span class="ant-table-column-sorter"></span></div></span></th></tr></thead><tbody class="ant-table-tbody"><tr class="ant-table-row ant-table-row-level-0" data-row-key="740117265"><td class="time-column__1guG">07/06/2022 20:14</td><td class="status-column__3SUg"><a href="/submissions/detail/740117265/" target="_blank" class="ac__35gz" data-submission-id="740117265">Accepted</a></td><td class="runtime-column__1ka_">0 ms</td><td class="memory-column__1dxp">6.3 MB</td><td class="lang-column__tR-8">cpp</td></tr><tr class="ant-table-row ant-table-row-level-0" data-row-key="740114474"><td class="time-column__1guG">07/06/2022 20:10</td><td class="status-column__3SUg"><a href="/submissions/detail/740114474/" target="_blank" class="error__B-Nx" data-submission-id="740114474">Wrong Answer</a></td><td class="runtime-column__1ka_">N/A</td><td class="memory-column__1dxp">N/A</td><td class="lang-column__tR-8">cpp</td></tr><tr class="ant-table-row ant-table-row-level-0" data-row-key="740113905"><td class="time-column__1guG">07/06/2022 20:09</td><td class="status-column__3SUg"><a href="/submissions/detail/740113905/" target="_blank" class="error__B-Nx" data-submission-id="740113905">Runtime Error</a></td><td class="runtime-column__1ka_">N/A</td><td class="memory-column__1dxp">N/A</td><td class="lang-column__tR-8">cpp</td></tr></tbody></table>