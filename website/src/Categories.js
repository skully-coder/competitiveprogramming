import { useEffect, useState } from "react";
import { HashRouter as Router, Switch, Route, NavLink, useLocation } from "react-router-dom";
import axios from 'axios'
import Category from "./Category";

export default function Categories(props) {
	const { setError, showCode } = props
	const location = useLocation().pathname.split("/")						// Set 'cat'(category) as currently selected
	const [ cat, setCat ] = useState(location[location.length - 1])			// category according to URL incase of refresh
	const [ categories, setCategories ] = useState([])
	useEffect(() => {
		axios.get('https://api.github.com/repos/skully-coder/competitiveprogramming/contents')
		.then(response => {
			response.data.forEach(content => {
				if(content.name !== "website" & content.name !== "Social" && !content.name.startsWith('.') && content.type === "dir") {
					setCategories(categories => categories.concat({ name: content.name, url: content.git_url }))
				}
			})
		})
		.catch(err => {setError(err.response)})
	}, [setError])
	return (
		<Router>
			<div className="row h-full">
				<div className="col-2 d-none d-md-flex flex-md-column h-full font-weight-semi-bold overflow-auto">
					{categories.map((category, index) =>
						<div className={"flex-fill text-center border" + (index%2 ? " bg-light-lm bg-dark-dm" : "")} key={index}>
							<NavLink className={"nav-link " + (cat === category.name ? "text-danger" : "")} to={"/categories/" + category.name} onClick={() => setCat(category.name)}>{category.name}</NavLink>
						</div>
					)}
				</div>
				<div className="col-12 d-md-none text-center pt-10">
					<div className="dropdown">
						<button className="btn btn-success" data-toggle="dropdown" type="button" id="dropdown-categories" aria-haspopup="true" aria-expanded="false">
							View Categories
						</button>
						<div className="dropdown-menu dropdown-menu-center" aria-labelledby="dropdown-categories">
							{categories.map((category, index) =>
								<NavLink key={index} activeClassName="active" className="nav-link" to={"/categories/" + category.name}>{category.name}</NavLink>
							)}
						</div>
					</div>
				</div>
				<Switch>
					{categories.map((category, index) =>
						<Route path={"/categories/" + category.name} key={index}>
							<Category category={category} showCode={showCode} setError={props.setError} />
						</Route>
					)}
				</Switch>
			</div>
		</Router>
	)
}
