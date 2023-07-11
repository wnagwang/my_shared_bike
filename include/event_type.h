#ifndef EVENT_TYPE_H
#define EVENT_TYPE_H

//事件类型
enum class Event_type{
    //获取手机验证码请求
    GET_MOBILE_REQ = 0x01,
    //获取手机验证码响应
    GET_MOBILE_RSP = 0x02,
    //登入请求
    LOGIN_REQ      = 0x03,
    //登入响应
    LOGIN_RSP      = 0x04,

    //未知
    NO_TYPE        = 0xff
};

//错误代码
enum class Event_error{
    MOBILE_ERROR = 0x01,
    LOGIN_ERROR  = 0x02,
    
};


#endif 