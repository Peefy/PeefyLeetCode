
class Solution:
    def simplifyPath(self, path: str) -> str:
        paths = path.split('/')
        stack = []
        for i in range(len(paths)):
            if paths[i] == '':
                continue
            if paths[i] == '.':
                pass
            elif paths[i] == '..':
                if (len(stack) > 0):
                    stack.pop()
            else:
                stack.append(paths[i])
        return '/' + '/'.join(stack)


if __name__ == "__main__":
    solution = Solution()
    print(solution.simplifyPath("/home/"))
    print(solution.simplifyPath("/home//foo/"))
    print(solution.simplifyPath("/a/./b/../../c/"))
    print(solution.simplifyPath("/../"))
    print(solution.simplifyPath("/a/../../b/../c//.//"))
    print(solution.simplifyPath("/a//b////c/d//././/.."))
   