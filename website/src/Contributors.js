import { useEffect, useState } from "react"
import { FontAwesomeIcon } from '@fortawesome/react-fontawesome'
import { faHandsHelping } from '@fortawesome/free-solid-svg-icons'

export default function Contributers() {
	const [ contributors, setContributors ] = useState([])
	useEffect(() => {
		fetch('https://api.github.com/repos/skully-coder/competitiveprogramming/contributors').then(res => res.json())
		.then(response => {
			response.forEach(contributor => {
				setContributors(contributors => contributors.concat({
					login: contributor.login,
					avatar: contributor.avatar_url,
					url: contributor.html_url,
					contributions: contributor.contributions,
				}))
			})
		})
	}, [])
	return (
		<div className="container-fluid">
			<div className="row">
				{contributors.map((contributor, index) => <div key={index} className="col-12 col-md-3">
					<div className="card shadow-lg text-center">
						<div className="d-flex justify-content-between">
							<h5 className="font-weight-semi-bold">{contributor.login}</h5>
							<h5 className="rounded px-10 bg-success">
								{contributor.contributions} <FontAwesomeIcon icon={faHandsHelping} />
							</h5>
						</div>
						<a href={contributor.url} target="_blank" rel="noreferrer">
							<img className="rounded-circle" src={contributor.avatar} width="150" alt={contributor.login} />
						</a>
					</div>
				</div>)}
			</div>
		</div>
	)
}
