import { useEffect, useState } from 'react'
import 'halfmoon/css/halfmoon.css'
import halfmoon from 'halfmoon/js/halfmoon-module'
import hljs from 'highlight.js/lib/common'
import 'highlight.js/styles/base16/tomorrow.css'
import axios from 'axios'
import Error from './Error'
import AppComponent from './AppComponent';

export default function App() {
	const [ modalContent, setmodalContent ] = useState("")
	const [ error, setError ] = useState("")
	useEffect(() => {
		halfmoon.onDOMContentLoaded()										// For JS Components to work correctly
	}, [])
	const showCode = (url, type) => {										// Type: true - Source Code, false - README
		axios.get(url)
		.then(response => {
			setmodalContent(window.atob(response.data.content))
			if(type) hljs.highlightElement(document.querySelector("pre"))
		})
		.catch(err => {setError(err.response)})
	}
	return (
		<div>
			{error ?
				<Error error={error} /> :
				<AppComponent error={error} modalContent={modalContent} showCode={showCode} setError={setError} />
			}
		</div>
	)
}
