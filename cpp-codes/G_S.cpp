//getters & setters
class Movie{
     private:
          string title;
     public:
          string rating;

          Book(string title, string rating){
               this->title = title;
               this->setRating(rating);
          }

          string getRating(){
               return this->rating;
          }
          void setRating(string rating){
               if(rating == "G" || rating == "PG" || rating == "PG-13" || rating == "R" || rating == "NR" || ){
                    this->rating = rating;
               } else {
                    this->rating = "NR";
               }     
          }
};
