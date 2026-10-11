import numpy as np
def convert_to_grayScale(image):
    # grayscale_image = []
    # for pixels in image:
    #     gray_matrix = []
    #     for px in pixels:
    #         for _ in px:
    #             gray = 0.299*px[0] + 0.587*px[1] + 0.114*px[2]
    #         gray_matrix.append(round(gray))
    #     grayscale_image.append(gray_matrix)
    
    # print(grayscale_image)
    # return grayscale_image

    image = np.array(image)

    #Extract RGB to grayscale
    r = image[:,:,0]
    g = image[:,:,1]
    b = image[:,:,2]
    
    grayscale = (
        0.299 * r +
        0.587*g +
        0.114*b
    )
    print(np.round(grayscale))
    return np.round(grayscale)

def thresholding(grayscaleImage , threshold = 128):
    # for pixels in grayscaleImage:
    #    for i in range(len(pixels)):
    #        if pixels[i] > 128:
    #            pixels[i] = 255
    #        else:
    #            pixels[i] = 0

    binary_image = np.where(
        grayscaleImage > threshold ,
        255 , 
        0
    )
    return binary_image
               

def main():
    image = [
        [[255,0,0] , [0,255,0]],
        [[0,0,255] , [255,255,255]]
    ]

    grayScale = convert_to_grayScale(image)
    ans = thresholding(grayScale)
    print(ans)

if __name__ == "__main__":
    main()