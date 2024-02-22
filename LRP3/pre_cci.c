# 1 "d:\\sdet training\\loadrunnerscripts\\lrp3\\\\combined_LRP3.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
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
char *   lr_unmask (const char *EncodedString);
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
# 513 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

 
 
 
 
 





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
# 574 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "d:\\sdet training\\loadrunnerscripts\\lrp3\\\\combined_LRP3.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "d:\\sdet training\\loadrunnerscripts\\lrp3\\\\combined_LRP3.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

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
	spdy_custom_request(
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
	web_set_pac(
		const char *		mpszPacUrl);
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
	spdy_submit_data(
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
	spdy_url(
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
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"

 
 
 


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
























# 908 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 2

















 







 















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
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);

  int					 
web_util_set_request_header(
	  const char *		aRequestHeaderNameStr,
	  const char *		aRequestHeaderValueStr);

 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2


 
 


# 3 "d:\\sdet training\\loadrunnerscripts\\lrp3\\\\combined_LRP3.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "d:\\sdet training\\loadrunnerscripts\\lrp3\\\\combined_LRP3.c" 2

# 1 "Action.c" 1
Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI7txxtaQPd_CINSxpVGU9Wh0qq-lorGwZsCNhOXEXN7MDvFyfNuCXjlLnmi4nx96cMDiUsbDJQLB6i9ThuqE0Ms_ZwlQ1__s0ax1UEf1MLUaACZzecLTo_rjoaw2kQB5MoWQXM-XfZJ_XLc8_INAVdgTp67Ew; DOMAIN=accounts.google.com");

	web_add_cookie("HSID=A_7sCt_SLQq6NJJqu; DOMAIN=accounts.google.com");

	web_add_cookie("SSID=Avo3qPYeN4nmd99NJ; DOMAIN=accounts.google.com");

	web_add_cookie("APISID=J2OUGWcYl7CqVvkA/Al3xXwEagQ2f0owc6; DOMAIN=accounts.google.com");

	web_add_cookie("SAPISID=aGcHjmEmumsr15JN/At6jfud9wCnQlB2L8; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PAPISID=aGcHjmEmumsr15JN/At6jfud9wCnQlB2L8; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PAPISID=aGcHjmEmumsr15JN/At6jfud9wCnQlB2L8; DOMAIN=accounts.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQIqJoB; DOMAIN=accounts.google.com");

	web_add_cookie("SID=g.a000gQiibf1XMxSfiVziDogBvRIDL5atl3BewvSG7wyaMAkXquMuSMh6-uGKlGFe_ZsLFk95oQACgYKAdgSAQASFQHGX2MiTXAnIwLuFfqu10AxdZMP4RoVAUF8yKp0l7xoDyHSIqo4_RKf_wbc0076; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PSID=g.a000gQiibf1XMxSfiVziDogBvRIDL5atl3BewvSG7wyaMAkXquMuWraWiGIWaLUX1USOt6KypQACgYKAe8SAQASFQHGX2MiqzPRtYw46TVmaYs0a5gTrxoVAUF8yKoQmW4D48vZNwRSG7G_6x1Q0076; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSID=g.a000gQiibf1XMxSfiVziDogBvRIDL5atl3BewvSG7wyaMAkXquMuzjh7WpA5xjXqPKp5A1fCKQACgYKAZwSAQASFQHGX2MinO9GFE-n93EN7HnKihCnvBoVAUF8yKohAQzbcu-IXg5xZjlmmYyH0076; DOMAIN=accounts.google.com");

	web_add_cookie("OTZ=7424953_34_34__34_; DOMAIN=accounts.google.com");

	web_add_cookie("AEC=Ae3NU9O32k8dbikofIOpT6Hso2jbGTm7tVIPuHlsZliD1zs6R6IIJriddOk; DOMAIN=accounts.google.com");

	web_add_cookie("NID=511=JAB6ZYIzy069albdNXDpdi9YHEZQDiat2C0oASNrNoZk2N_AXXF7e4rtTMnJjcmN5FZyLozTHJ8yonN8yqzB3pqRS_CIz1cS4ccus7gKfmrd2LVUwH1N1L4hS7cNktYog5_XwIu0pvowDzkGzIOKfu-cefesc51SDldfAS1Qgk-SO7kubKWyCjRfcrXGCKslFrYntKgl9QwJvWYMdTXkEkKlPgVqcZQBfB-tS6DKLshgmz5BvKebYAgOCw_zYsnW5jYlY0ZGkdz9wXMmObQ9rtMQ2Rm04ZtJjmwW_1DsSnfU62nASqcq3aYLss-PLZ-A; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:_Z5BBRp3NhQoZmcmJwt-hzHcNtrIEniMPeWCXfUMW3X3MLIIP9jEaJlQZVhYiOncE4es3cPDkUOnjO-q0se_bdussG4Usw:3mU7zffWxozdrL6P; DOMAIN=accounts.google.com");

	web_add_cookie("LSID=o.chat.google.com|o.chromewebstore.google.com|o.drive.google.com|o.gds.google.com|o.groups.google.com|o.mail.google.com|o.meet.google.com|o.photos.fife.usercontent.google.com|o.photos.google.com|s.IN:g.a000gQiibZUs-gg6OC4qkKTZ5mG2NBoisKI6eqaIB6Ff-bneFHp1fS4OsSu1nazEv56LaZ0CsAACgYKAeYSAQASFQHGX2MiQapeSefmJ0EPHP6r46jOcxoVAUF8yKpOTMWbrZAGvfm3NcwA_-eL0076; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-1PLSID=o.chat.google.com|o.chromewebstore.google.com|o.drive.google.com|o.gds.google.com|o.groups.google.com|o.mail.google.com|o.meet.google.com|o.photos.fife.usercontent.google.com|o.photos.google.com|s.IN:g.a000gQiibZUs-gg6OC4qkKTZ5mG2NBoisKI6eqaIB6Ff-bneFHp1ymNFlQncmS-mkKaGV4bhpAACgYKAU8SAQASFQHGX2MivLeIB8Pr_FbkJLCfd2ZS6RoVAUF8yKoNaSVO7IQGwhy2R-15_N0r0076; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-3PLSID=o.chat.google.com|o.chromewebstore.google.com|o.drive.google.com|o.gds.google.com|o.groups.google.com|o.mail.google.com|o.meet.google.com|o.photos.fife.usercontent.google.com|o.photos.google.com|s.IN:g.a000gQiibZUs-gg6OC4qkKTZ5mG2NBoisKI6eqaIB6Ff-bneFHp1Rsfz1GU0-Z82CCiBvvJaWQACgYKATcSAQASFQHGX2Mio1a0bL_Wf_EdjnnFadBfVBoVAUF8yKrlKAz78zHp1XK64SJTUZ2h0076; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2024-02-19-10; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PSIDTS=sidts-CjIBYfD7Z5V5QA3HWiSBn5LviSSMNH1zEe57Z-HfaRz_gL-ImFZIAvfROoRD5R5uTJVU_BAA; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSIDTS=sidts-CjIBYfD7Z5V5QA3HWiSBn5LviSSMNH1zEe57Z-HfaRz_gL-ImFZIAvfROoRD5R5uTJVU_BAA; DOMAIN=accounts.google.com");

	web_add_cookie("SIDCC=ABTWhQHeFKHURoU4I3EqOlgCijzjAJ-twetyLqFQclqUSvSIv3C7JRy7zeJGIZdwQIcn930JqA; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PSIDCC=ABTWhQGN_yY0PanpEph8_vjwpJXu64ZN1A5Z5-IZuxeo0iJd8YNG-GK8CVYjfnQqmn1XovNlKhY; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSIDCC=ABTWhQFks3kFSuzG17yiy1BBDjE9qKho2ZFYXO4qLYJVKw0zv1713kZFI4WcCU-eiPtqlkW1Oww; DOMAIN=accounts.google.com");

	
	lr_think_time(11);

	web_url("loadrunnertips.com", 
		"URL=http://loadrunnertips.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"LAST");

	

	
	 

	web_add_cookie("_ga=GA1.2.971446286.1708339430; DOMAIN=loadrunnertips.com");

	web_add_cookie("_gid=GA1.2.1874777944.1708339430; DOMAIN=loadrunnertips.com");

	web_add_cookie("_gat=1; DOMAIN=loadrunnertips.com");

	web_add_cookie("__gads=ID=2ff64fc7d68c6f18:T=1708339430:RT=1708339430:S=ALNI_MZKiZvSBP2f_4D220j5VTjIN-BT-g; DOMAIN=loadrunnertips.com");

	web_add_cookie("__gpi=UID=00000d0a43cfd030:T=1708339430:RT=1708339430:S=ALNI_MZCweJ0H1PRIS1O7ARJ8PDJN_g2Dw; DOMAIN=loadrunnertips.com");

	web_add_cookie("__eoi=ID=6213fd62c9511ac5:T=1708339430:RT=1708339430:S=AA-AfjYeqgP4PsrK-o9rOwGQYIcU; DOMAIN=loadrunnertips.com");

	web_add_cookie("_ga_7JE8RPG7Y7=GS1.2.1708339432.1.0.1708339432.0.0.0; DOMAIN=loadrunnertips.com");

	lr_think_time(12);

	web_url("LoadRunner_Correlation_Challenge_Mod.aspx", 
		"URL=http://loadrunnertips.com/LoadRunner_Correlation_Challenge_Mod.aspx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://loadrunnertips.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"LAST");

	

	lr_think_time(5);

	

	 

	web_add_cookie("_ga_7JE8RPG7Y7=GS1.2.1708339432.1.1.1708339446.0.0.0; DOMAIN=loadrunnertips.com");

	lr_think_time(5);

	web_submit_data("LoadRunner_Correlation_Challenge_Mod.aspx_2", 
		"Action=http://loadrunnertips.com/LoadRunner_Correlation_Challenge_Mod.aspx", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://loadrunnertips.com/LoadRunner_Correlation_Challenge_Mod.aspx", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=__VIEWSTATE", "Value=/wEPDwUJOTg3MDg5NjY4ZGRZYyiQR31NIRoqCeI3HwDc24DGdd83OnvgUVN4lMbpJQ==", "ENDITEM", 
		"Name=__VIEWSTATEGENERATOR", "Value=3074961D", "ENDITEM", 
		"Name=__EVENTVALIDATION", "Value=/wEdAAKdPCcy9t3wpVKAHy9yYsFnnlbekVM3R/a0oKRYPLuORAlqSlgLVPQiVf0OfQa6TNTr1tbmayZqPlqZ0Zuo3KmB", "ENDITEM", 
		"Name=ctl00$head$btnStart", "Value=Start", "ENDITEM", 
		"LAST");

	

	lr_think_time(4);

	

	 

	lr_think_time(13);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:L35qlUpPXTzM2UES0Ao3vFNMSmsZHBGtPE3Q6CeJ2nw&cup2hreq=902d912d13341387217053cdcf895c1375c84efbf45dd14f8e74e4d3992669d6", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.30f5f886b824ca1efde5174370fc03cab3c02e9c309bc381857430f5843a510b\"}]},\"ping\":{\"ping_freshness\":\"{3736e8db-ecb1-4db4-ba9f-4540e21f9e65}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"1.3.36.311\"},{\"appid\":\""
		"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{8a2ccbf3-34f3-4c30-8b7b-7f78932f4458}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\""
		":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{290d08be-6acf-4ea8-9b34-4de2e0722297}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f/20ol:20or@0.5\",\"cohortname\":\"Rollout\",\"enabled\":true,\"installdate\""
		":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.8069f8805123f74944304604381770bb694317c9e1044e096f540222dc56c0f6\"}]},\"ping\":{\"ping_freshness\":\"{209a8c18-a5ed-48c9-9e2f-db6d26c7fa9a}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"20230923.567854667.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.04dfbee1ec2fd167512805dedf3fa2a823dc28fe9fa2c97a74e664b38486110f\"}]},\"ping\":{\"ping_freshness\":\"{7caeb5f3-4234-45a4-97f4-c97cdfd9dfd5}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"434\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6134,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\""
		"ping_freshness\":\"{1dd95b78-9568-402a-ab4f-f3b48f878e03}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6134,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.338cbd67983bc23dfdcae48f34706ac81e378161918137c5242db2175f52d94e\"}]},\"ping\":{\"ping_freshness\":\"{e5ebccfe-1145-4d87-85ec-b20fe67a29e0}\",\"rd\":6258},\""
		"updatecheck\":{},\"version\":\"2024.2.14.0\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{5c1d356f-5656-4018-b8d2-d59c2ae0b042}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\""
		"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname\":\"Chrome 106+\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{666c8cbc-8ad7-4ada-b206-79c737ec5e7f}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{df527751-3353-4e76-bdd7-5215b4021b26}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\""
		"{c71c26e3-ed14-478f-ab6c-78d1f3d545e9}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cb0c781d5870726b7b1c46b031524bd2f772e8cac9614a0dfad7c5b799be575d\"}]},\"ping\":{\"ping_freshness\":\"{412a2737-1cc4-44b9-85c5-6f27b056a1e1}\",\"rd\":6258},\"updatecheck\":{},\""
		"version\":\"8556\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{5f800cd1-d599-4c48-83ea-abef7090d614}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\""
		",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{019329da-049c-4ec9-a8c5-176ba88aec36}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.4ccf4cac4c37dd966d3bee0b3a4137894eecde1b22a9d4e7ef07d5081b5cf67a\"}]},\"ping\":{\"ping_freshness\":\"{2cfbc1de-62be-4480-9b3b-218ac5733986}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"867\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\""
		"ping\":{\"ping_freshness\":\"{dbb0ed24-b3a9-406a-adf6-f7fd9fc0196f}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.af8fa6822a4a3a4aeaf78dd2b562b3b76ed3ef0b362f8ebc822df79717c996df\"}]},\"ping\":{\"ping_freshness\":\"{819962b7-e237-4697-a0ca-b85879ee79f1}\",\"rd\":6258},\""
		"updatecheck\":{},\"version\":\"3019\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{874e28c1-48f7-4a68-9e5e-26e527fda831}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\""
		"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{a772877c-7601-4487-9c8d-c51f5614dbef}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\""
		"installdate\":6148,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cb80f7697a4bf93f5ba730126c381fe89e37b6a264215bcbe4e12628b8940e98\"}]},\"ping\":{\"ping_freshness\":\"{0a65b39c-e2f9-4bd6-97e5-da1bf5a53522}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"2024.2.17.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{222f9da4-38b9-49dc-aae8-94ba91841bcb}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.7e7996864a74a4b8db2b59c559f924f321668848edbcb85386212a4901ef0e6e\"}]},\"ping\":{\""
		"ping_freshness\":\"{b9b9fa47-701b-4ced-92a9-2252ce293b8b}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"2024.2.14.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.185\",\"protocol\":\"3.1\",\""
		"requestid\":\"{e77b38de-f00e-4f86-9300-0f4693f19c4a}\",\"sessionid\":\"{6c392e78-51d0-4eae-aab6-30ac80a0e551}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"laststarted\":0,\"name\":\"ChromiumUpdater\",\"updatepolicy\":-1,\"version\":\"123.0.6288.0\"},\"updaterversion\":\"121.0.6167.185\"}}", 
		"LAST");

	web_add_cookie("_ga_7JE8RPG7Y7=GS1.2.1708339432.1.1.1708339457.0.0.0; DOMAIN=loadrunnertips.com");

	web_submit_data("LoadRunner_Correlation_Challenge_Mod.aspx_3", 
		"Action=http://loadrunnertips.com/LoadRunner_Correlation_Challenge_Mod.aspx", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://loadrunnertips.com/LoadRunner_Correlation_Challenge_Mod.aspx", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=__VIEWSTATE", "Value=/wEPDwUJOTg3MDg5NjY4ZGRZYyiQR31NIRoqCeI3HwDc24DGdd83OnvgUVN4lMbpJQ==", "ENDITEM", 
		"Name=__VIEWSTATEGENERATOR", "Value=3074961D", "ENDITEM", 
		"Name=__EVENTVALIDATION", "Value=/wEdAAOdPCcy9t3wpVKAHy9yYsFnEZwAPPXs+fTr6SGYYqMh2jrXPBqUZcs4yqSWpp6/FIREY8A2eedeJopqLW8/6AQxkHtQQcVTOCv5vrqOvEiRFQ==", "ENDITEM", 
		"Name=ctl00$head$txtMacigNo", "Value=5453", "ENDITEM", 
		"Name=ctl00$head$btnNext", "Value=Next", "ENDITEM", 
		"LAST");

	web_custom_request("collect_7", 
		"URL=https://www.google-analytics.com/j/collect?v=1&_v=j101&a=463966673&t=pageview&_s=1&dl=http%3A%2F%2Floadrunnertips.com%2FLoadRunner_Correlation_Challenge_Mod.aspx&ul=en-gb&de=UTF-8&dt=LoadRunner%3A%20Correlation%20Challenge&sd=24-bit&sr=1280x720&vp=1263x593&je=0&_u=AACAAEABAAAAACAAI~&jid=&gjid=&cid=971446286.1708339430&tid=UA-54539864-2&_gid=1874777944.1708339430&_slc=1&z=390579916", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://loadrunnertips.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"LAST");

	lr_think_time(5);

	web_custom_request("collect_8", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-7JE8RPG7Y7&gtm=45je42e0v9134516205za200&_p=1708339477190&gcd=13l3l3l3l2&npa=0&dma=0&ul=en-gb&sr=1280x720&cid=971446286.1708339430&are=1&pscdl=noapi&_eu=ABAI&_s=1&dl=http%3A%2F%2Floadrunnertips.com%2FLoadRunner_Correlation_Challenge_Mod.aspx&dt=LoadRunner%3A%20Correlation%20Challenge&sid=1708339432&sct=1&seg=1&en=page_view&_ee=1&tfd=5800", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://loadrunnertips.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	 

	web_add_cookie("_ga_7JE8RPG7Y7=GS1.2.1708339432.1.1.1708339477.0.0.0; DOMAIN=loadrunnertips.com");

	lr_think_time(4);

	web_url("LoadRunner_Correlation_Challenge_Mod.aspx_4", 
		"URL=http://loadrunnertips.com/LoadRunner_Correlation_Challenge_Mod.aspx?dd=1&game=Table%20Tennis", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://loadrunnertips.com/LoadRunner_Correlation_Challenge_Mod.aspx", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"LAST");

	
	lr_think_time(5);

	

	 

	web_add_cookie("_ga_7JE8RPG7Y7=GS1.2.1708339432.1.1.1708339487.0.0.0; DOMAIN=loadrunnertips.com");

	lr_think_time(16);

	web_submit_data("LoadRunner_Correlation_Challenge_Mod.aspx_5", 
		"Action=http://loadrunnertips.com/LoadRunner_Correlation_Challenge_Mod.aspx?dd=1&game=Table+Tennis", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://loadrunnertips.com/LoadRunner_Correlation_Challenge_Mod.aspx?dd=1&game=Table%20Tennis", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=__VIEWSTATE", "Value=/"
		"wEPDwUJOTg3MDg5NjY4ZBgBBR5fX0NvbnRyb2xzUmVxdWlyZVBvc3RCYWNrS2V5X18WFAUPY3RsMDAkaGVhZCRjaGsxBQ9jdGwwMCRoZWFkJGNoazIFD2N0bDAwJGhlYWQkY2hrMwUPY3RsMDAkaGVhZCRjaGs0BQ9jdGwwMCRoZWFkJGNoazUFD2N0bDAwJGhlYWQkY2hrNgUPY3RsMDAkaGVhZCRjaGs3BQ9jdGwwMCRoZWFkJGNoazgFD2N0bDAwJGhlYWQkY2hrOQUQY3RsMDAkaGVhZCRjaGsxMAUQY3RsMDAkaGVhZCRjaGsxMQUQY3RsMDAkaGVhZCRjaGsxMgUQY3RsMDAkaGVhZCRjaGsxMwUQY3RsMDAkaGVhZCRjaGsxNAUQY3RsMDAkaGVhZCRjaGsxNQUQY3RsMDAkaGVhZCRjaGsxNgUQY3RsMDAkaGVhZCRjaGsxNwUQY3RsMDAkaGVhZCRjaGsxOAUQY3RsMDAkaGV"
		"hZCRjaGsxOQUQY3RsMDAkaGVhZCRjaGsyMGqXlyHw3od8ns/doV7jTOBVMKvPxwN1j1KsshtV11Mb", "ENDITEM", 
		"Name=__VIEWSTATEGENERATOR", "Value=3074961D", "ENDITEM", 
		"Name=__EVENTVALIDATION", "Value=/wEdABbkfGNv0lbea+Z4JeynJg3Yqasbxwl7lgdZZfZ2n+oFBQVQb/BqIrnuBsiTd5SBX0XDYFHBMur5v1vZ4LUwZUXEv1bMxkD35JfEKTUHLZw4URiuU4nLTwtj/r43949QF/fcXs3H4McaH100kUT9gcPbmpgAqjKGNuaeCinRuZ1fUy+AnrQ09DAotZNMecAuJqp7WQG8SNPlN0mV+BwfjWNo1u1qRUoE0ucmhZnEUyRDxJcIA7A2BTvsdZNVrY2UTuZixHoyjomtObKrCt06E5/UAoxFdFd6aX6eQs9i0oSTXDkt+Do6wOIA4KwaXE0pUgA2isLFBHeYufrtFtgXd6f0DGIM5YFnsJoM+HWSXfRSONHx4ZdtIVVepNuIcMSoJKpEnOUHlLp+"
		"oSuQ44YhcKDN8B20tHcNPS9okHrSEPNbXouIr9iCQfCWk3E3COVI0FitjCG6HyklgWzfDmV0vuRMUSjdSxCzQ852y1d51LPaJxPca2Q7qj/IAoj901bSYPY=", "ENDITEM", 
		"Name=ctl00$head$chk4", "Value=on", "ENDITEM", 
		"Name=ctl00$head$chk8", "Value=on", "ENDITEM", 
		"Name=ctl00$head$chk10", "Value=on", "ENDITEM", 
		"Name=ctl00$head$chk16", "Value=on", "ENDITEM", 
		"Name=ctl00$head$btnNext3", "Value=Next", "ENDITEM", 
		"LAST");

	web_custom_request("collect_11", 
		"URL=https://www.google-analytics.com/j/collect?v=1&_v=j101&a=626445325&t=pageview&_s=1&dl=http%3A%2F%2Floadrunnertips.com%2FLoadRunner_Correlation_Challenge_Mod.aspx%3Fdd%3D1%26game%3DTable%2BTennis&ul=en-gb&de=UTF-8&dt=LoadRunner%3A%20Correlation%20Challenge&sd=24-bit&sr=1280x720&vp=1263x593&je=0&_u=AACAAEABAAAAACAAI~&jid=1766384104&gjid=2001007478&cid=971446286.1708339430&tid=UA-54539864-2&_gid=1874777944.1708339430&_r=1&_slc=1&z=797022116", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://loadrunnertips.com/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"LAST");

	return 0;
}
# 5 "d:\\sdet training\\loadrunnerscripts\\lrp3\\\\combined_LRP3.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "d:\\sdet training\\loadrunnerscripts\\lrp3\\\\combined_LRP3.c" 2

