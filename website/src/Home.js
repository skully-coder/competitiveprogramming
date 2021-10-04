export default function Home() {
	return (
		<div className="container-fluid">
			<h1 className="font-weight-semi-bold text-center text-extra-letter-spacing">Competitive Programming Solutions Compilation</h1>
			<div className="row row-eq-spacing">
				<div className="col-12 col-md-6">
					<div className="card shadow-lg text-center">
						<h4>This Website Contains all <b>Contents</b>, <b>Issues</b> of our <a target="_blank" rel="noreferrer" href="https://github.com/skully-coder/hacktoberfest-competitiveprogramming">repository</a>.</h4>
						<p style={{ fontSize: "1.5rem" }}>This repository contains <b>solutions</b> and <b>explanations</b> to various <b>competitive programming problems</b>, which are important for <b>interviews</b> and <b>online tests</b> of different companies.</p>
						<h4><u>Stargazers over time</u>:</h4>
						<img src="https://starchart.cc/skully-coder/hacktoberfest-competitiveprogramming.svg" width="100%" alt="Stargazers over time" />
					</div>
				</div>
				<div className="col-12 col-md-6 mt-20 mt-md-0">
					<div className="card shadow-lg">
						<h4 className="m-5"><u>Contribution Guidelines</u>:</h4>
						<h6>
							<ol>
								<li>Check the <b>Issues</b> page to find an issue you could possibly contribute to.</li>
								<li><b>Comment</b> on the Issue and make sure it gets <b>Assigned</b> to you.</li>
								<li><b>Fork</b> this repository in order to add its copy to your repositories.</li>
								<li><b>Clone</b> your forked repository <code className="bg-light-lm bg-dark-light-dm text-center p-5 rounded">git clone https://github.com/&lt;your-username&gt;/hacktoberfest-competitiveprogramming</code></li>
								<li>In the cloned repository, <b>Create</b> a folder with the problem name, under the <b>most suitable topic</b>.<br />
									&emsp;Eg. <code className="bg-light-lm bg-dark-light-dm text-center p-5 rounded">hacktoberfest-competitiveprogramming / <span className="text-danger">BackTracking</span> / <span className="text-primary font-weight-bold">N-Queens</span></code>
								</li>
								<li>In the new folder, please <b>create</b> the following files:
									<ol style={{ listStyleType: "lower-alpha" }}>
										<li><code className="bg-light-lm bg-dark-light-dm text-center p-5 rounded">README.md</code> describing the problem, and possibly the solution's explaination.</li>
										<li>Solution file named <code className="bg-light-lm bg-dark-light-dm text-center p-5 rounded">main.cpp</code></li>
									</ol>
								</li>
								<li>Once you are done, <b>Commit</b> and <b>Push</b> the changes.</li>
								<li>Create a <b>Pull Request</b> with appropriate title and description to be reviewed by Maintainers.</li>
							</ol>
						</h6>
					</div>
				</div>
			</div>
		</div>
	)
}
