<h2><a href="https://leetcode.com/problems/regular-expression-matching/">10. Regular Expression Matching</a></h2><h3>Hard</h3><h3>String,Dynamic Programming,Recursion</h3><hr><div><p>Given an input string <code>s</code>&nbsp;and a pattern <code>p</code>, implement regular expression matching with support for <code>'.'</code> and <code>'*'</code> where:</p>

<ul>
	<li><code>'.'</code> Matches any single character.​​​​</li>
	<li><code>'*'</code> Matches zero or more of the preceding element.</li>
</ul>

<p>The matching should cover the <strong>entire</strong> input string (not partial).</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> s = "aa", p = "a"
<strong>Output:</strong> false
<strong>Explanation:</strong> "a" does not match the entire string "aa".
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> s = "aa", p = "a*"
<strong>Output:</strong> true
<strong>Explanation:</strong> '*' means zero or more of the preceding element, 'a'. Therefore, by repeating 'a' once, it becomes "aa".
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> s = "ab", p = ".*"
<strong>Output:</strong> true
<strong>Explanation:</strong> ".*" means "zero or more (*) of any character (.)".
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length&nbsp;&lt;= 20</code></li>
	<li><code>1 &lt;= p.length&nbsp;&lt;= 30</code></li>
	<li><code>s</code> contains only lowercase English letters.</li>
	<li><code>p</code> contains only lowercase English letters, <code>'.'</code>, and&nbsp;<code>'*'</code>.</li>
	<li>It is guaranteed for each appearance of the character <code>'*'</code>, there will be a previous valid character to match.</li>
</ul>
</div><hr><h3>Submissions</h3><table class=""><colgroup><col><col><col><col><col></colgroup><thead class="ant-table-thead"><tr><th class="time-column__1guG"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Time Submitted</span><span class="ant-table-column-sorter"></span></div></span></th><th class="status-column__3SUg"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Status</span><span class="ant-table-column-sorter"></span></div></span></th><th class="runtime-column__1ka_"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Runtime</span><span class="ant-table-column-sorter"></span></div></span></th><th class="memory-column__1dxp"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Memory</span><span class="ant-table-column-sorter"></span></div></span></th><th class="lang-column__tR-8"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Language</span><span class="ant-table-column-sorter"></span></div></span></th></tr></thead><tbody class="ant-table-tbody"><tr class="ant-table-row ant-table-row-level-0" data-row-key="727728304"><td class="time-column__1guG">06/21/2022 21:58</td><td class="status-column__3SUg"><a href="/submissions/detail/727728304/" target="_blank" class="ac__35gz" data-submission-id="727728304">Accepted</a></td><td class="runtime-column__1ka_">3 ms</td><td class="memory-column__1dxp">42.4 MB</td><td class="lang-column__tR-8">java</td></tr><tr class="ant-table-row ant-table-row-level-0" data-row-key="560228218"><td class="time-column__1guG">09/24/2021 16:47</td><td class="status-column__3SUg"><a href="/submissions/detail/560228218/" target="_blank" class="ac__35gz" data-submission-id="560228218">Accepted</a></td><td class="runtime-column__1ka_">2 ms</td><td class="memory-column__1dxp">37.7 MB</td><td class="lang-column__tR-8">java</td></tr><tr class="ant-table-row ant-table-row-level-0" data-row-key="560228102"><td class="time-column__1guG">09/24/2021 16:46</td><td class="status-column__3SUg"><a href="/submissions/detail/560228102/" target="_blank" class="error__B-Nx" data-submission-id="560228102">Wrong Answer</a></td><td class="runtime-column__1ka_">N/A</td><td class="memory-column__1dxp">N/A</td><td class="lang-column__tR-8">cpp</td></tr><tr class="ant-table-row ant-table-row-level-0" data-row-key="560227349"><td class="time-column__1guG">09/24/2021 16:43</td><td class="status-column__3SUg"><a href="/submissions/detail/560227349/" target="_blank" class="ac__35gz" data-submission-id="560227349">Accepted</a></td><td class="runtime-column__1ka_">164 ms</td><td class="memory-column__1dxp">13.4 MB</td><td class="lang-column__tR-8">cpp</td></tr></tbody></table>