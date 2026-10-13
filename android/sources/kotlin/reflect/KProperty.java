package kotlin.reflect;

import zo.n;

/* loaded from: classes3.dex */
public interface KProperty extends KCallable {
    n getGetter();

    boolean isConst();

    boolean isLateinit();
}
