# the following code will calculate the cost of sending a small parcel.
# the post office charges R5 for the first 300g and R2 for every 100g thrtrafter (round up),
# up to the max weight 

weight=int(input("enter the weight:"))
if weight <= 1000:
    if weight <=300:
        cost = 5
    else:
        cost = 5+2*round((weight-300)/100)

    print("your parcel will cost R%d. "%cost)
else:
    print("maximum weight for small parcel exceeded.")
    print("use large parcel service instesd.")