class Board:
    def __init__(self):
        self.board = [' ' for _ in range(9)]

    def print_board(self):
        print(f' {self.board[0]} | {self.board[1]} | {self.board[2]} ')
        print('-----------')
        print(f' {self.board[3]} | {self.board[4]} | {self.board[5]} ')
        print('-----------')
        print(f' {self.board[6]} | {self.board[7]} | {self.board[8]} ')

    def won(self):
        # check rows
        for i in range(3):
            if self.board[i*3] == self.board[i*3+1] == self.board[i*3+2] and self.board[i*3] != ' ':
                return True
        # check columns
        for i in range(3):
            if self.board[i] == self.board[i+3] == self.board[i+6] and self.board[i] != ' ':
                return True
        # check diagonals
        if self.board[0] == self.board[4] == self.board[8] and self.board[0] != ' ':
            return True
        if self.board[2] == self.board[4] == self.board[6] and self.board[2] != ' ':
            return True
        return False

    def draw(self):
        return all(space != ' ' for space in self.board)

class Player:
    def __init__(self, name, marker):
        self.name = name
        self.marker = marker

    def move(self, board, space):
        board.board[space] = self.marker

def play_game():
    board = Board()
    player1 = Player('Player 1', 'X')
    player2 = Player('Player 2', 'O')
    current_player = player1

    while True:
        board.print_board()
        space = int(input(f'{current_player.name}, enter a space to mark (0-8): '))
        current_player.move(board, space)

        if board.won():
            print(f'{current_player.name} won!')
            break
        if board.draw():
            print('The game is a draw.')
            break

        # switch players
        if current_player == player1:
            current_player = player2
        else:
            current_player = player1

# start the game
play_game()
