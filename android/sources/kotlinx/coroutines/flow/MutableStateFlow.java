package kotlinx.coroutines.flow;

import qr.a0;

/* loaded from: classes3.dex */
public interface MutableStateFlow extends a0, MutableSharedFlow {
    boolean a(Object obj, Object obj2);

    Object getValue();

    void setValue(Object obj);
}
