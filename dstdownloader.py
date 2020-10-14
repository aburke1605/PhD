# TO RUN: lb-dirac python dstdownloader.py [n]
# specifying n will only get the first n files from the grid

# Your list of file names here
FILES = [
'LFN:/lhcb/MC/2016/ALLSTREAMS.DST/00070793/0000/00070793_00000565_7.AllStreams.dst',
'LFN:/lhcb/MC/2016/ALLSTREAMS.DST/00070793/0000/00070793_00000003_7.AllStreams.dst'
]

if __name__ == '__main__':
	from subprocess import call
	from sys import argv

	n_files = len(FILES)
	if len(argv) > 1:
		n_files = int(argv[1])

	files = FILES[:n_files]
	for f in files:
		print('Getting file {0}.'.format(f))
		call('dirac-dms-get-file {0}'.format(f), shell=True)
	print('Done getting {0} files.'.format(n_files))
