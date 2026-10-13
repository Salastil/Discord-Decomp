package kotlin.jvm.internal;

import org.jetbrains.annotations.NotNull;
import zo.d;
import zo.k;
import zo.n;

/* loaded from: classes3.dex */
public abstract class MutablePropertyReference extends PropertyReference implements k {
    public MutablePropertyReference() {
    }

    @Override // kotlin.jvm.internal.PropertyReference, kotlin.reflect.KProperty
    @NotNull
    public abstract /* synthetic */ n getGetter();

    @Override // zo.k
    @NotNull
    public abstract /* synthetic */ d getSetter();

    public MutablePropertyReference(Object obj) {
        super(obj);
    }

    public MutablePropertyReference(Object obj, Class cls, String str, String str2, int i5) {
        super(obj, cls, str, str2, i5);
    }
}
