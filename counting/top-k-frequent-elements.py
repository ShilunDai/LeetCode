class Solution:
    def topKFrequent(self, nums, k):
        time_dict = defaultdict(int)
        for num in nums:
            time_dict[num] += 1

        sorted_items = sorted(time_dict.items(), key=lambda x: x[1], reverse=True)

        return [item[0] for item in sorted_items[:k]]