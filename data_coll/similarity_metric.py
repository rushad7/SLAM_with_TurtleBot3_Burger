from skimage.measure import compare_ssim as ssim
import numpy as np
import argparse
import cv2
import os

ap = argparse.ArgumentParser()
ap.add_argument("-d", "--dir", required=True,
	help="directory to images")
args = vars(ap.parse_args())

os.chdir(args["dir"])
map_list = os.listdir(os.getcwd())

def similarity_score(imageA, imageB, name):

	def mse(imageA, imageB):
		error = np.sum((imageA.astype("float") - imageB.astype("float"))**2)
		error /= float(imageA.shape[0]*imageA.shape[1])
		return error

	m = mse(imageA, imageB)
	s = ssim(imageA, imageB, multichannel=True)

	print(str(name) + "MSE: %.2f, SSIM: %.2f" % (m, s))

map_frontier_elem = map_list[0]
map_gmapping_elem = map_list[1]
map_karto_elem = map_list[2]

map_frontier = cv2.imread(map_frontier_elem)
map_gmapping = cv2.imread(map_gmapping_elem)
map_karto = cv2.imread(map_karto_elem)

map_frontier = cv2.resize(map_frontier, dsize=(197, 578), interpolation=cv2.INTER_CUBIC)
map_gmapping = cv2.resize(map_gmapping, dsize=(197, 578), interpolation=cv2.INTER_CUBIC)
map_karto = cv2.resize(map_karto, dsize=(197, 578), interpolation=cv2.INTER_CUBIC)

similarity_score(map_gmapping, map_frontier, "FOR GMAPPING VS FRONTIER : ")
similarity_score(map_gmapping, map_karto, "FOR GMAPPING VS KARTO : ")
similarity_score(map_karto, map_frontier, "FOR KARO VS FRONTIER : ")
























