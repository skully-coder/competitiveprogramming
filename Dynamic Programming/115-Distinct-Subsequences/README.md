<h2><a href="https://leetcode.com/problems/distinct-subsequences/">115. Distinct Subsequences</a></h2><h3>Hard</h3><h3>String,Dynamic Programming</h3><hr><div><p>Given two strings <code>s</code> and <code>t</code>, return <em>the number of distinct subsequences of <code>s</code> which equals <code>t</code></em>.</p>

<p>A string's <strong>subsequence</strong> is a new string formed from the original string by deleting some (can be none) of the characters without disturbing the remaining characters' relative positions. (i.e., <code>"ACE"</code> is a subsequence of <code>"ABCDE"</code> while <code>"AEC"</code> is not).</p>

<p>The test cases are generated so that the answer fits on a 32-bit signed integer.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> s = "rabbbit", t = "rabbit"
<strong>Output:</strong> 3
<strong>Explanation:</strong>
As shown below, there are 3 ways you can generate "rabbit" from S.
<code><strong><u>rabb</u></strong>b<strong><u>it</u></strong></code>
<code><strong><u>ra</u></strong>b<strong><u>bbit</u></strong></code>
<code><strong><u>rab</u></strong>b<strong><u>bit</u></strong></code>
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> s = "babgbag", t = "bag"
<strong>Output:</strong> 5
<strong>Explanation:</strong>
As shown below, there are 5 ways you can generate "bag" from S.
<code><strong><u>ba</u></strong>b<u><strong>g</strong></u>bag</code>
<code><strong><u>ba</u></strong>bgba<strong><u>g</u></strong></code>
<code><u><strong>b</strong></u>abgb<strong><u>ag</u></strong></code>
<code>ba<u><strong>b</strong></u>gb<u><strong>ag</strong></u></code>
<code>babg<strong><u>bag</u></strong></code></pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length, t.length &lt;= 1000</code></li>
	<li><code>s</code> and <code>t</code> consist of English letters.</li>
</ul>
</div><hr><h3>Submissions</h3><table class=""><colgroup><col><col><col><col><col></colgroup><thead class="ant-table-thead"><tr><th class="time-column__1guG"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Time Submitted</span><span class="ant-table-column-sorter"></span></div></span></th><th class="status-column__3SUg"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Status</span><span class="ant-table-column-sorter"></span></div></span></th><th class="runtime-column__1ka_"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Runtime</span><span class="ant-table-column-sorter"></span></div></span></th><th class="memory-column__1dxp"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Memory</span><span class="ant-table-column-sorter"></span></div></span></th><th class="lang-column__tR-8"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Language</span><span class="ant-table-column-sorter"></span></div></span></th></tr></thead><tbody class="ant-table-tbody"><tr class="ant-table-row ant-table-row-level-0" data-row-key="775295350"><td class="time-column__1guG">08/16/2022 21:48</td><td class="status-column__3SUg"><a href="/submissions/detail/775295350/" target="_blank" class="ac__35gz" data-submission-id="775295350">Accepted</a></td><td class="runtime-column__1ka_">17 ms</td><td class="memory-column__1dxp">15 MB</td><td class="lang-column__tR-8">cpp</td></tr><tr class="ant-table-row ant-table-row-level-0" data-row-key="765126304"><td class="time-column__1guG">08/04/2022 20:41</td><td class="status-column__3SUg"><a href="/submissions/detail/765126304/" target="_blank" class="ac__35gz" data-submission-id="765126304">Accepted</a></td><td class="runtime-column__1ka_">25 ms</td><td class="memory-column__1dxp">15.1 MB</td><td class="lang-column__tR-8">cpp</td></tr><tr class="ant-table-row ant-table-row-level-0" data-row-key="765114207"><td class="time-column__1guG">08/04/2022 20:24</td><td class="status-column__3SUg"><a href="/submissions/detail/765114207/" target="_blank" class="ac__35gz" data-submission-id="765114207">Accepted</a></td><td class="runtime-column__1ka_">11 ms</td><td class="memory-column__1dxp">15.1 MB</td><td class="lang-column__tR-8">cpp</td></tr><tr class="ant-table-row ant-table-row-level-0" data-row-key="765113680"><td class="time-column__1guG">08/04/2022 20:23</td><td class="status-column__3SUg"><a href="/submissions/detail/765113680/" target="_blank" class="error__B-Nx" data-submission-id="765113680">Time Limit Exceeded</a></td><td class="runtime-column__1ka_">N/A</td><td class="memory-column__1dxp">N/A</td><td class="lang-column__tR-8">cpp</td></tr><tr class="ant-table-row ant-table-row-level-0" data-row-key="765113240"><td class="time-column__1guG">08/04/2022 20:22</td><td class="status-column__3SUg"><a href="/submissions/detail/765113240/" target="_blank" class="error__B-Nx" data-submission-id="765113240">Runtime Error</a></td><td class="runtime-column__1ka_">N/A</td><td class="memory-column__1dxp">N/A</td><td class="lang-column__tR-8">cpp</td></tr><tr class="ant-table-row ant-table-row-level-0" data-row-key="765112823"><td class="time-column__1guG">08/04/2022 20:22</td><td class="status-column__3SUg"><a href="/submissions/detail/765112823/" target="_blank" class="ac__35gz" data-submission-id="765112823">Accepted</a></td><td class="runtime-column__1ka_">1095 ms</td><td class="memory-column__1dxp">30.1 MB</td><td class="lang-column__tR-8">cpp</td></tr><tr class="ant-table-row ant-table-row-level-0" data-row-key="765111538"><td class="time-column__1guG">08/04/2022 20:20</td><td class="status-column__3SUg"><a href="/submissions/detail/765111538/" target="_blank" class="error__B-Nx" data-submission-id="765111538">Runtime Error</a></td><td class="runtime-column__1ka_">N/A</td><td class="memory-column__1dxp">N/A</td><td class="lang-column__tR-8">cpp</td></tr><tr class="ant-table-row ant-table-row-level-0" data-row-key="557410209"><td class="time-column__1guG">09/19/2021 13:24</td><td class="status-column__3SUg"><a href="/submissions/detail/557410209/" target="_blank" class="ac__35gz" data-submission-id="557410209">Accepted</a></td><td class="runtime-column__1ka_">304 ms</td><td class="memory-column__1dxp">18.6 MB</td><td class="lang-column__tR-8">cpp</td></tr></tbody></table>