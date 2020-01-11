import           Data.Char

data Eval = Basic Token Token Token
          | Complex Eval Token Token
          deriving Show

data Token = Operator (Int -> Int -> Int)
           | Number Int
           | Unknown String

type Tokens = [Token]

instance Show Token where
    show (Operator _) = "Operator"
    show (Number   n) = show n
    show (Unknown  n) = show n

doEval :: Eval -> Token
doEval (Basic (Number a) (Operator f) (Number b)) = Number (f a b)
doEval (Complex eva opr nmb) = doEval (Basic (doEval eva) opr nmb)
doEval _ = Unknown ""

toBasic :: Tokens -> (Eval, Tokens)
toBasic (a : b : c : xs) = ((Basic a b c), xs)

toEval :: (Eval, Tokens) -> Eval
toEval (x, []          ) = x
toEval (x, (a : b : xs)) = toEval ((Complex x a b), xs)

evaluate :: Tokens -> Token
evaluate = doEval . toEval . toBasic

toToken :: String -> Token
toToken "+" = Operator (+)
toToken "-" = Operator (-)
toToken x   = if all isNumber x then Number (read x :: Int) else Unknown x

separate :: String -> [String] -> [String]
separate []         x  = x
separate ('+' : xs) ys = separate xs (ys ++ ["+"])
separate ('-' : xs) ys = separate xs (ys ++ ["-"])
separate xs ys = let (l, r) = break (`elem` "+-") xs in separate r (ys ++ [l])

parse :: String -> Token
parse x =
    evaluate $ map toToken $ separate (filter (`elem` "0123456789+-") x) []

main :: IO ()
main = do
    putStr "calc> "
    n <- getLine
    print $ parse ('0' : n)
    main
