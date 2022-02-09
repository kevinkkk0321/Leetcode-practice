class Solution(object):
    def getHint(self, secret, guess):
        """
        :type secret: str
        :type guess: str
        :rtype: str
        """
        h = defaultdict(int)
        bulls = cows = 0

        for idx, s in enumerate(secret):
            g = guess[idx]
            if s == g:
                bulls += 1
            else:
                print(h[s], h[g])
                cows += int(h[s] < 0)
                cows += int(h[g] > 0)
                h[s] += 1
                h[g] -= 1

        return "{}A{}B".format(bulls, cows)

        # # two dict
        # bulls = 0
        # sh = defaultdict(int)
        # gh = defaultdict(int)
        # for s, g in zip(secret, guess):
        #     if s == g:
        #         bulls += 1
        #     else:
        #         sh[s] += 1
        #         gh[g] += 1
        # cows = sum(min(sh[k], gh[k]) for k in sh)
        # return "{}A{}B".format(bulls, cows)

#         # one dict
#         A = 0
#         B = 0
#         hashtable = dict()

#         for i in range(len(secret)):
#             if secret[i] == guess[i]:
#                 A += 1
#             else:
#                 if secret[i] not in hashtable:
#                     hashtable[secret[i]] = 1
#                 else:
#                     hashtable[secret[i]] += 1
#         for i in range(len(guess)):
#             if guess[i] in hashtable and hashtable[guess[i]] > 0 and secret[i] != guess[i]:
#                 B += 1
#                 hashtable[guess[i]] -= 1

#         return str(A) + 'A' + str(B) + 'B'


        
