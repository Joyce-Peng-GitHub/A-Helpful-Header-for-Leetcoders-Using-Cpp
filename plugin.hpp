/**
 * @file plugin.hpp
 * @version 1.1
 * @date 4.25.2021 19:58
 * @author Joyce-Peng-GitHub
 */

#ifndef PLUGIN_H_INCLUDED
#define PLUGIN_H_INCLUDED

#include <ostream>
#include <vector>

/**
 * @brief Some frequently-used class in Leetcode
 * @details Namespace "lc" as "leetcode"
 * 
 * @since @version 1.0
 */
namespace lc
{
    /**
     * @brief ListNode in Leetcode
     * @details
     */
    class ListNode
    {
    public:
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
    /**
     * @brief TreeNode in Leetcode
     * @details
     */
    class TreeNode
    {
    public:
        int val;
        TreeNode *left, *right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };
} // namespace lc

namespace std
{
    ostream &operator<<(ostream &os, const vector<char> &arr)
    {
        /**
         * @param os The target output stream
         * @param arr The vector array to output
         * 
         * @todo Output the elements of @c arr one by one,
         *       with  a ", " between each 2 characters.
         * 
         * @return @c os
         */
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
        /**
         * @param os The target output stream
         * @param s The strings to output
         * 
         * @todo Output the strings of @c s one by one,
         *       with a " \" " on each side of every string
         *       and a ", " between each 2 strings
         * 
         * @return @c os
         */
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
        /**
         * @param os The target output stream
         * @param s The strings to output
         * 
         * @todo Output the strings in @c s one by one,
         *       with a " \" " on each side of every string
         *       and a ", " between each 2 strings
         * 
         * @return @c os
         */
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

    ostream &operator<<(ostream &os, const lc::ListNode *head)
    {
        /**
         * @param os The target output stream
         * @param s The list to output
         * 
         * @todo Output the nodes in @c head one by one,
         *       with a "->" between each 2 nodes
         * 
         * @return @c os
         */
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

    template <typename T>
    const vector<T> operator+(const vector<T> &a, const vector<T> &b)
    {
        /**
         * @todo link @c a and @c b
         * 
         * @return return the result with a const vector
         */
        vector<T> ret = vector<T>(a.size() + b.size());
        int i = 0;
        for (; i < a.size(); i++)
        {
            ret[i] = a[i];
        }
        for (; i < a.size() + b.size(); i++)
        {
            ret[i] = b[i - a.size()];
        }
        return ret;
    }
}

#endif