<h2>842. Split Array into Fibonacci Sequence</h2><h3>Medium</h3><hr><div><p>Given a string <code>num</code>&nbsp;of digits, such as <code>num = "123456579"</code>, we can split it into a <em>Fibonacci-like sequence</em>&nbsp;<code>[123, 456, 579].</code></p>

<p>Formally, a Fibonacci-like sequence is a list&nbsp;<code>F</code> of non-negative integers such that:</p>

<ul>
	<li><code>0 &lt;= F[i] &lt;= 2^31 - 1</code>, (that is,&nbsp;each integer fits a 32-bit signed integer type);</li>
	<li><code>F.length &gt;= 3</code>;</li>
	<li>and<code> F[i] + F[i+1] = F[i+2] </code>for all <code>0 &lt;= i &lt; F.length - 2</code>.</li>
</ul>

<p>Also, note that when splitting the string into pieces, each piece must not have extra leading zeroes, except if the piece is the number 0 itself.</p>

<p>Return any Fibonacci-like sequence split from <code>num</code>, or return <code>[]</code> if it cannot be done.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input: </strong>num = "123456579"
<strong>Output: </strong>[123,456,579]
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input: </strong>num = "11235813"
<strong>Output: </strong>[1,1,2,3,5,8,13]
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input: </strong>num = "112358130"
<strong>Output: </strong>[]
<strong>Explanation: </strong>The task is impossible.
</pre>

<p><strong>Example 4:</strong></p>

<pre><strong>Input: </strong>num = "0123"
<strong>Output: </strong>[]
<strong>Explanation: </strong>Leading zeroes are not allowed, so "01", "2", "3" is not valid.
</pre>

<p><strong>Example 5:</strong></p>

<pre><strong>Input: </strong>num = "1101111"
<strong>Output: </strong>[110, 1, 111]
<strong>Explanation: </strong>The output [11, 0, 11, 11] would also be accepted.
</pre>

<p><strong>Note: </strong></p>

<ol>
	<li><code>1 &lt;= num.length&nbsp;&lt;= 200</code></li>
	<li><code>num</code> contains only digits.</li>
</ol>
</div>