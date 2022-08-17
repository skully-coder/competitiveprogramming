<h2><a href="https://leetcode.com/problems/unique-morse-code-words/">804. Unique Morse Code Words</a></h2><h3>Easy</h3><h3>Array,Hash Table,String</h3><hr><div><p>International Morse Code defines a standard encoding where each letter is mapped to a series of dots and dashes, as follows:</p>

<ul>
	<li><code>'a'</code> maps to <code>".-"</code>,</li>
	<li><code>'b'</code> maps to <code>"-..."</code>,</li>
	<li><code>'c'</code> maps to <code>"-.-."</code>, and so on.</li>
</ul>

<p>For convenience, the full table for the <code>26</code> letters of the English alphabet is given below:</p>

<pre>[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]</pre>

<p>Given an array of strings <code>words</code> where each word can be written as a concatenation of the Morse code of each letter.</p>

<ul>
	<li>For example, <code>"cab"</code> can be written as <code>"-.-..--..."</code>, which is the concatenation of <code>"-.-."</code>, <code>".-"</code>, and <code>"-..."</code>. We will call such a concatenation the <strong>transformation</strong> of a word.</li>
</ul>

<p>Return <em>the number of different <strong>transformations</strong> among all words we have</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> words = ["gin","zen","gig","msg"]
<strong>Output:</strong> 2
<strong>Explanation:</strong> The transformation of each word is:
"gin" -&gt; "--...-."
"zen" -&gt; "--...-."
"gig" -&gt; "--...--."
"msg" -&gt; "--...--."
There are 2 different transformations: "--...-." and "--...--.".
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> words = ["a"]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= words.length &lt;= 100</code></li>
	<li><code>1 &lt;= words[i].length &lt;= 12</code></li>
	<li><code>words[i]</code> consists of lowercase English letters.</li>
</ul>
</div><hr><h3>Submissions</h3><table class=""><colgroup><col><col><col><col><col></colgroup><thead class="ant-table-thead"><tr><th class="time-column__1guG"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Time Submitted</span><span class="ant-table-column-sorter"></span></div></span></th><th class="status-column__3SUg"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Status</span><span class="ant-table-column-sorter"></span></div></span></th><th class="runtime-column__1ka_"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Runtime</span><span class="ant-table-column-sorter"></span></div></span></th><th class="memory-column__1dxp"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Memory</span><span class="ant-table-column-sorter"></span></div></span></th><th class="lang-column__tR-8"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Language</span><span class="ant-table-column-sorter"></span></div></span></th></tr></thead><tbody class="ant-table-tbody"><tr class="ant-table-row ant-table-row-level-0" data-row-key="775897616"><td class="time-column__1guG">08/17/2022 14:11</td><td class="status-column__3SUg"><a href="/submissions/detail/775897616/" target="_blank" class="ac__35gz" data-submission-id="775897616">Accepted</a></td><td class="runtime-column__1ka_">5 ms</td><td class="memory-column__1dxp">8.6 MB</td><td class="lang-column__tR-8">cpp</td></tr><tr class="ant-table-row ant-table-row-level-0" data-row-key="775897095"><td class="time-column__1guG">08/17/2022 14:10</td><td class="status-column__3SUg"><a href="/submissions/detail/775897095/" target="_blank" class="ac__35gz" data-submission-id="775897095">Accepted</a></td><td class="runtime-column__1ka_">16 ms</td><td class="memory-column__1dxp">8.7 MB</td><td class="lang-column__tR-8">cpp</td></tr></tbody></table>