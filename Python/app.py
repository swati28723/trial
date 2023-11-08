from flask import Flask, render_template, request

app = Flask(__name__)

# Sample database (in-memory for simplicity)
books = []
members = []

@app.route('/')
def index():
    return render_template('index.html', books=books, members=members)

@app.route('/add_book', methods=['POST'])
def add_book():
    title = request.form['title']
    author = request.form['author']
    # Add book to the database (in-memory for simplicity)
    books.append({'title': title, 'author': author})
    return redirect('/')

@app.route('/add_member', methods=['POST'])
def add_member():
    name = request.form['name']
    # Add member to the database (in-memory for simplicity)
    members.append({'name': name})
    return redirect('/')

if __name__ == '__main__':
    app.run(debug=True)

