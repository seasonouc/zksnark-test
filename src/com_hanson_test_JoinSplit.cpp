#include "com_hanson_test_JoinSplit.h"
#include "Address.h"

using namespace libzerocash;

/*
 * Class:     com_hanson_test_JoinSplit
 * Method:    prove
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_JoinSplit_prove
  (JNIEnv *env, jobject obj){
      jstring result = (*env)->NewStringUTF(env,"prove-called");

       return result;
  }

/*
 * Class:     com_hanson_test_JoinSplit
 * Method:    generateAddress
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_JoinSplit_generateAddress
  (JNIEnv *env, jobject obj){

    Address address;
    address.getPublicAddress();

    jstring result = (*env)->NewStringUTF(env,"generate address");
    return result;
}


/*
 * Class:     com_hanson_test_JoinSplit
 * Method:    verify
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_JoinSplit_verify
  (JNIEnv *env, jobject obj){
       jboolean result = 0;
       return result;
  }