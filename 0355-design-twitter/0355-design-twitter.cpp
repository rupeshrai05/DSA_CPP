class Twitter {
private:
    int time;
    unordered_map<int, unordered_set<int>> followMap;
    unordered_map<int, vector<pair<int,int>>> tweetMap;

public:
    Twitter() {
        time = 0;
    }

    void postTweet(int userId, int tweetId) {
        tweetMap[userId].push_back({time++, tweetId});
    }

    vector<int> getNewsFeed(int userId) {
        priority_queue<pair<int,int>> pq;

        // user follows himself
        followMap[userId].insert(userId);

        // push all tweets of user and followees
        for (int followee : followMap[userId]) {
            for (auto &t : tweetMap[followee]) {
                pq.push(t); // (time, tweetId)
            }
        }

        vector<int> feed;
        int count = 0;
        while (!pq.empty() && count < 10) {
            feed.push_back(pq.top().second);
            pq.pop();
            count++;
        }

        return feed;
    }

    void follow(int followerId, int followeeId) {
        if (followerId != followeeId)
            followMap[followerId].insert(followeeId);
    }

    void unfollow(int followerId, int followeeId) {
        if (followMap[followerId].count(followeeId))
            followMap[followerId].erase(followeeId);
    }
};