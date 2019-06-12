# 1 "c:\\lr\\scripts\\newcase\\\\combined_newcase.c"
# 1 "C:\\LR\\include/lrun.h" 1
 
 












 











# 103 "C:\\LR\\include/lrun.h"








































































	

 


















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 263 "C:\\LR\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 502 "C:\\LR\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 505 "C:\\LR\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 528 "C:\\LR\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 562 "C:\\LR\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 585 "C:\\LR\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 609 "C:\\LR\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);
int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);


 
 
 
 
 
 
# 676 "C:\\LR\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											int * col_name_len);
# 737 "C:\\LR\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);


 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   int const in_len,
                                   char * * const out_str,
                                   int * const out_len);
# 762 "C:\\LR\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 774 "C:\\LR\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 782 "C:\\LR\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 788 "C:\\LR\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );

int lr_save_searched_string(char *buffer, long buf_size, unsigned int occurrence,
			    char *search_string, int offset, unsigned int param_val_len, 
			    char *param_name);

 
char *   lr_string (char * str);

 
# 859 "C:\\LR\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 866 "C:\\LR\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 888 "C:\\LR\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 964 "C:\\LR\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 993 "C:\\LR\\include/lrun.h"


# 1005 "C:\\LR\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char *sourceString, char *fromEncoding, char *toEncoding, char *paramName);





 
 

















# 1 "c:\\lr\\scripts\\newcase\\\\combined_newcase.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\LR\\include/web_api.h" 1
 







# 1 "C:\\LR\\include/as_web.h" 1
 






















































 




 








 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 










# 596 "C:\\LR\\include/as_web.h"


# 609 "C:\\LR\\include/as_web.h"



























# 647 "C:\\LR\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 715 "C:\\LR\\include/as_web.h"



 
 
 






# 10 "C:\\LR\\include/web_api.h" 2












 






 











  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 





 
 
 


# 7 "globals.h" 2

# 1 "C:\\LR\\include/lrw_custom_body.h" 1
 





# 8 "globals.h" 2


 
 


# 2 "c:\\lr\\scripts\\newcase\\\\combined_newcase.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 3 "c:\\lr\\scripts\\newcase\\\\combined_newcase.c" 2

# 1 "Action.c" 1
Action()
{

	web_add_cookie("1_product=107b6602880786a11a5f7703069e9b5de2970189s%3A1%3A%221%22%3B; DOMAIN=192.168.239.1");

	web_add_cookie("pageSize=7f27ca98877cf46cc46f056fbd08fd79a6457309s%3A2%3A%2220%22%3B; DOMAIN=192.168.239.1");

	web_add_cookie("ac-cookie=%5B%7B%22data%22%3A%5B%22%5Cu7cfb%5Cu7edf%5Cu7ba1%5Cu7406%5Cu5458%22%2C%22%5Cu7cfb%5Cu7edf%5Cu7ba1%5Cu7406%5Cu5458%5Badmin%5D%22%5D%2C%22value%22%3A%22%5Cu7cfb%5Cu7edf%5Cu7ba1%5Cu7406%5Cu5458%22%2C%22result%22%3A%22%5Cu7cfb%5Cu7edf%5Cu7ba1%5Cu7406%5Cu5458%22%7D%5D; DOMAIN=192.168.239.1");

	web_add_cookie("language=1d81f71b81826d10a41c56bfe6bb8d5ba3d27d4ds%3A5%3A%22zh_cn%22%3B; DOMAIN=192.168.239.1");

	web_url("index.php", 
		"URL=http://192.168.239.1:8032/bugfree3.0.3/index.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=assets/a8aef226/jquery.min.js", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/site/login", "ENDITEM", 
		"Url=themes/classic/assets/images/blue/seperate_line.png", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/site/login", "ENDITEM", 
		"Url=themes/classic/assets/images/blue/logo_login.png", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/site/login", "ENDITEM", 
		"LAST");

    lr_start_transaction("login");

	web_submit_form("login", 
		"Snapshot=t2.inf", 
		"ITEMDATA", 
		"Name=LoginForm[username]", "Value=admin", "ENDITEM", 
		"Name=LoginForm[password]", "Value=123456", "ENDITEM", 
		"Name=LoginForm[language]", "Value=简体中文", "ENDITEM", 
		"Name=LoginForm[rememberMe]", "Value=<OFF>", "ENDITEM", 
		"EXTRARES", 
		"Url=/bugfree3.0.3/themes/classic/assets/css/form.css", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/list/1", "ENDITEM", 
		"Url=/bugfree3.0.3/themes/classic/assets/images/down.gif", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/list/1", "ENDITEM", 
		"Url=/bugfree3.0.3/themes/classic/assets/images/active.png", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/list/1", "ENDITEM", 
		"Url=/bugfree3.0.3/themes/classic/assets/images//close_div.gif", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/list/1", "ENDITEM", 
		"Url=/bugfree3.0.3/assets/a8aef226/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/list/1", "ENDITEM", 
		"Url=/bugfree3.0.3/assets/a8aef226/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/list/1", "ENDITEM", 
		"Url=/bugfree3.0.3/assets/a8aef226/jui/css/base/images/ui-icons_222222_256x240.png", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/list/1", "ENDITEM", 
		"Url=/bugfree3.0.3/assets/811484cb/img/page.gif", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/list/1", "ENDITEM", 
		"LAST");

    lr_end_transaction("login",2);

	web_submit_data("getProductModule", 
		"Action=http://192.168.239.1:8032/bugfree3.0.3/index.php/search/getProductModule", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/list/1", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=product_id", "Value=1", "ENDITEM", 
		"Name=productmodule_id", "Value=0", "ENDITEM", 
		"LAST");

	web_url("1", 
		"URL=http://192.168.239.1:8032/bugfree3.0.3/index.php/case/list/1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/list/1", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("getProductModule_2", 
		"Action=http://192.168.239.1:8032/bugfree3.0.3/index.php/search/getProductModule", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/case/list/1", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=product_id", "Value=1", "ENDITEM", 
		"Name=productmodule_id", "Value=0", "ENDITEM", 
		"LAST");

    web_reg_find("Text=Case","LAST");

	web_url("edit", 
		"URL=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/case/list/1", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/bugfree3.0.3/assets/a8aef226/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", "ENDITEM", 
		"Url=/bugfree3.0.3/assets/a8aef226/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", "ENDITEM", 
		"Url=/bugfree3.0.3/assets/a8aef226/jui/css/base/images/ui-icons_222222_256x240.png", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", "ENDITEM", 
		"Url=/bugfree3.0.3/assets/a7f481c7/themes/default/default.css", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", "ENDITEM", 
		"Url=/bugfree3.0.3/assets/a7f481c7/themes/default/default.png", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", "ENDITEM", 
		"Url=/bugfree3.0.3/assets/814c4f7b/indicator.gif", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", "ENDITEM", 
		"LAST");

	lr_think_time(59);

	web_submit_data("edit_2", 
		"Action=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/html", 
		"Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=CaseInfoView[deleted_file_id]", "Value=", "ENDITEM", 
		"Name=CaseInfoView[lock_version]", "Value=", "ENDITEM", 
		"Name=CaseInfoView[product_id]", "Value=1", "ENDITEM", 
		"Name=isPageDirty", "Value=1", "ENDITEM", 
		"Name=templateTitle", "Value=", "ENDITEM", 
		"Name=CaseInfoView[title]", "Value=电台播放时进度条是否移动", "ENDITEM", 
		"Name=layer1_module", "Value=0", "ENDITEM", 
		"Name=CaseInfoView[productmodule_id]", "Value=0", "ENDITEM", 
		"Name=CaseInfoView[case_status]", "Value=Active", "ENDITEM", 
		"Name=CaseInfoView[assign_to_name]", "Value=系统管理员", "ENDITEM", 
		"Name=CaseInfoView[mail_to]", "Value=系统管理员,", "ENDITEM", 
		"Name=CaseInfoView[priority]", "Value=1", "ENDITEM", 
		"Name=Custom[CaseType]", "Value=功能", "ENDITEM", 
		"Name=Custom[CaseMethod]", "Value=手动执行", "ENDITEM", 
		"Name=Custom[CasePlan]", "Value=功能测试", "ENDITEM", 
		"Name=Custom[ScriptStatus]", "Value=", "ENDITEM", 
		"Name=Custom[ScriptedBy]", "Value=", "ENDITEM", 
		"Name=Custom[ScriptedDate]", "Value=", "ENDITEM", 
		"Name=Custom[ScriptLocation]", "Value=", "ENDITEM", 
		"Name=Custom[CaseKeyword]", "Value=", "ENDITEM", 
		"Name=Custom[DisplayOrder]", "Value=0", "ENDITEM", 
		"Name=CaseInfoView[related_bug]", "Value=", "ENDITEM", 
		"Name=CaseInfoView[related_case]", "Value=", "ENDITEM", 
		"Name=attachment_file[]", "Value=", "File=Yes", "ENDITEM", 
		"Name=CaseInfoView[action_note]", "Value=", "ENDITEM", 
		"Name=CaseInfoView[case_step]", "Value=[步骤]<br />\r\n1.打开电台<br />\r\n2.打开《魔兽世界》<br />\r\n3.点击播放<br />\r\n4.成功播放<br />\r\n[验证]<br />\r\n进度条是否移动<br />\r\n[备注]<br />\r\n<br />", "ENDITEM", 
		"LAST");

	web_url("1_2", 
		"URL=http://192.168.239.1:8032/bugfree3.0.3/index.php/case/list/1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/bugfree3.0.3/themes/classic/assets/images/down.gif", "ENDITEM", 
		"Url=/bugfree3.0.3/themes/classic/assets/images//close_div.gif", "ENDITEM", 
		"Url=/bugfree3.0.3/assets/811484cb/img/page.gif", "ENDITEM", 
		"LAST");

	web_link("电台播放时进度条是否移动", 
		"Text=电台播放时进度条是否移动", 
		"Snapshot=t9.inf", 
		"LAST");

	web_url("getPreNextId", 
		"URL=http://192.168.239.1:8032/bugfree3.0.3/index.php/search/getPreNextId?id=7&type=case&product_id=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/case/7", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("getProductModule_3", 
		"Action=http://192.168.239.1:8032/bugfree3.0.3/index.php/search/getProductModule", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/case/list/1", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=product_id", "Value=1", "ENDITEM", 
		"Name=productmodule_id", "Value=0", "ENDITEM", 
		"EXTRARES", 
		"Url=/favicon.ico", "Referer=", "ENDITEM", 
		"LAST");

	web_url("7", 
		"URL=http://192.168.239.1:8032/bugfree3.0.3/index.php/case/7", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/case/list/1", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/bugfree3.0.3/assets/a8aef226/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", "ENDITEM", 
		"Url=/bugfree3.0.3/assets/a8aef226/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", "ENDITEM", 
		"Url=/bugfree3.0.3/assets/a8aef226/jui/css/base/images/ui-icons_222222_256x240.png", "ENDITEM", 
		"LAST");

	web_url("getPreNextId_2", 
		"URL=http://192.168.239.1:8032/bugfree3.0.3/index.php/search/getPreNextId?id=7&type=case&product_id=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/case/7", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"LAST");

	return 0;
}
# 4 "c:\\lr\\scripts\\newcase\\\\combined_newcase.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 5 "c:\\lr\\scripts\\newcase\\\\combined_newcase.c" 2

