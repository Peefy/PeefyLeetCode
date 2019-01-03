class Solution:
    def numUniqueEmails(self, emails):
        """
        :type emails: List[str]
        :rtype: int
        """
        email_set = set()
        for email in emails:
            name, domain = email.split('@')
            name = name[:name.find('+')].replace('.', '')
            email_set.add(name + '@' + domain)
        return len(email_set)


if __name__ == '__main__':
    solution = Solution()
    print(
        solution.numUniqueEmails([
            "test.email+alex@leetcode.com",
            "test.e.mail+bob.cathy@leetcode.com",
            "testemail+david@lee.tcode.com"
        ]))
else:
    pass
