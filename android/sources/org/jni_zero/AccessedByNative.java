package org.jni_zero;

import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

@Target({ElementType.FIELD})
@UsedReflectively
@Retention(RetentionPolicy.CLASS)
/* loaded from: classes.dex */
public @interface AccessedByNative {
    String value() default "";
}
