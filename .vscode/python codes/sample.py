import cv2

video = cv2.VideoCapture(0)
first_frame=None
while True:
    check,frame =video.read()
    gray=cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
    gray = cv2.Gaussianblur(gray,(21,21),0)
    if first_frame is None:
        first_frame=gray
        continue
    delta_frame=cv2.absdiff(first_frame,gray)
    threshold_frame = cv2.threshold(delta_frame,50,255,cv2.THRESH_BINARY[1])
    threshold_frame=CV2.dilate(threshold_frame,None,iteration=2)

    
    

