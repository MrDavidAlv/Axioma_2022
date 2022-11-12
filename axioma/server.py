from flask import Flask

from flask import render_template, request

app = Flask(__name__)

print("Conectado")


@app.route("/")
def index():
    return render_template('axioma.html')


@app.route('/left_side')
def left_side():
    return 'true'


@app.route('/right_side')
def right_side():
    return 'true'


@app.route('/up_side')
def up_side():
    return 'true'


@app.route('/down_side')
def down_side():
    return 'true'


@app.route('/stop')
def stop():
    return 'true'


if __name__ == "__main__":

    print("Start")

    app.run(host='0.0.0.0', port=5010)
