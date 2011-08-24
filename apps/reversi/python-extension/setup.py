from distutils.core import setup, Extension

module_name = 'reversi'

setup(
	name=module_name,
	version = '1.0',
	description = 'this is the '+module_name+' package',
	ext_modules=[Extension(module_name, sources=['reversi.c'])]
)
