import           Data.Char

data Eval = Basic Token Token Token
          | Complex Eval Token Token
          deriving Show

data Token = Operator (Int -> Int -> Int)
           | Number Int
           | Unknown Char

type Tokens = [Token]

instance Show Token where
    show (Operator _) = "Operator"
    show (Number   n) = show n
    show (Unknown  n) = show n

doEval :: Eval -> Token
doEval (Basic (Number a) (Operator f) (Number b)) = Number (f a b)
doEval (Complex eva opr nmb) = doEval (Basic (doEval eva) opr nmb)
doEval _ = Unknown ' '

toBasic :: Tokens -> (Eval, Tokens)
toBasic (a : b : c : xs) = ((Basic a b c), xs)

toEval :: (Eval, Tokens) -> Eval
toEval (x, []          ) = x
toEval (x, (a : b : xs)) = toEval ((Complex x a b), xs)

evaluate :: Tokens -> Token
evaluate = doEval . toEval . toBasic

toToken :: Char -> Token
toToken '+' = Operator (+)
toToken '-' = Operator (-)
toToken x   = if isNumber x then Number (digitToInt x) else Unknown x

toTokens :: String -> Tokens
toTokens x = map toToken (filter (/= ' ') x)

isOperator :: Token -> Bool
isOperator (Operator _) = True
isOperator _            = False

separate :: Tokens -> [Tokens] -> [Tokens]
separate [] x = x
separate (op@(Operator _) : xs) ys = separate xs (ys ++ [[op]])
separate xs ys = let (l, r) = break isOperator xs in separate r (ys ++ [l])

mergeNum :: Tokens -> Tokens
mergeNum []              = []
mergeNum op@[Operator _] = op
mergeNum xs              = [Number (read (concatMap show xs) :: Int)]

parse :: String -> Token
parse x = evaluate $ concatMap mergeNum (separate (toTokens x) [])

main :: IO ()
main = do
    putStr "calc> "
    n <- getLine
    print $ parse ('0' : n)
    main
