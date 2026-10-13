package xr;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import kotlinx.serialization.KSerializer;

@Retention(RetentionPolicy.RUNTIME)
/* loaded from: classes3.dex */
public @interface e {
    Class with() default KSerializer.class;
}
