import React from 'react'
import Webcam from "react-webcam";


const homeIn = () => {

    const videoConstraints = {
        width: 720,
        height: 560,
        facingMode: "user"
    };

    return (
        <>

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

        </>
    )
}

export default homeIn
