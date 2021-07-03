#include "01.stack_and_queue/04.cat_dog_queue.h"

namespace coding_interview_guide::stack_and_queue::cat_dog_queue {

IndexPet::IndexPet(const Pet& pet, long index) : pet(pet), index(index) {}

IndexPet::IndexPet(Pet&& pet, long index) : pet(std::move(pet)), index(index) {}

CatDogQueue::CatDogQueue() = default;

void CatDogQueue::push(const Pet& pet) {
    if(pet.get_type() == "dog"){
        _dog_queue.push(IndexPet(pet, _index++));
    }else{
        _cat_queue.push(IndexPet(pet, _index++));
    }
}

void CatDogQueue::push(Pet&& pet) {
    if(pet.get_type() == "dog"){
        _dog_queue.push(IndexPet(std::move(pet), _index++));
    }else{
        _cat_queue.push(IndexPet(std::move(pet), _index++));
    }
}

void CatDogQueue::pop_all() {
    while(!is_dog_empty() && !is_cat_empty()){
        if(_dog_queue.front().index > _cat_queue.front().index){
            _cat_queue.pop();
        }else{
            _dog_queue.pop();
        }
    }
    pop_dog();
    pop_cat();
}

void CatDogQueue::pop_dog() {
    while(!is_dog_empty()){
        _dog_queue.pop();
    }
}

void CatDogQueue::pop_cat() {
    while(!is_cat_empty()){
        _cat_queue.pop();
    }
}

bool CatDogQueue::is_empty() const {
    return !(_dog_queue.size() || _cat_queue.size());
}

bool CatDogQueue::is_dog_empty() const {
    return !_dog_queue.size();
}

bool CatDogQueue::is_cat_empty() const {
    return !_cat_queue.size();
}

const Pet& CatDogQueue::front() const {
        if(_dog_queue.front().index > _cat_queue.front().index){
            return _cat_queue.front().pet;
        }else{
            return _dog_queue.front().pet;

        }
}

Pet& CatDogQueue::front() {
        if(_dog_queue.front().index > _cat_queue.front().index){
            return _cat_queue.front().pet;
        }else{
            return _dog_queue.front().pet;

        }   
}

}  // namespace coding_interview_guide::stack_and_queue::cat_dog_queue
