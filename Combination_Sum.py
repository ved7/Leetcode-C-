class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        res = []
        subset = []
        
        def dfs(i,total):
            # base case - 1
            if total == target:
                res.append(subset.copy())
                return 
            # base case - 2
            if i >= len(candidates) or total > target:
                return 
            
            # Condition -1 include candidates[i]
            subset.append(candidates[i])
            dfs(i,total+candidates[i])
            subset.pop()
            # Condition -2 did not include candidates[i]
            dfs(i+1,total)
            
        dfs(0,0)
        return res
        
