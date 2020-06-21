#!/usr/bin/env python
# -*- coding: utf-8 -*-
from PyPDF2 import PdfFileWriter, PdfFileReader
from reportlab.lib.colors import HexColor 
from reportlab.lib.pagesizes import letter
from reportlab.pdfbase import pdfmetrics
from reportlab.pdfbase.ttfonts import TTFont
from reportlab.pdfgen import canvas
import io
import os
import pyarabic.araby as araby
import reportlab
import arabic_reshaper
from bidi.algorithm import get_display
from reportlab.pdfbase import pdfmetrics
from reportlab.pdfbase.ttfonts import TTFont
BASE_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
for i in range(86):
    packet = io.BytesIO()
    # create a new PDF with Reportlab
    can = canvas.Canvas(packet, pagesize=letter)
    text = raw_input().decode('utf-8')
    #reportlab.rl_config.TTFSearchPath.append(str(settings.BASE_DIR))
    pdfmetrics.registerFont(TTFont('fuck', '/home/mrgafs/.fonts/DTHULUTH-II-1.ttf'))
    can.setFont("fuck", 55)
    can.setFillColor(HexColor(0x862DAC))
    ar = arabic_reshaper.reshape(text)
    ar = get_display(ar)
    can.drawString(240, 356, ar.encode('utf-8'))
    can.save()
    #move to the beginning of the StringIO buffer
    packet.seek(0)
    new_pdf = PdfFileReader(packet)
    # read your existing PDF
    existing_pdf = PdfFileReader(open(
        "/home/mrgafs/Desktop/Certificates/automate-the-boring-stuff-with-python-2015-.pdf", "rb"))
    output = PdfFileWriter()
    # add the "watermark" (which is the new pdf) on the existing page
    page = existing_pdf.getPage(0)
    page.mergePage(new_pdf.getPage(0))
    output.addPage(page)
    # finally, write "output" to a real file
    outputStream = open(text+".pdf", "wb")
    output.write(outputStream)
    outputStream.close()
