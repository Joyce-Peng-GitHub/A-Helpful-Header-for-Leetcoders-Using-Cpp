/**
 * @name : plugin.hpp
 * @author : Joyce-Peng-GitHub
 * @version : 1.0
 * @date : 4-17-2021
 */

#ifndef PLUGIN_H_INCLUDED
#define PLUGIN_H_INCLUDED

#include <ostream>
#include <vector>

namespace lc // "lc" refers to "Leetcode"
{
    class ListNode
    {
    public:
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
    class TreeNode
    {
    public:
        int val;
        TreeNode *left, *right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };
} // Namespace lc (Leetcode)

namespace std
{
    ostream &operator<<(ostream &os, const vector<char> &arr)
    {
        if (arr.size())
        {
            os << '[';
            int i = 0;
            for (; i < arr.size() - 1; i++)
            {
                os << '\'' << arr[i] << "\', ";
            }
            os << '\'' << arr[i] << "\']";
        }
        else
        {
            os << "null";
        }
        return os;
    }
    ostream &operator<<(ostream &os, const vector<char *> &s)
    {
        if (s.size())
        {
            os << '[';
            int i = 0;
            for (; i < s.size() - 1; i++)
            {
                os << '\"' << s[i] << "\", ";
            }
            os << '\"' << s[i] << "\"]";
        }
        else
        {
            os << "null";
        }
        return os;
    }
    ostream &operator<<(ostream &os, const vector<string> &s)
    {
        if (s.size())
        {
            os << '[';
            int i = 0;
            for (; i < s.size() - 1; i++)
            {
                os << '\"' << s[i] << "\", ";
            }
            os << '\"' << s[i] << "\"]";
        }
        else
        {
            os << "null";
        }
        return os;
    }
    template <typename T>
    ostream &operator<<(ostream &os, const vector<T> &arr)
    {
        if (arr.size())
        {
            os << '[';
            for (int i = 0; i < arr.size() - 1; i++)
            {
                os << arr[i] << ", ";
            }
            os << arr.back() << ']';
        }
        else
        {
            os << "null";
        }
        return os;
    }

    ostream &operator<<(ostream &os, const lc::ListNode *head)
    {
        if (head)
        {
            for (; head; head = head->next)
            {
                os << head->val << "->";
            }
        }
        os << "null";
        return os;
    }
}

#endif
