package kotlin.jvm.internal;

import kotlin.reflect.KCallable;
import zo.r;
import zo.s;

/* loaded from: classes3.dex */
public abstract class PropertyReference2 extends PropertyReference implements s {
    public PropertyReference2() {
    }

    @Override // kotlin.jvm.internal.CallableReference
    public KCallable computeReflected() {
        return Reflection.property2(this);
    }

    public abstract /* synthetic */ Object get(Object obj, Object obj2);

    @Override // zo.s
    public Object getDelegate(Object obj, Object obj2) {
        return ((s) getReflected()).getDelegate(obj, obj2);
    }

    @Override // kotlin.jvm.functions.Function2
    public Object invoke(Object obj, Object obj2) {
        return get(obj, obj2);
    }

    public PropertyReference2(Class cls, String str, String str2, int i5) {
        super(CallableReference.NO_RECEIVER, cls, str, str2, i5);
    }

    @Override // kotlin.jvm.internal.PropertyReference, kotlin.reflect.KProperty
    public r getGetter() {
        return ((s) getReflected()).getGetter();
    }
}
