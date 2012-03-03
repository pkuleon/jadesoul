
This library contains a parser and classes for SGF, the Smart Game Format. SGF
is a text only, tree based file format designed to store game records of board
games for two players, most commonly for the game of go. (See the official SGF
specification at [[http://www.POBoxes.com/sgf/]]).

Given a string containing a complete SGF data instance, the 'SGFParser' class
will create a 'Collection' object consisting of one or more 'GameTree''s (one
'GameTree' per game in the SGF file), each containing a sequence of 'Node''s and

(potentially) two or more variation 'GameTree''s (branches). Each 'Node'
contains an ordered dictionary of 'Property' ID/value pairs (note that values
are lists, and can have multiple entries).

Tree traversal methods are provided through the 'Cursor' class.

The default representation (using 'str()' or 'print') of each class of SGF
objects is the Smart Game Format itself.
