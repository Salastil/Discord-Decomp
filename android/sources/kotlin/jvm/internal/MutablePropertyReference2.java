package kotlin.jvm.internal;

import kotlin.reflect.KCallable;
import zo.i;
import zo.j;
import zo.r;

/* loaded from: classes3.dex */
public abstract class MutablePropertyReference2 extends MutablePropertyReference implements j {
    public MutablePropertyReference2() {
    }

    @Override // kotlin.jvm.internal.CallableReference
    public KCallable computeReflected() {
        return Reflection.mutableProperty2(this);
    }

    public abstract /* synthetic */ Object get(Object obj, Object obj2);

    @Override // zo.s
    public Object getDelegate(Object obj, Object obj2) {
        return ((j) getReflected()).getDelegate(obj, obj2);
    }

    @Override // kotlin.jvm.functions.Function2
    public Object invoke(Object obj, Object obj2) {
        return get(obj, obj2);
    }

    public abstract /* synthetic */ void set(Object obj, Object obj2, Object obj3);

    public MutablePropertyReference2(Class cls, String str, String str2, int i5) {
        super(CallableReference.NO_RECEIVER, cls, str, str2, i5);
    }

    @Override // kotlin.jvm.internal.MutablePropertyReference, kotlin.jvm.internal.PropertyReference, kotlin.reflect.KProperty
    public r getGetter() {
        return ((j) getReflected()).getGetter();
    }

    @Override // kotlin.jvm.internal.MutablePropertyReference, zo.k
    public i getSetter() {
        return ((j) getReflected()).getSetter();
    }
}
