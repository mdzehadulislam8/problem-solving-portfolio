class MyStack {
    queue<int> st;

public:
    MyStack() {}

    void push(int x) {
        st.push(x);
        int n = st.size();
        for (int i = 1; i < n; i++) {
            st.push(st.front());
            st.pop();
        }
    }

    int pop() {
        int val = st.front();
        st.pop();
        return val;
    }

    int top() {
        return st.front();
    }

    bool empty() {
        return st.empty();
    }
};
