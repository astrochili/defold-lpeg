![LPeg for Defold](https://user-images.githubusercontent.com/4752473/85421686-6481f780-b57d-11ea-839b-fdb4634e7ff8.jpg)

# LPeg for Defold
LPeg extension for the Defold game engine. [LPeg](http://www.inf.puc-rio.br/~roberto/lpeg/) is a pattern-matching library by [Roberto Ierusalimschy](http://www.inf.puc-rio.br/~roberto/) for Lua.

The extension includes source code of LPeg 1.0.2 (MIT Licence).

## Installation

Add the link to the latest [release zip-archive](https://github.com/astrochili/defold-lpeg/releases) as a [library dependency](http://www.defold.com/manuals/libraries/) in the Defold project configuration.

## Usage

All operations are accessible through the global variable ```lpeg```.

```lua
local P = lpeg.P 

local pattern = P'a' * P'b' ^ 0
local result = lpeg.match(pattern, 'abbc')

print(result) --> 4
```