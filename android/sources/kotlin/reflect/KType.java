package kotlin.reflect;

import java.util.List;
import zo.b;
import zo.c;

/* loaded from: classes3.dex */
public interface KType extends b {
    List getArguments();

    c getClassifier();

    boolean isMarkedNullable();
}
