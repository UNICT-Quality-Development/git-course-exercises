from somma import somma1
def test_somma()->None:
    assert somma1(3,5)==8
    assert type(somma1(3,5)) is int