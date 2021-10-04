import { useEffect, useState } from "react";
import { FontAwesomeIcon } from '@fortawesome/react-fontawesome'
import { faExternalLinkAlt, faCheck, faTimes } from '@fortawesome/free-solid-svg-icons'
import axios from 'axios'

export default function Issues(props) {
	const { setError } = props
	const [ issues, setIssues ] = useState([])
	useEffect(() => {
		axios.get('https://api.github.com/repos/skully-coder/hacktoberfest-competitiveprogramming/issues')
		.then(response => {
			response.data.forEach(issue => {
				if(!('pull_request' in issue)) {
					let labels = []
					issue.labels.forEach(label => {
						labels.push(label.name)
					})
					setIssues(issues => issues.concat({
						title: issue.title,
						labels: labels,
						assigned: issue.assignee !== null,
						link: "https://github.com/skully-coder/hacktoberfest-competitiveprogramming/issues/" + issue.number,
					}))
				}
			})
		})
		.catch(err => {setError(err.response)})
	}, [setError])
	return (
		<div className="card shadow-lg">
			<div className="overflow-auto border" style={{ maxHeight: "70vh" }}>
				<table className="table table-bordered table-hover">
					<thead className="position-sticky top-0 bg-dark-lm bg-light-dm text-white-lm text-dark-dm">
						<tr>
							<th style={{ width: "70%" }}>Title</th>
							<th style={{ width: "20%" }}>Labels</th>
							<th style={{ width: "5%" }}>Assigned?</th>
							<th style={{ width: "5%" }}>Link</th>
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
	const labelColors = {
		"good first issue": "badge-primary",
		"needs-fixing": "badge-secondary",
		"help wanted": "badge-danger",
		"enhancement": "badge-success",
	}
	return (
		<tr>
			<td>{props.issue.title}</td>
			<td>{props.issue.labels.map((label , index) => <span key={index} className={"badge badge-pill m-5 " + labelColors[label]}>{label}</span>)}</td>
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
