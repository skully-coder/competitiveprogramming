import { BrowserRouter as Router, Switch, Route, NavLink } from "react-router-dom";
import Category from "./Category";

export default function Categories(props) {
	return (
		<Router>
			<div className="row h-md-full">
				<div className="col-2 d-none d-md-flex flex-md-column h-md-full">
					{props.categories.map((category, index) =>
						<div className={"flex-fill text-center border" + (index%2 ? " bg-light-lm bg-dark-dm" : "")} key={index}>
							<NavLink activeClassName="active" className="nav-link" to={"/categories/" + category}>{category}</NavLink>
						</div>
					)}
				</div>
				<div className="col-12 d-md-none text-center py-10">
					<div className="dropdown">
						<button className="btn" data-toggle="dropdown" type="button" id="dropdown-categories" aria-haspopup="true" aria-expanded="false">
							View Categories
						</button>
						<div className="dropdown-menu dropdown-menu-center" aria-labelledby="dropdown-categories">
							{props.categories.map((category, index) =>
								<NavLink key={index} activeClassName="active" className="nav-link" to={"/categories/" + category}>{category}</NavLink>
							)}
						</div>
					</div>
				</div>
				<Switch className="col-12 col-md-10">
					{props.categories.map((category, index) =>
						<Route path={"/categories/" + category} key={index}>
							<Category category={category} setUrl={props.setUrl} />
						</Route>
					)}
				</Switch>
			</div>
		</Router>
	)
}
