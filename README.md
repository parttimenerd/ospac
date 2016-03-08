## Synopsis

Ospac will take a multi-channel recording of an audio podcast conversation 
and master this to  a high-quality mix-down with support for intro and outro. 

## Examples

Mix 2 mono voice recordings with crosstalk filter, leveling and normalization:

	ospac person1.wav person2.wav --output target.wav

Mix a podcast with stereo intro and outro:

 	ospac --mix in.wav --overlap 4 \
		--voice person1.wav person2.wav --overlap 4 \
		--mix out.wav --output target.wav

## Motivation

Ospac was developed due to the need of a batch solution for audio podcast 
creation. It is a rewrite and compilation of the scripts and methods used 
for the Modellansatz podcast, http://modellansatz.de/ .

## Installation

Check that you have libsndfile and a c++-compiler on your system. Then, you
may build and install ospac in this way:

	$ make ospac && sudo make install


## API Reference

See the doxygen docs for a detailed API reference.

## Tests

You may run tests that create exemplary mixdowns and waveform images
that are used in the API documentation.

	$ make test

## License

The MIT License (MIT)

Copyright (c) 2016 Sebastian Ritterbusch <ospac@ritterbusch.de>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
