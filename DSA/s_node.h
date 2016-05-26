#ifndef SL_NODE_H
#define SL_NODE_H

// Singly linked node
template <class T>
class s_node
{
private:
    T m_data;
    s_node<T> *m_next;

public:
    s_node(const T &data)
    {
        m_data = data;
        m_next = nullptr;
    }

    s_node(const T &data, s_node<T> *&next)
    {
        m_data = data;
        m_next = next;
    }

    virtual T data() const
    {
        return m_data;
    }

    virtual void set_data(const T &data)
    {
        m_data = data;
    }

    virtual s_node<T> *&next()
    {
        return m_next;
    }

    virtual void set_next(s_node<T> *&next)
    {
        m_next = next;
    }
};

#endif