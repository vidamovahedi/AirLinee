///*
// * OrderedLinkList.h
// *
// *  Created on: Nov 21, 2017
// *      Author: Vida
// */
//
//
//#ifndef ORDEREDLINKLIST_H_
//#define ORDEREDLINKLIST_H_
//
//
//#include<stdio.h>
//#include<conio.h>
//#include <string>
//#include<iostream>
//using namespace std;
//
////Defining node struct
//struct node{
//    int data;
//    node *next;
//}*prev = NULL, *head = NULL, *q = NULL, *next = NULL;
//
//
//int count = 0;
//
//
//void createNode(int value)
//{
//    next = new node;
//    next->data = value;
//    next->next = NULL;
//    if (count == 0)
//    {
//        head = next;
//        prev = head;
//        prev->next = head;
//        count++;
//    }
//    else if (count == 1)
//    {
//        prev = head;
//        q = prev;
//        if (next->data < prev->data)
//        {
//            next->next = prev;
//            head = next;
//            prev->next = next;
//        }
//        else if (next->data > prev->data)
//        {
//            prev->next = next;
//            next->next = head;
//        }
//        count++;
//    }
//    else
//    {
//        prev = head;
//        q = prev;
//        if (next->data < prev->data)
//        {
//            next->next = prev;
//            head = next;
//            do
//            {
//                prev = prev->next;
//            }
//            while (prev->next != q);
//            prev->next=head;
//        }
//        else if (next->data > prev->data)
//        {
//            while (prev->next !=head && q->data < next->data)
//            {
//                q = prev;
//                prev = prev->next;
//                if (prev->next == head  && (prev->data < next->data))
//                {
//                    prev->next = next;
//                    next->next = head;
//                }
//                else if (next->data < prev->data)
//                {
//                    q->next = next;
//                    next->next = prev;
//                    break;
//                }
//            }
//        }
//    }
//}
//
////Traversing list
//void traverse(int i)
//{
//    node *t = head;
//    int count = 0;
//    while (count <= i)
//    {
//        cout<<t->data<<"\t";
//        t = t->next;
//        count++;
//    }
//}
//
//
//
//#endif /* ORDEREDLINKLIST_H_ */
//
//


#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

//Defining node struct
struct node
{
    int data;
    node *next;
}*prev = NULL, *head = NULL, *q = NULL, *next = NULL;


int count = 0;


void createNode(int value)
{
    next = new node;
    next->data = value;
    next->next = NULL;
    if (count == 0)
    {
        head = next;
        prev = head;
        prev->next = head;
        count++;
    }
    else if (count == 1)
    {
        prev = head;
        q = prev;
        if (next->data < prev->data)
        {
            next->next = prev;
            head = next;
            prev->next = next;
        }
        else if (next->data > prev->data)
        {
            prev->next = next;
            next->next = head;
        }
        count++;
    }
    else
    {
        prev = head;
        q = prev;
        if (next->data < prev->data)
        {
            next->next = prev;
            head = next;
            do
            {
                prev = prev->next;
            }
            while (prev->next != q);
            prev->next=head;
        }
        else if (next->data > prev->data)
        {
            while (prev->next !=head && q->data < next->data)
            {
                q = prev;
                prev = prev->next;
                if (prev->next == head  && (prev->data < next->data))
                {
                    prev->next = next;
                    next->next = head;
                }
                else if (next->data < prev->data)
                {
                    q->next = next;
                    next->next = prev;
                    break;
                }
            }
        }
    }
}

//Traversing list
void traverse(int i)
{
    node *t = head;
    int count = 0;
    while (count <= i)
    {
        cout<<t->data<<"\t";
        t = t->next;
        count++;
    }
}
