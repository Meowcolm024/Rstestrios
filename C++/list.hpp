#ifndef LIST_HPP_
#define LIST_HPP_

template<class a> class Node {
    private:
    Node<a> * next;
    a val;
    public:
    Node(a v) {val = v; next = __null;};
    //add(Node<a> n) {}
};

template<class a> class List {
private:
    Node<a> n;
public:
    List(a v) {n = new Node<a>(v);}
    List(a xs[]) {

    }
};

#endif