import React from 'react';
import './App.css'; // Import your CSS file for styling

function App() {
  return (
    <div className="App">
      <header className="App-header">
        <p>Live Video Stream</p> {/* Word "Live Video Stream" included */}
        <div className="button-container"> {/* Container for the button */}
          <a href="http://localhost:8000/client" className="custom-button"> {/* Styled button */}
            Access Video
          </a>
        </div>
      </header>
    </div>
  );
}

export default App;
