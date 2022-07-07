<h2><a href="https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/">1379. Find a Corresponding Node of a Binary Tree in a Clone of That Tree</a></h2><h3>Easy</h3><h3>Tree,Depth-First Search,Breadth-First Search,Binary Tree</h3><hr><div><p>Given two binary trees <code>original</code> and <code>cloned</code> and given a reference to a node <code>target</code> in the original tree.</p>

<p>The <code>cloned</code> tree is a <strong>copy of</strong> the <code>original</code> tree.</p>

<p>Return <em>a reference to the same node</em> in the <code>cloned</code> tree.</p>

<p><strong>Note</strong> that you are <strong>not allowed</strong> to change any of the two trees or the <code>target</code> node and the answer <strong>must be</strong> a reference to a node in the <code>cloned</code> tree.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/02/21/e1.png" style="width: 544px; height: 426px;">
<pre><strong>Input:</strong> tree = [7,4,3,null,null,6,19], target = 3
<strong>Output:</strong> 3
<strong>Explanation:</strong> In all examples the original and cloned trees are shown. The target node is a green node from the original tree. The answer is the yellow node from the cloned tree.
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/02/21/e2.png" style="width: 221px; height: 159px;">
<pre><strong>Input:</strong> tree = [7], target =  7
<strong>Output:</strong> 7
</pre>

<p><strong>Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/02/21/e3.png" style="width: 459px; height: 486px;">
<pre><strong>Input:</strong> tree = [8,null,6,null,5,null,4,null,3,null,2,null,1], target = 4
<strong>Output:</strong> 4
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the <code>tree</code> is in the range <code>[1, 10<sup>4</sup>]</code>.</li>
	<li>The values of the nodes of the <code>tree</code> are unique.</li>
	<li><code>target</code> node is a node from the <code>original</code> tree and is not <code>null</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong> Could you solve the problem if repeated values on the tree are allowed?</p>
</div><hr><h3>Submissions</h3><table class=""><colgroup><col><col><col><col><col></colgroup><thead class="ant-table-thead"><tr><th class="time-column__1guG"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Time Submitted</span><span class="ant-table-column-sorter"></span></div></span></th><th class="status-column__3SUg"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Status</span><span class="ant-table-column-sorter"></span></div></span></th><th class="runtime-column__1ka_"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Runtime</span><span class="ant-table-column-sorter"></span></div></span></th><th class="memory-column__1dxp"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Memory</span><span class="ant-table-column-sorter"></span></div></span></th><th class="lang-column__tR-8"><span class="ant-table-header-column"><div><span class="ant-table-column-title">Language</span><span class="ant-table-column-sorter"></span></div></span></th></tr></thead><tbody class="ant-table-tbody"><tr class="ant-table-row ant-table-row-level-0" data-row-key="741080784"><td class="time-column__1guG">07/07/2022 21:58</td><td class="status-column__3SUg"><a href="/submissions/detail/741080784/" target="_blank" class="ac__35gz" data-submission-id="741080784">Accepted</a></td><td class="runtime-column__1ka_">2 ms</td><td class="memory-column__1dxp">50 MB</td><td class="lang-column__tR-8">java</td></tr></tbody></table>