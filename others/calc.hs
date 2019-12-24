-- calc
import           Data.Char

data OnlyType = PLUS | NUMBER | EOF deriving (Show, Eq)
data Token = Expr OnlyType Char deriving Show

toToken :: Char -> Token
toToken '+' = Expr PLUS '+'
toToken x   = if isDigit x then Expr NUMBER x else Expr EOF 'e'

tokenBack :: Token -> Char
tokenBack (Expr NUMBER x) = x
tokenBack (Expr PLUS   x) = x
tokenBack (Expr EOF    _) = 'e'

parse :: String -> [Token]
parse = map toToken

interpret :: [Token] -> Token
interpret []     = error "e"
interpret [_]    = error "e"
interpret [_, _] = error "e"
interpret ((Expr NUMBER x) : (Expr PLUS _) : (Expr NUMBER y) : _) =
    Expr NUMBER $ intToDigit $ (digitToInt x) + (digitToInt y)

operate :: String -> Char
operate x = tokenBack $ interpret $ parse x

main :: IO ()
main = do
    putStr "calc >> "
    wrd <- getLine
    print $ operate wrd
    main
