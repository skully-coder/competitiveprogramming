import './App.css';
import { BrowserRouter as Router, Switch, Route, NavLink } from "react-router-dom";
import { useEffect, useState } from 'react'
import { FontAwesomeIcon } from '@fortawesome/react-fontawesome'
import { faLaptopCode, faAdjust } from '@fortawesome/free-solid-svg-icons'
import 'halfmoon/css/halfmoon.css'
import halfmoon from 'halfmoon/js/halfmoon-module'
import Home from './Home';
import Categories from './Categories';

export default function App() {
	const [ categories, setCategories ] = useState([])
	const [ url, setUrl ] = useState("")
	useEffect(() => {
		halfmoon.onDOMContentLoaded()										// For JS Components to work correctly
		fetch('https://api.github.com/repos/skully-coder/competitiveprogramming/contents').then(res => res.json())
		.then(response => {
			response.forEach(content => {
				if(!content.name.startsWith('.') && content.type === "dir") {
					setCategories(categories => categories.concat(content.name))
				}
			})
		})
	}, [])
	return (
		<Router>
			<div className="modal modal-full" id="source-code" tabIndex="-1" role="dialog">
				<div className="modal-dialog" role="document">
					<div className="modal-content" style={{ background: "transparent" }}>
						<button className="close" aria-label="Close" data-dismiss="modal">
							<span aria-hidden="true">&times;</span>
						</button>
						{<iframe className='w-three-quarter h-three-quarter' title={url.split('/')[7]} src={url}></iframe>}
					</div>
				</div>
			</div>
			<div className="page-wrapper with-navbar with-navbar-fixed-bottom" data-sidebar-type="full-height">
				{/* Sticky alerts (toasts), empty container */}
				<div className="sticky-alerts"></div>

				{/* Navbar start */}
				<nav className="navbar">
					{/* Navbar brand */}
					<NavLink to="/" className="navbar-brand" exact>
						<FontAwesomeIcon icon={faLaptopCode} />&nbsp;
						CP
					</NavLink>
					<div className="navbar-nav">
						<NavLink activeClassName="active" className="nav-link" to="/categories/">Categories</NavLink>
					</div>
					<div className="navbar-content ml-auto">
						<button className="btn btn-action" type="button" onClick={halfmoon.toggleDarkMode.bind(halfmoon)}>
							<FontAwesomeIcon icon={faAdjust} />
						</button>
					</div>
				</nav>
				{/* Navbar end */}

				{/* Content wrapper start */}
				<div className="content-wrapper">
					<Switch>
						<Route path="/categories/">
							<Categories categories={categories} setUrl={setUrl} />
						</Route>
						<Route path="/">
							<Home />
						</Route>
					</Switch>
				</div>
				{/* Content wrapper end */}

				{/* Navbar fixed bottom start */}
				<nav className="navbar navbar-fixed-bottom">
				</nav>
				{/* Navbar fixed bottom end */}
			</div>
		</Router>
	)
}
