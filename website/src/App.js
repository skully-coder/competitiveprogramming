import './App.css';
import { BrowserRouter as Router, Switch, Route, NavLink } from "react-router-dom";
import { useEffect, useState } from 'react'
import { FontAwesomeIcon } from '@fortawesome/react-fontawesome'
import { faLaptopCode, faAdjust, faArrowDown } from '@fortawesome/free-solid-svg-icons'
import 'halfmoon/css/halfmoon.css'
import halfmoon from 'halfmoon/js/halfmoon-module'
import Home from './Home'
import Categories from './Categories'
import Issues from './Issues'
import Contributers from './Contributors'
import hljs from 'highlight.js/lib/common'
import 'highlight.js/styles/base16/tomorrow.css'

export default function App() {
	const [ categories, setCategories ] = useState([])
	const [ sourceCode, setSourceCode ] = useState("")
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
	const showCode = (url) => {
		fetch(url).then(res => res.json())
		.then(response => {
			setSourceCode(window.atob(response.content))
			hljs.highlightElement(document.querySelector("pre"))
		})
	}
	return (
		<Router>
			<div className="modal" id="source-code" tabIndex="-1" role="dialog">
				<div className="modal-dialog" role="document">
					<div className="modal-content w-three-quarter h-600 overflow-auto">
						<button className="close" aria-label="Close" data-dismiss="modal">
							<span aria-hidden="true">&times;</span>
						</button>
						<pre>{sourceCode}</pre>
					</div>
				</div>
			</div>
			<div className="page-wrapper with-navbar with-navbar-fixed-bottom" data-sidebar-type="full-height">
				{/* Navbar start */}
				<nav className="navbar">
					{/* Navbar brand */}
					<NavLink to="/" className="navbar-brand" exact>
						<FontAwesomeIcon icon={faLaptopCode} />&nbsp;
						CP
					</NavLink>
					<div className="navbar-nav d-none d-md-flex font-size-18">
						<NavLink activeClassName="active" className="nav-item" to="/categories/">
							<span className="nav-link">Categories</span>
						</NavLink>
						<NavLink activeClassName="active" className="nav-item" to="/issues/">
							<span className="nav-link">Issues</span>
						</NavLink>
						<NavLink activeClassName="active" className="nav-item" to="/contributors/">
							<span className="nav-link">Contributers</span>
						</NavLink>
					</div>
					<div className="navbar-content d-md-none">
						<div className="dropdown with-arrow">
							<button className="btn" data-toggle="dropdown" type="button" id="navbar-dropdown">
								Menu <FontAwesomeIcon icon={faArrowDown} />
							</button>
							<div className="dropdown-menu dropdown-menu-left" aria-labelledby="navbar-dropdown">
								<NavLink activeClassName="active" className="nav-item" to="/categories/">
									<span className="nav-link">Categories</span>
								</NavLink>
								<NavLink activeClassName="active" className="nav-item" to="/issues/">
									<span className="nav-link">Issues</span>
								</NavLink>
								<NavLink activeClassName="active" className="nav-item" to="/contributors/">
									<span className="nav-link">Contributers</span>
								</NavLink>
							</div>
						</div>
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
							<Categories categories={categories} showCode={showCode} />
						</Route>
						<Route path="/issues/">
							<Issues />
						</Route>
						<Route path="/contributors/">
							<Contributers />
						</Route>
						<Route path="/">
							<Home />
						</Route>
					</Switch>
				</div>
				{/* Content wrapper end */}

				{/* Navbar fixed bottom start */}
				<nav className="navbar navbar-fixed-bottom">
					<div className="d-md-none">
						<img className="mr-5" src="https://img.shields.io/github/contributors/skully-coder/competitiveprogramming.svg?style=flat-square" alt="Contributers" />
						<img className="mr-5" src="https://img.shields.io/github/forks/skully-coder/competitiveprogramming.svg?style=flat-square" alt="Forks" />
						<img className="mr-5" src="https://img.shields.io/github/issues/skully-coder/competitiveprogramming.svg?style=flat-square" alt="Issues" />
						<img className="mr-5" src="https://img.shields.io/github/stars/skully-coder/competitiveprogramming.svg?style=flat-square" alt="Stargazers" />
					</div>
					<div className="d-none d-md-block">
						<img className="mx-5" src="https://img.shields.io/github/contributors/skully-coder/competitiveprogramming.svg?style=for-the-badge" alt="Contributers" />
						<img className="mx-5" src="https://img.shields.io/github/forks/skully-coder/competitiveprogramming.svg?style=for-the-badge" alt="Forks" />
						<img className="mx-5" src="https://img.shields.io/github/issues/skully-coder/competitiveprogramming.svg?style=for-the-badge" alt="Issues" />
						<img className="mx-5" src="https://img.shields.io/github/stars/skully-coder/competitiveprogramming.svg?style=for-the-badge" alt="Stargazers" />
					</div>
				</nav>
				{/* Navbar fixed bottom end */}
			</div>
		</Router>
	)
}
