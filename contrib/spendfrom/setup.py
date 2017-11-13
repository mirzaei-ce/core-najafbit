from distutils.core import setup
setup(name='utbspendfrom',
      version='1.0',
      description='Command-line utility for najafbit "coin control"',
      author='Gavin Andresen',
      author_email='gavin@najafbitfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
