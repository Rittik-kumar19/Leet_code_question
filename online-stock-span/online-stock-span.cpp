class StockSpanner {
    stack<pair<int, int>> st; // [price, days]

    public:
        StockSpanner() {}

        int next(int price) {
            int days = 1;
            while(st.size() && price >= st.top().first)
            {
                days += st.top().second;
                st.pop();
            }
            st.push({price, days});
            return days;
        }
};