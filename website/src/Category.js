import './App.css';
import {
    useEffect,
    useState
} from "react"
import {
    FontAwesomeIcon
} from '@fortawesome/react-fontawesome'
import {
    faExternalLinkAlt,
    faFileAlt,
    faPlus
} from '@fortawesome/free-solid-svg-icons'
import {
    faCuttlefish,
    faJava,
    faJsSquare,
    faPython
} from '@fortawesome/free-brands-svg-icons'
import axios from 'axios'

export default function Category(props) {
    const {
        category,
        setError,
        showCode
    } = props
    const [problems, setProblems] = useState([])
    useEffect(() => {
        axios.get(category.url + "?recursive=1")
            .then(response => {
                const problems = response.data.tree.reduce((accumulator, object) => {
                    if (object.type === "blob") {
                        const parts = object.path.split("/")
                        const name = (parts[1].toUpperCase() === "README.MD" ? "readme" : parts[1].split(".")[1].toLowerCase())
                        if (parts[0] in accumulator) {
                            accumulator[parts[0]][name] = object.url
                        } else {
                            accumulator[parts[0]] = {
                                [name]: object.url
                            }
                        }
                    }
                    return accumulator
                }, {})
                setProblems(problems)
            })
            .catch(err => {
                setError(err.response)
            })
    }, [category.url, setError])
    return ( < div className = "col-12 col-md-10" >
            <
            div className = "container text-center" >
            <
            h2 className = "m-5 m-md-20" > {
                category.name
            } < /h2>  <
            div className = "table-responsive overflow-auto shadow-lg mx-auto"
            style = {
                {
                    maxHeight: "65vh",
                    width: "90%"
                }
            } >
            <
            table className = "table table-bordered table-hover" >
            <
            thead className = "position-sticky top-0 bg-dark-lm bg-light-dm text-white-lm text-dark-dm" >
            <
            tr >
            <
            th > Problem < /th> <th > View Code < /th > < th > View README < /th> <th > Visit Github < /th > < /tr > < /
            thead > <
            tbody > {
                Object.entries(problems).map(([title, data], index) => < Problem key = {
                        index
                    }
                    title = {
                        title
                    }
                    data = {
                        data
                    }
                    category = {
                        category.name
                    }
                    showCode = {
                        showCode
                    }
                    />)} < /
                    tbody > <
                    /table> < /
                    div > <
                    /div> < /
                    div >
                )
            }

            function Problem(props) {
                const icons = (language) => {
                    switch (language) {
                        case "c":
                            return <FontAwesomeIcon icon = {
                                faCuttlefish
                            }
                            />
                        case "cpp":
                            return <span >
                                <
                                FontAwesomeIcon icon = {
                                    faCuttlefish
                                }
                            /> <
                            FontAwesomeIcon icon = {
                                faPlus
                            }
                            size = "xs" / >
                                <
                                FontAwesomeIcon icon = {
                                    faPlus
                                }
                            size = "xs" / >
                                <
                                /span>
                        case "java":
                            return <FontAwesomeIcon className = "font-size-22"
                            icon = {
                                faJava
                            }
                            />
                        case "py":
                            return <FontAwesomeIcon className = "font-size-18"
                            icon = {
                                faPython
                            }
                            />
                        case "js":
                            return <FontAwesomeIcon className = "font-size-18"
                            icon = {
                                faJsSquare
                            }
                            />
                        default:
                            return <span > {
                                language
                            } < /span>
                    }
                }
                return ( <
                    tr >
                    <
                    td > {
                        props.title
                    } < /td> <
                    td > {
                        Object.keys(props.data).map((value, index) => value === "readme" ? null :
                            <
                            button key = {
                                index
                            }
                            data - toggle = "modal"
                            data - target = "source-code"
                            className = "btn btn-success font-weight-semi-bold mr-5 px-10"
                            onClick = {
                                () => props.showCode(props.data[value], true)
                            } > {
                                icons(value)
                            } <
                            /button>
                        )
                    } <
                    /td> <
                    td >
                    <
                    button className = "btn btn-primary"
                    onClick = {
                        () => props.showCode(props.data.readme, false)
                    }
                    data - toggle = "modal"
                    data - target = "readme" >
                    <
                    FontAwesomeIcon icon = {
                        faFileAlt
                    }
                    /> < /
                    button > <
                    /td> <
                    td >
                    <
                    a target = "_blank"
                    rel = "noreferrer"
                    className = "btn btn-secondary"
                    href = {
                        "https://github.com/skully-coder/competitiveprogramming/tree/main/" + props.category + "/" + props.title
                    } >
                    <
                    FontAwesomeIcon icon = {
                        faExternalLinkAlt
                    }
                    /> < /
                    a > <
                    /td> < /
                    tr >
                )
            }