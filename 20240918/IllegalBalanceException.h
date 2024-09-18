#ifndef __ILLEGALBALANCEEXCEPTION_H__
#define __ILLEGALBALANCEEXCEPTION_H__
class IllegalBalanceException : public std::exception
{
public:
    IllegalBalanceException() noexcept = default;
    ~IllegalBalanceException() = default;
    virtual const char* what() const noexcept override{
        return "Illegal balance exception.";
    }
};

#endif // __ILLEGALBALANCEEXCEPTIONH__
