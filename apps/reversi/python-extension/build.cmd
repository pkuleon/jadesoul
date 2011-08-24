rm -R build
setup.py build
mv build/lib.win32-2.6/reversi.pyd .
python -i test.py