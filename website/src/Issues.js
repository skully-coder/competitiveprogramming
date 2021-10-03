import { useEffect, useState } from "react";
import { FontAwesomeIcon } from '@fortawesome/react-fontawesome'
import { faTag, faExternalLinkAlt, faCheck, faTimes } from '@fortawesome/free-solid-svg-icons'
export default function Issues() {
	const [ issues, setIssues ] = useState([])
	useEffect(() => {
		fetch('https://api.github.com/repos/skully-coder/competitiveprogramming/issues').then(res => res.json())
		.then(response => {
			response.forEach(issue => {
				if(!('pull_request' in issue)) {
					let labels = []
					issue.labels.forEach(label => {
						switch(label.name) {
							case "good first issue":
								labels.push(0)
								break
							case "needs-fixing":
								labels.push(1)
								break
							case "help wanted":
								labels.push(2)
								break
							case "enhancement":
								labels.push(3)
								break
							default:
						}
					})
					setIssues(issues => issues.concat({
						title: issue.title,
						labels: labels,
						assigned: issue.assignee !== null,
						link: "https://github.com/skully-coder/competitiveprogramming/issues/" + issue.number,
					}))
				}
			})
		})
	}, [])
	return (
		<div className="card shadow-lg">
			<h4>
				<div className="row text-center">
					<div className="col-12 col-md-3 text-primary font-weight-semi-bold">
						Good First Issue <FontAwesomeIcon icon={faTag} />
					</div>
					<div className="col-12 col-md-3 text-secondary font-weight-semi-bold">
						Needs Fixing <FontAwesomeIcon icon={faTag} />
					</div>
					<div className="col-12 col-md-3 text-danger font-weight-semi-bold">
						Help Wanted <FontAwesomeIcon icon={faTag} />
					</div>
					<div className="col-12 col-md-3 text-success font-weight-semi-bold">
						Enhancement <FontAwesomeIcon icon={faTag} />
					</div>
				</div>
			</h4>
			<div className="table-responsive overflow-auto border" style={{ maxHeight: "60vh" }}>
				<table className="table table-bordered table-hover">
					<thead className="position-sticky top-0 bg-dark-lm bg-light-dm text-white-lm text-dark-dm">
						<tr>
							<th>Title</th>
							<th>Labels</th>
							<th>Assigned?</th>
							<th>Link</th>
						</tr>
					</thead>
					<tbody>
						{issues.map((issue, index) => <Issue key={index} issue={issue} />)}
					</tbody>
				</table>
			</div>
		</div>
	)
}

function Issue(props) {
	const labelColors = [ "text-primary", "text-secondary", "text-danger", "text-success" ]
	return (
		<tr>
			<td>{props.issue.title}</td>
			<td>{props.issue.labels.map((label , index) => <span key={index} className={"font-size-18 " + labelColors[label]}><FontAwesomeIcon icon={faTag} /> </span>)}</td>
			<td className="font-size-18 text-extra-letter-spacing">{props.issue.assigned ?
				<b className="text-success"><FontAwesomeIcon icon={faCheck} /></b> :
				<b className="text-danger"><FontAwesomeIcon icon={faTimes} /></b>
			}</td>
			<td><a className="btn btn-secondary" target="_blank" rel="noreferrer" href={props.issue.link}>
				<FontAwesomeIcon icon={faExternalLinkAlt} />
			</a></td>
		</tr>
	)
}
