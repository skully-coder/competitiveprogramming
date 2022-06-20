## [745. Prefix and Suffix Search](https://leetcode.com/problems/prefix-and-suffix-search/)

### Hard

### String,Design,Trie

<div>Design a special dictionary with some words that searchs the words in it by a prefix and a suffix.

  

Implement the `WordFilter` class:

  
  

+ `WordFilter(string[] words)` Initializes the object with the `words` in the dictionary.

+  `f(string prefix, string suffix)` Returns <em>the index of the word in the dictionary,</em> which has the prefix `prefix` and the suffix `suffix`. If there is more than one valid index, return <strong> the largest</strong> of them. If there is no such word in the dictionary, return `-1`.


  
  

&nbsp;

**Example 1:**

  

<pre>
<strong>Input</strong>

["WordFilter", "f"]

[[["apple"]], ["a", "e"]]

<strong>Output</strong>

[null, 0]

  

<strong>Explanation</strong>

WordFilter wordFilter = new WordFilter(["apple"]);

wordFilter.f("a", "e"); // return 0, because the word at index 0 has prefix = "a" and suffix = 'e".

</pre>

  

<p>&nbsp;</p>

**Constraints:**

  
  

+ `1 &lt;= words.length &lt;= 15000`

+ `1 &lt;= words[i].length &lt;= 10

+ `1 &lt;= prefix.length, suffix.length &lt;= 10`

+ `words[i]`>, `prefix` and `suffix `consist of lower-case English letters only.

+ At most  `15000` calls will be made to the function `f`.

  

</div>

  

<hr>

### Submissions

<table  class=""><colgroup><col><col><col><col><col></colgroup><thead  class="ant-table-thead"><tr><th  class="time-column__1guG"><span  class="ant-table-header-column"><div><span  class="ant-table-column-title">Time Submitted</span><span  class="ant-table-column-sorter"></span></div></span></th><th  class="status-column__3SUg"><span  class="ant-table-header-column"><div><span  class="ant-table-column-title">Status</span><span  class="ant-table-column-sorter"></span></div></span></th><th  class="runtime-column__1ka_"><span  class="ant-table-header-column"><div><span  class="ant-table-column-title">Runtime</span><span  class="ant-table-column-sorter"></span></div></span></th><th  class="memory-column__1dxp"><span  class="ant-table-header-column"><div><span  class="ant-table-column-title">Memory</span><span  class="ant-table-column-sorter"></span></div></span></th><th  class="lang-column__tR-8"><span  class="ant-table-header-column"><div><span  class="ant-table-column-title">Language</span><span  class="ant-table-column-sorter"></span></div></span></th></tr></thead><tbody  class="ant-table-tbody"><tr  class="ant-table-row ant-table-row-level-0"  data-row-key="724934250"><td  class="time-column__1guG">06/18/2022 12:01</td><td  class="status-column__3SUg"><a  href="/submissions/detail/724934250/"  target="_blank"  class="ac__35gz"  data-submission-id="724934250">Accepted</a></td><td  class="runtime-column__1ka_">450 ms</td><td  class="memory-column__1dxp">255.6 MB</td><td  class="lang-column__tR-8">java</td></tr><tr  class="ant-table-row ant-table-row-level-0"  data-row-key="724922308"><td  class="time-column__1guG">06/18/2022 11:41</td><td  class="status-column__3SUg"><a  href="/submissions/detail/724922308/"  target="_blank"  class="ac__35gz"  data-submission-id="724922308">Accepted</a></td><td  class="runtime-column__1ka_">551 ms</td><td  class="memory-column__1dxp">257.3 MB</td><td  class="lang-column__tR-8">java</td></tr><tr  class="ant-table-row ant-table-row-level-0"  data-row-key="724922126"><td  class="time-column__1guG">06/18/2022 11:40</td><td  class="status-column__3SUg"><a  href="/submissions/detail/724922126/"  target="_blank"  class="ac__35gz"  data-submission-id="724922126">Accepted</a></td><td  class="runtime-column__1ka_">1177 ms</td><td  class="memory-column__1dxp">151.8 MB</td><td  class="lang-column__tR-8">cpp</td></tr><tr  class="ant-table-row ant-table-row-level-0"  data-row-key="724921981"><td  class="time-column__1guG">06/18/2022 11:40</td><td  class="status-column__3SUg"><a  href="/submissions/detail/724921981/"  target="_blank"  class="error__B-Nx"  data-submission-id="724921981">Time Limit Exceeded</a></td><td  class="runtime-column__1ka_">N/A</td><td  class="memory-column__1dxp">N/A</td><td  class="lang-column__tR-8">cpp</td></tr><tr  class="ant-table-row ant-table-row-level-0"  data-row-key="724921260"><td  class="time-column__1guG">06/18/2022 11:39</td><td  class="status-column__3SUg"><a  href="/submissions/detail/724921260/"  target="_blank"  class="ac__35gz"  data-submission-id="724921260">Accepted</a></td><td  class="runtime-column__1ka_">1135 ms</td><td  class="memory-column__1dxp">151.8 MB</td><td  class="lang-column__tR-8">cpp</td></tr><tr  class="ant-table-row ant-table-row-level-0"  data-row-key="724920398"><td  class="time-column__1guG">06/18/2022 11:37</td><td  class="status-column__3SUg"><a  href="/submissions/detail/724920398/"  target="_blank"  class="ac__35gz"  data-submission-id="724920398">Accepted</a></td><td  class="runtime-column__1ka_">457 ms</td><td  class="memory-column__1dxp">254.8 MB</td><td  class="lang-column__tR-8">java</td></tr></tbody></table></hr>
