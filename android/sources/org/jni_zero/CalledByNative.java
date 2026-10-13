package org.jni_zero;

import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

@Target({ElementType.CONSTRUCTOR, ElementType.METHOD})
@UsedReflectively
@Retention(RetentionPolicy.CLASS)
/* loaded from: classes.dex */
public @interface CalledByNative {
    String value() default "";
}
