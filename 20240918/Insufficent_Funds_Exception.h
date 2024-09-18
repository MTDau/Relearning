#ifndef _INSUFFICENT_FUNDS_EXCEPTION_H_
#define _INSUFFICENT_FUNDS_EXCEPTION_H_
class Insufficent_Funds_Exception : public std::exception{
    public:
    Insufficent_Funds_Exception() noexcept = default;
    ~Insufficent_Funds_Exception() = default;
    virtual const char* what() const noexcept override{
        return "Overwithdrawn of the remain funds.";
    }
};
#endif
