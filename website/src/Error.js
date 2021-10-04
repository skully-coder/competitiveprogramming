import errorpng from './error.png'

export default function Error(props) {
	return (
	<div className="App">
			<header className="App-header">
				<img src={errorpng} className="App-error" alt="error" />
				<div>
					<h3>Oops! Something Went Wrong</h3>
					<h4 className="text-danger">Error {props.error.status}</h4>
					<code className="bg-light-lm bg-dark-light-dm p-md-5 rounded">{props.error.data.message}</code>
				</div>
			</header>
		</div>
	)
}