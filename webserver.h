//
// Created by user on 2023/2/1.
//

#ifndef CODERWEBSERVER_WEBSERVER_H
#define CODERWEBSERVER_WEBSERVER_H

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <stdlib.h>
#include <cassert>
#include <sys/epoll.h>

#include "./http/http_conn.h"

const int MAX_FD = 65536; //文件最大描述符
const int MAX_EVENT_NUMBER = 10000; //最大事件数
const int TIMESLOT = 5; //最小超时时间

class WebServer {
public:
    WebServer();
    ~WebServer();
    void init(int port , string user, string passWord, string databaseName,
              int log_write , int opt_linger, int trigmode, int sql_num,
              int thread_num, int close_log, int actor_model);
};


#endif //CODERWEBSERVER_WEBSERVER_H
