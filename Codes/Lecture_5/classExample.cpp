#include <string>
class Image{
    public:
        Image(const std::string& file_name);
        void Draw();
    private:
        int rows_ = 0;
        int cols_ = 0;

};

int main(){
    Image image("Example.jpg");
    image.Draw();
    return 0;
} 