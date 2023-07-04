import json

with open("./data.json", "r") as outfile:
    data = json.load(outfile)


def modify(item):
    key, val = item
    _val = {'name': key.replace('_', ' ').title(), 'description': '', 'location': ''}
    return key, _val


modified_data = dict(map(modify, data.items()))

with open("./fixed.json", "w") as outfile:
    json.dump(modified_data, outfile, indent=2)
