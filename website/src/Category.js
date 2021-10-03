import { useEffect, useState } from "react"
import { FontAwesomeIcon } from '@fortawesome/react-fontawesome'
import { faCode, faExternalLinkAlt, faFileAlt } from '@fortawesome/free-solid-svg-icons'
import axios from 'axios'

export default function Category(props) {
	const { category, setError, showCode } = props
	const [ problems, setProblems ] = useState([])
	useEffect(() => {
		axios.get('https://api.github.com/repos/skully-coder/competitiveprogramming/contents/' + category)
		.then(response => {
			setProblems(response.data)
		})
		.catch(err => {setError(err.response)})
	}, [category, setError])
	return (
		<div className="container text-center">
			<h2 className="m-10 m-md-20">{category}</h2>
			<div className="table-responsive overflow-auto shadow-lg mx-auto" style={{ maxHeight: "65vh", width: "90%" }}>
				<table className="table table-bordered table-hover">
					<thead className="position-sticky top-0 bg-dark-lm bg-light-dm text-white-lm text-dark-dm">
						<tr>
							<th>Problem</th>
							<th>View Code</th>
							<th>View README</th>
							<th>Visit Github</th>
						</tr>
					</thead>
					<tbody>
						{problems.map((problem, index) => <Problem key={index} problem={problem} category={category} showCode={showCode} />)}
					</tbody>
				</table>
			</div>
		</div>
	)
}

function Problem(props) {
	return (
		<tr>
			<td>{props.problem.name}</td>
			<td>
				<button className="btn btn-success" onClick={() => props.showCode("https://api.github.com/repos/skully-coder/competitiveprogramming/contents/" + props.category + "/" + props.problem.name, false)} data-toggle="modal" data-target="source-code">
					<FontAwesomeIcon icon={faCode} />
				</button>
			</td>
			<td>
				<button className="btn btn-primary" onClick={() => props.showCode("https://api.github.com/repos/skully-coder/competitiveprogramming/contents/" + props.category + "/" + props.problem.name, true)} data-toggle="modal" data-target="readme">
					<FontAwesomeIcon icon={faFileAlt} />
				</button>
			</td>
			<td><a target="_blank" rel="noreferrer" className="btn btn-secondary" href={"https://github.com/skully-coder/competitiveprogramming/tree/main/" + props.category + "/" + props.problem.name}><FontAwesomeIcon icon={faExternalLinkAlt} /></a></td>
		</tr>
	)
}
