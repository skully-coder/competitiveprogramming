<h2><a href="https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/">2160. Minimum Sum of Four Digit Number After Splitting Digits</a></h2><h3>Easy</h3><h3>Math,Greedy,Sorting</h3><hr><div><p>You are given a <strong>positive</strong> integer <code>num</code> consisting of exactly four digits. Split <code>num</code> into two new integers <code>new1</code> and <code>new2</code> by using the <strong>digits</strong> found in <code>num</code>. <strong>Leading zeros</strong> are allowed in <code>new1</code> and <code>new2</code>, and <strong>all</strong> the digits found in <code>num</code> must be used.</p>

<ul>
	<li>For example, given <code>num = 2932</code>, you have the following digits: two <code>2</code>'s, one <code>9</code> and one <code>3</code>. Some of the possible pairs <code>[new1, new2]</code> are <code>[22, 93]</code>, <code>[23, 92]</code>, <code>[223, 9]</code> and <code>[2, 329]</code>.</li>
</ul>

<p>Return <em>the <strong>minimum</strong> possible sum of </em><code>new1</code><em> and </em><code>new2</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> num = 2932
<strong>Output:</strong> 52
<strong>Explanation:</strong> Some possible pairs [new1, new2] are [29, 23], [223, 9], etc.
The minimum sum can be obtained by the pair [29, 23]: 29 + 23 = 52.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> num = 4009
<strong>Output:</strong> 13
<strong>Explanation:</strong> Some possible pairs [new1, new2] are [0, 49], [490, 0], etc. 
The minimum sum can be obtained by the pair [4, 9]: 4 + 9 = 13.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1000 &lt;= num &lt;= 9999</code></li>
</ul>
</div><hr><h3>Submissions</h3><table class=""><colgroup><col><col><col><col><col></colgroup><thead class="ant-table-thead"><tr><th class="time-column__1guG"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Time Submitted</span><span class="ant-table-column-sorter"></span></div></span></th><th class="status-column__3SUg"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Status</span><span class="ant-table-column-sorter"></span></div></span></th><th class="runtime-column__1ka_"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Runtime</span><span class="ant-table-column-sorter"></span></div></span></th><th class="memory-column__1dxp"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Memory</span><span class="ant-table-column-sorter"></span></div></span></th><th class="lang-column__tR-8"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Language</span><span class="ant-table-column-sorter"></span></div></span></th></tr></thead><tbody class="ant-table-tbody"><tr class="ant-table-row ant-table-row-level-0" data-row-key="739949427"><td class="time-column__1guG">07/06/2022 15:37</td><td class="status-column__3SUg"><a href="/submissions/detail/739949427/" target="_blank" class="ac__35gz" data-submission-id="739949427">Accepted</a></td><td class="runtime-column__1ka_">4 ms</td><td class="memory-column__1dxp">5.8 MB</td><td class="lang-column__tR-8">cpp</td></tr><tr class="ant-table-row ant-table-row-level-0" data-row-key="739144627"><td class="time-column__1guG">07/05/2022 18:56</td><td class="status-column__3SUg"><a href="/submissions/detail/739144627/" target="_blank" class="ac__35gz" data-submission-id="739144627">Accepted</a></td><td class="runtime-column__1ka_">4 ms</td><td class="memory-column__1dxp">6.1 MB</td><td class="lang-column__tR-8">cpp</td></tr><tr class="ant-table-row ant-table-row-level-0" data-row-key="735199099"><td class="time-column__1guG">06/30/2022 21:49</td><td class="status-column__3SUg"><a href="/submissions/detail/735199099/" target="_blank" class="ac__35gz" data-submission-id="735199099">Accepted</a></td><td class="runtime-column__1ka_">0 ms</td><td class="memory-column__1dxp">5.9 MB</td><td class="lang-column__tR-8">cpp</td></tr></tbody></table>