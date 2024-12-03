from PyQt5.QTwidgets import *
from PyQt5.QtGui import Qfont

def main():
    app = QApplication([])
    window = QWidget()
    window.setGeometry(100, 100, 200, 300)
    window.setWindowTitle("My simple graphical user interface")

    layout = QVBoxLayout()
    label = QLabel("Press the Button Below")
    textbox = QTextEdit()
    button = QPushButton("Press Me!!")
    button.clicked.connect(lambda: on_clicked(textbox.toPlainText))

    layout.addWidget(label)
    layout.addWidget(textbox)
    layout.addWidget(button)

    window.show()
    app.exec_()

def on_clicked(msg):
    messahe = QMessage