#pragma once
//#include <iostream>
//#include <queue>


namespace ExaminationSystem {
    using namespace System;
public ref class Node {
	public:
		int roll_no;
		String^ first_name;
		String^ last_name;
		String^ room_no;
		String^ timing;
		String^ depart;
		String^ year;

		int height;

		Node^ left;
		Node^ right;

};
public ref class trees {
	private:

	public:
		Node^ root;
		trees() {
			root = nullptr;
		}
		Node^ createNode(int roll_no, String^ first_name, String^ last_name,
			String^ room_no, String^ timing, String^ depart, String^ year) {
            Node^ node = gcnew Node();
			node->roll_no	 = roll_no;
			node->first_name = first_name;
			node->last_name  = last_name;
			node->room_no	 = room_no;
			node->timing	 = timing;
			node->depart	 = depart;
			node->year		 = year;
			node->left		 = node->right = nullptr;

			return node;
		}
		int calheight(Node^ current){

            if(current->left && current->right){
            if (current->left->height < current->right->height)
                return current->right->height + 1;
            else return  current->left->height + 1;
            }
            else if(current->left && current->right == nullptr){
               return current->left->height + 1;
            }
            else if(current->left ==nullptr && current->right){
               return current->right->height + 1;
            }
            return 0;

    }

    int bf(Node^ n){
            if(n->left && n->right){
                return n->left->height - n->right->height; 
            }
            else if(n->left && n->right == nullptr){
                return n->left->height; 
            }
            else if(n->left== nullptr && n->right ){
                return -n->right->height;
            }
            return 0;
    }

   Node^ LL_rotation(Node^n){
       Node^ p;
       Node^ tp;
        p = n;
        tp = p->left;

        p->left = tp->right;
        tp->right = p;

        return tp; 
    }


   Node^ RR_rotation(Node^n){
       Node^p;
       Node^tp;
        p = n;
        tp = p->right;

        p->right = tp->left;
        tp->left = p;

        return tp; 
    }


   Node^ RL_rotation(Node^n){
       Node^p;
       Node^tp;
       Node^tp2;
        p = n;
        tp = p->right;
        tp2 =p->right->left;

        p -> right = tp2->left;
        tp ->left = tp2->right;
        tp2 ->left = p;
        tp2->right = tp; 
        
        return tp2; 
    }

   Node^ LR_rotation(Node^n){
       Node^p;
       Node^tp;
       Node^tp2;
        p = n;
        tp = p->left;
        tp2 =p->left->right;

        p -> left = tp2->right;
        tp ->right = tp2->left;
        tp2 ->right = p;
        tp2->left = tp; 
        
        return tp2; 
    }
   Node^ FindNode(Node^ Root,int roll, String^ dep) {
       if (Root == nullptr) return nullptr;
       if (Root->roll_no == roll && Root->depart == dep) return Root;

       else if (roll < Root->roll_no) return FindNode(Root->left, roll, dep);
       else return FindNode(Root->right, roll, dep);

   }

    Node^  insert(Node^ Root,int roll_no, String^ first_name, String^ last_name,
        String^ room_no, String^ timing, String^ depart, String^ year){
        if(Root ==nullptr){
           
            Root = createNode(roll_no, first_name, last_name, room_no, timing, depart, year);
            Root->height = 1;
            return Root;
        }
        else{
            if (roll_no  < Root->roll_no)
                Root->left = insert(Root->left, roll_no, first_name, last_name, room_no, timing, depart, year);
            else
                Root->right = insert(Root->right, roll_no, first_name, last_name, room_no, timing, depart, year);
        }

        Root->height = calheight(Root);

        if(bf(Root)==2 && bf(Root->left)==1){
            Root = LL_rotation(Root);
        }
        else if(bf(Root)==-2 && bf(Root->right)==-1){
            Root = RR_rotation(Root);
        }
        else if(bf(Root)==-2 && bf(Root->right)==1){
            Root = RL_rotation(Root);
        }
        else if(bf(Root)==2 && bf(Root->left)==-1){
            Root = LR_rotation(Root);
        }        

        return Root;

        }
    Node^ upDate(Node^ Root) {
       

        Root->height = calheight(Root);

        if (bf(Root) == 2 && bf(Root->left) == 1) {
            Root = LL_rotation(Root);
        }
        else if (bf(Root) == -2 && bf(Root->right) == -1) {
            Root = RR_rotation(Root);
        }
        else if (bf(Root) == -2 && bf(Root->right) == 1) {
            Root = RL_rotation(Root);
        }
        else if (bf(Root) == 2 && bf(Root->left) == -1) {
            Root = LR_rotation(Root);
        }

        return Root;

    }


 
   Node^ deleteNode(Node^p, Node^ node){

        if(p->left == nullptr && p->right == nullptr){
                if(p==this->root )
                    this->root = nullptr;
            delete p;
            return nullptr;
        }

      // Node^ t;
       Node^ q;
        if(p->roll_no < node->roll_no){
            p->right = deleteNode(p->right, node);
        }
        else if(p->roll_no > node->roll_no){
            p->left = deleteNode(p->left, node);
       }
       else{
           if(p->left != nullptr){
               q = inpre(p->left);
               p->roll_no = q->roll_no;
               p->first_name = q->first_name;
                p->last_name = q->last_name;
               p->room_no = q->room_no;
               p->timing = q->timing;
               p->depart = q->depart;
               p->year = q->year;
              
                p->left=deleteNode(p->left, q);
            }
           else{
               q = insuc(p->right);
               p->roll_no = q->roll_no;
               p->first_name = q->first_name;
               p->last_name = q->last_name;
               p->room_no = q->room_no;
               p->timing = q->timing;
                p->depart = q->depart;
               p->year = q->year;
                p->right = deleteNode(p->right,q);
           }
        }

        if(bf(p)==2 && bf(p->left)==1){ p = LL_rotation(p); }                  
        else if(bf(p)==2 && bf(p->left)==-1){ p = LR_rotation(p); }
        else if(bf(p)==2 && bf(p->left)==0){ p = LL_rotation(p); }
        else if(bf(p)==-2 && bf(p->right)==-1){ p = RR_rotation(p); }
       else if(bf(p)==-2 && bf(p->right)==1){ p = RL_rotation(p); }
       else if(bf(p)==-2 && bf(p->right)==0){ p = LL_rotation(p); }

       
       return p;
    }

     Node^  inpre(Node^  p){
        while(p->right!=nullptr)
            p = p->right;
        return p;    
    }

    Node^  insuc(Node^  p){
        while(p->left!=nullptr)
            p = p->left;

        return p;    
    }
    public: bool isPresent(Node^ Root, int roll ,String^ dep) {
        if (Root == nullptr) return false;
        if (Root->roll_no == roll && Root->depart == dep) return true;

        else if (roll < Root->roll_no) return isPresent(Root->left, roll , dep);
        else return isPresent(Root->right, roll, dep);
    }
	};
    private ref class nodeQue {
    public:
        Node^ node;
        nodeQue^ next;
    };
    public ref class Queue {
    private:
        int size;
        nodeQue^ front;
        nodeQue^ rear;
    public:
        Queue() {
            size = 0;
            front = nullptr;
            rear = nullptr;
        }
        void push(Node^ root) {
            nodeQue^ newnode = gcnew nodeQue();
            newnode->node = root;
            newnode->next = nullptr;
            if (front == nullptr) {
                front = newnode;
                rear = front;
            }
            else {
                rear->next = newnode;
                rear = rear->next;
            }
            size++;
        }
        Node^ pop() {
            if (front == nullptr) {
                return nullptr;
            }
            nodeQue^ temp = front;
            if (front == rear)
            {
                front = nullptr;
            }
            else
            {
                front = front->next;
            }
            size--;
            return temp->node;
        }
        bool empty() {
            if (front == nullptr) return true;

            return false;
        }
        Node^ Front() {
            if (front == nullptr) {
                return nullptr;
            }
            return front->node;
        }
        int Size() {
            return size;
        }

    };
}