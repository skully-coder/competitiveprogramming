<h2><a href="https://leetcode.com/problems/is-subsequence/">392. Is Subsequence</a></h2><h3>Easy</h3><h3>Two Pointers,String,Dynamic Programming</h3><hr><div><p>Given two strings <code>s</code> and <code>t</code>, return <code>true</code><em> if </em><code>s</code><em> is a <strong>subsequence</strong> of </em><code>t</code><em>, or </em><code>false</code><em> otherwise</em>.</p>

<p>A <strong>subsequence</strong> of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., <code>"ace"</code> is a subsequence of <code>"<u>a</u>b<u>c</u>d<u>e</u>"</code> while <code>"aec"</code> is not).</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> s = "abc", t = "ahbgdc"
<strong>Output:</strong> true
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> s = "axc", t = "ahbgdc"
<strong>Output:</strong> false
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= s.length &lt;= 100</code></li>
	<li><code>0 &lt;= t.length &lt;= 10<sup>4</sup></code></li>
	<li><code>s</code> and <code>t</code> consist only of lowercase English letters.</li>
</ul>

<p>&nbsp;</p>
<strong>Follow up:</strong> Suppose there are lots of incoming <code>s</code>, say <code>s<sub>1</sub>, s<sub>2</sub>, ..., s<sub>k</sub></code> where <code>k &gt;= 10<sup>9</sup></code>, and you want to check one by one to see if <code>t</code> has its subsequence. In this scenario, how would you change your code?</div><hr><h3>Submissions</h3><table class=""><colgroup><col><col><col><col><col></colgroup><thead class="ant-table-thead"><tr><th class="time-column__1guG"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Time Submitted</span><span class="ant-table-column-sorter"></span></div></span></th><th class="status-column__3SUg"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Status</span><span class="ant-table-column-sorter"></span></div></span></th><th class="runtime-column__1ka_"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Runtime</span><span class="ant-table-column-sorter"></span></div></span></th><th class="memory-column__1dxp"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Memory</span><span class="ant-table-column-sorter"></span></div></span></th><th class="lang-column__tR-8"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Language</span><span class="ant-table-column-sorter"></span></div></span></th></tr></thead><tbody class="ant-table-tbody"><tr class="ant-table-row ant-table-row-level-0" data-row-key="727626850"><td class="time-column__1guG">06/21/2022 19:34</td><td class="status-column__3SUg"><a href="/submissions/detail/727626850/" target="_blank" class="ac__35gz" data-submission-id="727626850">Accepted</a></td><td class="runtime-column__1ka_">7 ms</td><td class="memory-column__1dxp">8.8 MB</td><td class="lang-column__tR-8">cpp</td></tr><tr class="ant-table-row ant-table-row-level-0" data-row-key="727624772"><td class="time-column__1guG">06/21/2022 19:30</td><td class="status-column__3SUg"><a href="/submissions/detail/727624772/" target="_blank" class="ac__35gz" data-submission-id="727624772">Accepted</a></td><td class="runtime-column__1ka_">0 ms</td><td class="memory-column__1dxp">8.6 MB</td><td class="lang-column__tR-8">cpp</td></tr><tr class="ant-table-row ant-table-row-level-0" data-row-key="727624100"><td class="time-column__1guG">06/21/2022 19:29</td><td class="status-column__3SUg"><a href="/submissions/detail/727624100/" target="_blank" class="ac__35gz" data-submission-id="727624100">Accepted</a></td><td class="runtime-column__1ka_">3 ms</td><td class="memory-column__1dxp">8.7 MB</td><td class="lang-column__tR-8">cpp</td></tr><tr class="ant-table-row ant-table-row-level-0" data-row-key="727620491"><td class="time-column__1guG">06/21/2022 19:23</td><td class="status-column__3SUg"><a href="/submissions/detail/727620491/" target="_blank" class="ac__35gz" data-submission-id="727620491">Accepted</a></td><td class="runtime-column__1ka_">4 ms</td><td class="memory-column__1dxp">8.5 MB</td><td class="lang-column__tR-8">cpp</td></tr></tbody></table>