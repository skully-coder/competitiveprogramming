import { useEffect, useState } from "react"
import { FontAwesomeIcon } from '@fortawesome/react-fontawesome'
import { faCode, faExternalLinkAlt } from '@fortawesome/free-solid-svg-icons'

export default function Category(props) {
	const [ problems, setProblems ] = useState([])
	useEffect(() => {
		fetch('https://api.github.com/repos/skully-coder/competitiveprogramming/contents/' + props.category).then(res => res.json())
		.then(response => {
			setProblems(response)
		})
	}, [props.category])
	return (
		<div className="container text-center">
			<h2 className="m-10 m-md-20">{props.category}</h2>
			<div className="table-responsive overflow-auto shadow-lg mx-auto" style={{ maxHeight: "65vh", width: "90%" }}>
				<table className="table table-bordered table-hover">
					<thead className="position-sticky top-0 bg-dark-lm bg-light-dm text-white-lm text-dark-dm">
						<tr>
							<th>Problem</th>
							<th>View Code</th>
							<th>Visit Github</th>
						</tr>
					</thead>
					<tbody>
						{problems.map((problem, index) => <Problem key={index} problem={problem} category={props.category} setUrl={props.setUrl} />)}
					</tbody>
				</table>
			</div>
		</div>
	)
}

function Problem(props) {
	const handleClick = () => {
		props.setUrl("https://cdn.rawgit.com/skully-coder/competitiveprogramming/main/" + props.category + "/" + props.problem.name + "/main.cpp")
	}
	return (
		<tr>
			<td>{props.problem.name}</td>
			<td>
				<button className="btn btn-primary" onClick={handleClick} data-toggle="modal" data-target="source-code">
					<FontAwesomeIcon icon={faCode} />
				</button>
				</td>
			<td><a target="_blank" rel="noreferrer" className="btn btn-secondary" href={"https://github.com/skully-coder/competitiveprogramming/blob/main/" + props.category + "/" + props.problem.name + "/main.cpp"}><FontAwesomeIcon icon={faExternalLinkAlt} /></a></td>
		</tr>
	)
}
