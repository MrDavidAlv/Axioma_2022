import React from 'react';
import './App.css'
import { BrowserRouter as Router, Route, Switch } from "react-router-dom";
import homeIn from './view/homeIn';
import About from './view/About';
import AxiomaRC from './view/AxiomaRC';

const App = () => {
  return (
    <div className="App">
      <Router>
        {/* <Header /> */}
        <Switch>
          <Route path={"/"} exact component={homeIn} />
          <Route path={"/axiomaRC"} exact component={AxiomaRC} />
          <Route path={"/about"} exact component={About} />
        </Switch>
        {/* <Footer /> */}
      </Router>
    </div>
  )
}

export default App;
