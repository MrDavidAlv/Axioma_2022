import React from 'react';
import './../assets/AxiomaRC.css'
import { Joystick } from 'react-joystick-component';
import Webcam from "react-webcam";

const AxiomaRC = () => {
    const videoConstraints = {
        width: 720,
        height: 560,
        facingMode: "user"
    };
    return (
        <div className='controlrc'>
            <div className='controlLeft'>
                <div className='botonera'>
                    <table id="tabla1">
                        <tr>
                            <td></td>
                            <td>
                                <button className='boton'>A</button>
                            </td>
                            <td></td>
                        </tr>
                        <tr>
                            <td>
                                <button className='boton'>B</button>
                            </td>
                            <td>
                                <button className='boton'>C</button>
                            </td>
                            <td>
                                <button className='boton'>D</button>
                            </td>
                        </tr>
                        <tr>
                            <td></td>
                            <td>
                                <button className='boton'>E</button>
                            </td>
                            <td></td>
                        </tr>
                    </table>
                </div>
                <div className='joystick'>
                    <Joystick minDistance={50} />
                </div>
            </div>
            <div className='camera'>
                <Webcam
                    className='Webcam'
                    audio={false}
                    // height={720}
                    screenshotFormat="image/jpeg"
                    // width={400}
                    videoConstraints={videoConstraints}
                ></Webcam>
            </div>
            <div className='controlRight'>
                <div className='botonera'>
                    <table id="tabla1">
                        <tr>
                            <td><button className='boton'>A</button></td>
                            <td>
                                <button className='boton'>A</button>
                            </td>
                            <td><button className='boton'>A</button></td>
                        </tr>
                        <tr>
                            <td>
                                <button className='boton'>A</button>
                            </td>
                            <td>
                                <button className='boton'>A</button>
                            </td>
                            <td>
                                <button className='boton'>A</button>
                            </td>
                        </tr>
                        <tr>
                            <td><button className='boton'>A</button></td>
                            <td>
                                <button className='boton'>A</button>
                            </td>
                            <td><button className='boton'>A</button></td>
                        </tr>
                    </table>
                </div>
                <div className='joystick'>
                    <Joystick minDistance={50} />
                </div>
            </div>
        </div>
    )
}

export default AxiomaRC
