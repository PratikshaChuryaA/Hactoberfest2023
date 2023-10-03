import pyjokes

def tell_random_joke():
    # Get a random English joke
    joke = pyjokes.get_joke(language='en', category='neutral')

    # Print the joke
    print(joke)

if __name__ == "__main__":
    tell_random_joke()
