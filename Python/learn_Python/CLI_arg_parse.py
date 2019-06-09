import argparse

parser = argparse.ArgumentParser(description='Process some integers.')
parser.add_argument('integers', metavar='N', type=int, nargs='+',
                    help='an integer for the accumulator')
parser.add_argument('--sum', dest='accumulate', action='store_const',
                    const=sum, default=max,
                    help='sum the integers (defaultly if the --sum isn\'t called): find the max)')
parser.add_argument('--connect',
                    help="Vehicle connection target string. If not specified, SITL automatically started and used.")
args = parser.parse_args()
print args.accumulate(args.integers)
connection_string=args.connect
if not connection_string:
    print "--connect option isn't provided"
else:
    print("connect option = %s"%connection_string)
