#pragma once
//#include <fstream>
#include "trees.h"
namespace ExaminationSystem {
    using namespace System::IO;
	ref class Data {
    public:
		 static trees^ student = gcnew trees();
         static trees^ teacher = gcnew trees();
    public:
        static bool isStudentData = true;
	public: bool check(int reg, String^ dep) {
        if(isStudentData)
        return student->isPresent(student->root, reg , dep);
        else
            return teacher->isPresent(teacher->root, reg, dep);
		}
    public:
		  void Write(int roll_no, String^ first_name, String^ last_name,
			  String^ depart ,String^ year, String^ room_no, String^  timing) {
              if(isStudentData)
			 student->root = student->insert(student->root, roll_no, first_name, last_name, room_no, timing, depart, year);
              else
                  teacher->root = teacher->insert(teacher->root, roll_no, first_name, last_name, room_no, timing, depart, "");
		  }
          Node^ emptyNode() {
              Node^ node = gcnew Node();
              node->roll_no = 0;
              node->first_name = "";
              node->last_name = "";
              node->room_no = "";
              node->timing = "";
              node->depart = "";
              node->year = "";
              node->left = node->right = nullptr;

              return node;
         }
          void insertDataToFile() {

              if (isStudentData) {
                  if (student->root == nullptr) {
                     
                      return;
                  }
                  insertingData(student->root);
              }
              else {
                  if (teacher->root == nullptr) {
                     
                      return;
                  }
                  insertingData(teacher->root);
              }
          }
    public: void getData() {
        String^ file;
        trees^ current;
        if (isStudentData) {
            file = "students.txt";
            current = student;
        }
        else
        {
            file = "teachers.txt";
            current = teacher;
        }
        array<String^>^ lines = File::ReadAllLines(file);
        /*StreamReader^ fileread = File::OpenText(file);
       
      
       fileread->Close();*/
      //  if (lines->Length <= 2) return;
        if (lines->Length <= 1) return;
        int i = 0;
        while (i < lines->Length) {
            array<String^>^ values = lines[i]->ToString()->Split(' ');
           // array<String^>^ values = lines->ToString()->Split(' ');
            current->root = current->insert(current->root,System::Convert::ToInt32(values[0]), values[1],values[2], values[4], values[5], values[3], values[6]);
            i++;
        }
       
    }
    public: void Update() {
        if(isStudentData)
            if(student->root != nullptr)
                 student->root = student->upDate(student->root);
            else {
                if (teacher->root != nullptr)
                    teacher->root = teacher->upDate(teacher->root);
            }
    }
          
    private: void insertingData(Node^ v) {
              Queue q;
              String^ file;
              if (isStudentData) {
                  file = "students.txt";
                 // current.root = student->root;
              }
              else
              {
                  file = "teachers.txt";
                //  current.root = teacher->root;
              }
                  StreamWriter^ filein = File::CreateText(file);
              Node^ cur;
              q.push(v);
             // q.push(nullptr);

              while (!q.empty()) {
                  cur = q.Front();
                  q.pop();
                  if (cur == nullptr && q.Size() != 0) {
                     // cout << "\n";
                      q.push(nullptr);
                      continue;
                  }
                  if (cur != nullptr) {
                      filein->WriteLine( cur->roll_no + " " + cur->first_name + " " + cur->last_name + " " + cur->depart +" "+cur->room_no+" " + cur->timing + " " + cur->year ) ;
                      if (cur->left != nullptr) {
                         // Node^ n = cur->left;
                          q.push(cur->left);
                      }
                      if (cur->right != nullptr) {
                        //  Node^ n = cur->right;
                          q.push(cur->right);
                      }
                  }

                 
              }
              filein->Close();
          }
    public: void deleteData(Node^ node) {
        if (isStudentData) {
            student->root = student->deleteNode(student->root, node);
            if (student->root == nullptr) {
                StreamWriter^ filein = File::CreateText("students.txt");
                filein->WriteLine("");
                filein->Close();
            }
        }
        else {
            teacher->root = teacher->deleteNode(teacher->root, node);
            if (teacher->root == nullptr) {
                StreamWriter^ filein = File::CreateText("teachers.txt");
                filein->WriteLine("");
                filein->Close();
            }
        }
    }
    public:  Node^ Search(int roll, String^ dep) {
        if (isStudentData)
              return student->FindNode(student->root,roll, dep);
        else
            return teacher->FindNode(teacher->root,roll, dep);
          }
    public: array<String^>^ ReadallLines() {
        String^ file;
        if (isStudentData)
            file = "students.txt";
        else
            file = "teachers.txt";

       array<String^>^ lines = File::ReadAllLines(file);
              return lines;
                 
          }
		 
		};
}