import ReactMarkdown from 'react-markdown'
import rehypeRaw from "rehype-raw"
import { FontAwesomeIcon } from '@fortawesome/react-fontawesome'
import { faLaptopCode, faAdjust, faArrowDown } from '@fortawesome/free-solid-svg-icons'
import { HashRouter as Router, Switch, Route, NavLink } from "react-router-dom";
import halfmoon from 'halfmoon/js/halfmoon-module'
import Home from './Home'
import Categories from './Categories'
import Issues from './Issues'
import Contributers from './Contributors'

export default function AppComponent(props) {
	return (
		<Router>
			<div className="modal" id="source-code" tabIndex="-1" role="dialog">
				<div className="modal-dialog" role="document">
					<div className="modal-content w-three-quarter h-600 overflow-auto">
						<button className="close" aria-label="Close" data-dismiss="modal">
							<span aria-hidden="true">&times;</span>
						</button>
						<pre>{props.modalContent}</pre>
					</div>
				</div>
			</div>
			<div className="modal" id="readme" tabIndex="-1" role="dialog">
				<div className="modal-dialog" role="document">
					<div className="modal-content w-three-quarter h-600 overflow-auto">
						<button className="close" aria-label="Close" data-dismiss="modal">
							<span aria-hidden="true">&times;</span>
						</button>
						<ReactMarkdown rehypePlugins={[ rehypeRaw ]}>{props.modalContent}</ReactMarkdown>
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
							<Categories showCode={props.showCode} setError={props.setError} />
						</Route>
						<Route path="/issues/">
							<Issues setError={props.setError} />
						</Route>
						<Route path="/contributors/">
							<Contributers setError={props.setError} />
						</Route>
						<Route path="/">
							<Home />
						</Route>
					</Switch>
				</div>
				{/* Content wrapper end */}

				{/* Navbar fixed bottom start */}
				<nav className="navbar navbar-fixed-bottom">
					<div className="d-flex d-md-none justify-content-around w-full">
						<img className="" src="https://img.shields.io/github/contributors/skully-coder/competitiveprogramming.svg?style=flat-square" alt="Contributers" />
						<img className="" src="https://img.shields.io/github/forks/skully-coder/competitiveprogramming.svg?style=flat-square" alt="Forks" />
						<img className="" src="https://img.shields.io/github/issues/skully-coder/competitiveprogramming.svg?style=flat-square" alt="Issues" />
						<img className="" src="https://img.shields.io/github/stars/skully-coder/competitiveprogramming.svg?style=flat-square" alt="Stargazers" />
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