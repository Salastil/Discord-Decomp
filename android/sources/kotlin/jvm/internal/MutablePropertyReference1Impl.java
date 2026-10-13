package kotlin.jvm.internal;

import cp.r;
import kotlin.reflect.KClass;
import kotlin.reflect.KDeclarationContainer;

/* loaded from: classes3.dex */
public class MutablePropertyReference1Impl extends MutablePropertyReference1 {
    public MutablePropertyReference1Impl(KDeclarationContainer kDeclarationContainer, String str, String str2) {
        super(CallableReference.NO_RECEIVER, ((ClassBasedDeclarationContainer) kDeclarationContainer).getJClass(), str, str2, !(kDeclarationContainer instanceof KClass) ? 1 : 0);
    }

    @Override // kotlin.jvm.internal.MutablePropertyReference1
    public Object get(Object obj) {
        return ((r) getGetter()).call(obj);
    }

    @Override // kotlin.jvm.internal.MutablePropertyReference1
    public void set(Object obj, Object obj2) {
        ((r) getSetter()).call(obj, obj2);
    }

    public MutablePropertyReference1Impl(Class cls, String str, String str2, int i5) {
        super(CallableReference.NO_RECEIVER, cls, str, str2, i5);
    }

    public MutablePropertyReference1Impl(Object obj, Class cls, String str, String str2, int i5) {
        super(obj, cls, str, str2, i5);
    }
}
