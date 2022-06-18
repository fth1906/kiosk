# -*- coding: utf-8 -*-
"""
Created on Sat Jun 18 10:30:53 2022

@author: fsm14
"""

from PyQt5.QtWidgets import QApplication, QWidget
from PyQt5.QtCore    import QSize
from PyQt5.QtWidgets import QLabel
import sys

class App(QWidget):
    def __init__(self):
        super().__init__()
        self.title = 'Nehir V1'
        self.left = 0
        self.top = 0
        self.width = 1280  #Boyut ayarlanması
        self.height = 1024
        self.initUI()
        
    def initUI(self):
        self.setWindowTitle(self.title)
        self.setGeometry(self.left, self.top, self.width, self.height)
        self.setFixedSize(QSize(self.width,self.height))
        self.show()

if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = App()
    sys.exit(app.exec_())