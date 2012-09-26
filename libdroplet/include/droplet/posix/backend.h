/*
 * Copyright (C) 2010 SCALITY SA. All rights reserved.
 * http://www.scality.com
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY SCALITY SA ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL SCALITY SA OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation
 * are those of the authors and should not be interpreted as representing
 * official policies, either expressed or implied, of SCALITY SA.
 *
 * https://github.com/scality/Droplet
 */
#ifndef __DROPLET_POSIX_BACKEND_H__
#define __DROPLET_POSIX_BACKEND_H__ 1

/* PROTO backend.c */
/* src/backend.c */
dpl_status_t dpl_posix_list_bucket(dpl_ctx_t *ctx, const char *bucket, const char *prefix, const char *delimiter, dpl_vec_t **objectsp, dpl_vec_t **common_prefixesp, char **locationp);
dpl_status_t dpl_posix_make_bucket(dpl_ctx_t *ctx, const char *bucket, const dpl_sysmd_t *sysmd, char **locationp);
dpl_status_t dpl_posix_post(dpl_ctx_t *ctx, const char *bucket, const char *resource, const char *subresource, dpl_option_t *option, dpl_ftype_t object_type, const dpl_dict_t *metadata, const dpl_sysmd_t *sysmd, const char *data_buf, unsigned int data_len, const dpl_dict_t *query_params, char **resource_idp, char **locationp);
dpl_status_t dpl_posix_post_buffered(dpl_ctx_t *ctx, const char *bucket, const char *resource, const char *subresource, dpl_option_t *option, dpl_ftype_t object_type, const dpl_dict_t *metadata, const dpl_sysmd_t *sysmd, unsigned int data_len, const dpl_dict_t *query_params, dpl_conn_t **connp, char **locationp);
dpl_status_t dpl_posix_put(dpl_ctx_t *ctx, const char *bucket, const char *resource, const char *subresource, dpl_option_t *option, dpl_ftype_t object_type, const dpl_dict_t *metadata, const dpl_sysmd_t *sysmd, const char *data_buf, unsigned int data_len, char **locationp);
dpl_status_t dpl_posix_put_range(dpl_ctx_t *ctx, const char *bucket, const char *resource, const char *subresource, dpl_option_t *option, dpl_ftype_t object_type, const dpl_range_t *range, const dpl_dict_t *metadata, const dpl_sysmd_t *sysmd, const char *data_buf, unsigned int data_len, char **locationp);
dpl_status_t dpl_posix_put_buffered(dpl_ctx_t *ctx, const char *bucket, const char *resource, const char *subresource, dpl_option_t *option, dpl_ftype_t object_type, const dpl_dict_t *metadata, const dpl_sysmd_t *sysmd, unsigned int data_len, dpl_conn_t **connp, char **locationp);
dpl_status_t dpl_posix_put_range_buffered(dpl_ctx_t *ctx, const char *bucket, const char *resource, const char *subresource, dpl_option_t *option, dpl_ftype_t object_type, const dpl_range_t *range, const dpl_dict_t *metadata, const dpl_sysmd_t *sysmd, unsigned int data_len, dpl_conn_t **connp, char **locationp);
dpl_status_t dpl_posix_get(dpl_ctx_t *ctx, const char *bucket, const char *resource, const char *subresource, dpl_option_t *option, dpl_ftype_t object_type, const dpl_condition_t *condition, char **data_bufp, unsigned int *data_lenp, dpl_dict_t **metadatap, dpl_sysmd_t *sysmdp, char **locationp);
dpl_status_t dpl_posix_get_range(dpl_ctx_t *ctx, const char *bucket, const char *resource, const char *subresource, dpl_option_t *option, dpl_ftype_t object_type, const dpl_condition_t *condition, const dpl_range_t *range, char **data_bufp, unsigned int *data_lenp, dpl_dict_t **metadatap, dpl_sysmd_t *sysmdp, char **locationp);
dpl_status_t dpl_posix_get_buffered(dpl_ctx_t *ctx, const char *bucket, const char *resource, const char *subresource, dpl_option_t *option, dpl_ftype_t object_type, const dpl_condition_t *condition, dpl_metadatum_func_t metadatum_func, dpl_dict_t **metadatap, dpl_sysmd_t *sysmdp, dpl_buffer_func_t buffer_func, void *cb_arg, char **locationp);
dpl_status_t dpl_posix_get_range_buffered(dpl_ctx_t *ctx, const char *bucket, const char *resource, const char *subresource, dpl_option_t *option, dpl_ftype_t object_type, const dpl_condition_t *condition, const dpl_range_t *range, dpl_metadatum_func_t metadatum_func, dpl_dict_t **metadatap, dpl_sysmd_t *sysmdp, dpl_buffer_func_t buffer_func, void *cb_arg, char **locationp);
dpl_status_t dpl_posix_head(dpl_ctx_t *ctx, const char *bucket, const char *resource, const char *subresource, dpl_option_t *option, dpl_ftype_t object_type, const dpl_condition_t *condition, dpl_dict_t **metadatap, dpl_sysmd_t *sysmdp, char **locationp);
dpl_status_t dpl_posix_head_all(dpl_ctx_t *ctx, const char *bucket, const char *resource, const char *subresource, dpl_option_t *option, dpl_ftype_t object_type, const dpl_condition_t *condition, dpl_dict_t **metadatap, char **locationp);
dpl_status_t dpl_posix_get_metadata_from_headers(const dpl_dict_t *headers, dpl_dict_t **metadatap, dpl_sysmd_t *sysmdp);
dpl_status_t dpl_posix_delete(dpl_ctx_t *ctx, const char *bucket, const char *resource, const char *subresource, dpl_option_t *option, dpl_ftype_t object_type, char **locationp);
dpl_status_t dpl_posix_genurl(dpl_ctx_t *ctx, const char *bucket, const char *resource, const char *subresource, dpl_option_t *option, time_t expires, char *buf, unsigned int len, unsigned int *lenp, char **locationp);
dpl_status_t dpl_posix_copy(dpl_ctx_t *ctx, const char *src_bucket, const char *src_resource, const char *src_subresource, const char *dst_bucket, const char *dst_resource, const char *dst_subresource, dpl_option_t *option, dpl_ftype_t object_type, dpl_copy_directive_t copy_directive, const dpl_dict_t *metadata, const dpl_sysmd_t *sysmd, const dpl_condition_t *condition, char **locationp);
#endif